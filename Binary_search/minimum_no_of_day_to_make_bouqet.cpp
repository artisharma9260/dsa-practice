class Solution {
public:
     bool possible(vector<int>& a,int mid,int m,int k){
        int count=0;
        int noofb=0;
        for(int i=0;i<a.size();i++){
            if(a[i]<=mid){
                count=count+1;
                if(count==k){
                    noofb++;
                    count=0;
                }
            }
            else{
                count=0;
            }
            if(noofb>=m) return true;
            
        }
        return false;
     }
    int bs(vector<int>& a,int m,int k){
        int ans=-1;
        int min = *min_element(a.begin(), a.end());
        int low=min;
        int max = *max_element(a.begin(), a.end());
        int high=max;
        while(low<=high){
            int mid=(low+high)/2;
            if(possible(a,mid,m,k)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        return bs(bloomDay,m,k);
        
    }
};