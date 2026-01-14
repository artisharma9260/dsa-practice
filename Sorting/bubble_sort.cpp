#include<bits/stdc++.h>
using namespace std;
class Bubblesort {
public:
  void bubble_sort(vector<int>& arr){
      int n = arr.size();
      for(int i = n-1; i>=0; i--){
          for(int j = 0; j<= i-1;j++){
              if(arr[j] > arr[j+1]) {
                  swap(arr[j], arr[j+1]);
              }
          }
      }
      cout << "After Using Bubble sort:\n";
      for(int num : arr) {
          cout << num << " ";
      }
      cout<<endl;
  }
};