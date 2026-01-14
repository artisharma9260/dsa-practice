#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr,int low,int high){
    int pivot = arr[low];
    int i =low+1;
    int j=high;
    
    while(true) {
        while(i <=high && arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i < j){
            swap(arr[i],arr[j]);
        }
        else break;
    }
    swap(arr[low], arr[j]);
    return j;
}
void quicksort(vector<int>& arr,int low,int high){
    if(low < high) {
        int pivotIndex = partition(arr,low,high);
        quicksort(arr,low,pivotIndex-1);
        quicksort(arr,pivotIndex+1,high);
    }
}