#include<bits/stdc++.h>
using namespace std;
class solution {
public:
int countplatforms(int n,int arr[],int dep[]){
    sort(arr,arr+n);
    sort(dep,dep+n);
    
    int platforms = 1;
    int result = 1;
    int i =1, j = 0;
    
    while(i < n && j < n){
        if(arr[i] <= dep[j]){
            platforms++;
            i++;
        }
        else{
            platforms--;
            j++;
        }
        result = max(result,platforms);
        
    }
    return result;
}
};