#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[],int n){
    if(n == 0 || n == 1){
        cout << -1<<" "<<-1<<endl;
    }
    sort(arr,arr+n);
    int second_small=arr[1];
    int second_large=arr[n-2];

    cout<<"second smallest is "<< second_small << endl;
    cout<<"second largest is "<< second_large << endl;

}
int main(){
    int arr[] = {1,2,4,6,7,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    getElements(arr,n);
    return 0;
}