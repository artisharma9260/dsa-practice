#include<bits/stdc++.h>
using namespace std;
void findleader(vector<int> &arr){
    int n = arr.size();
    
    for(int i = 0; i < n; i++){
        bool isleader = true;
        for(int j = i+1; j < n;j++){
            if(arr[i]<= arr[j]){
                isleader = false;
                break;
            }
        }
        if(isleader){
            cout<<arr[i]<<" ";
        }
    }
}