#include<bits/stdc++.h>
using namespace std;
void findleader(vector<int> &arr){
    int n = arr.size();
    int max = arr[n-1];
    cout<<max<<" ";
    for(int i = n-2; i > 0; i--){
        if(arr[i] > max){
            max = arr[i];
            cout<<arr[i];
        }
    }
    
 
}