#include<bits/stdc++.h>
using namespace std;
class heap {
    public:
    int arr[100];
    int size = 0;
    heap(){
        arr[0] = -1;
        size = 0;
    }
    void insert(int val){
        size = size+1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else{
                return ;
            }
        }

    }
    // 
    void deletefromHeap() {
    if(size == 0) {
        cout << "nothing to delete" << endl;
        return;
    }

    // Step 1: Put last element into root
    arr[1] = arr[size];
    // Step 2: Remove last element
    size--;

    // Step 3: Take root node to its correct position (Heapify Down)
    int i = 1;
    while(i <= size) {
        int leftIndex = 2 * i;
        int rightIndex = 2 * i + 1;
        int largest = i;

        // Check if left child exists and is greater than current largest
        if(leftIndex <= size && arr[largest] < arr[leftIndex]) {
            largest = leftIndex;
        }
        // Check if right child exists and is greater than current largest
        if(rightIndex <= size && arr[largest] < arr[rightIndex]) {
            largest = rightIndex;
        }

        // If the largest is not the current node, swap and continue
        if(largest != i) {
            swap(arr[i], arr[largest]);
            i = largest;
        } else {
            return; // Node is in correct position
        }
    }
}

    void print(){
        for(int i = 1; i<=size; i++){
            cout << arr[i] <<" ";

        }cout<<endl;
    }
};
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i;
    int right = 2*i+1;

    // Use <= to include the element at index n
    if(left <= n && arr[largest] < arr[left]){
        largest = left;
    }
    if(right <= n && arr[largest] < arr[right]){
        largest = right;
    }

    if(largest != i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}
void heapsort(int arr[], int n) {
    int currentSize = n;
    while(currentSize > 1) {
        // Step 1: Swap root (largest) with the last element
        swap(arr[currentSize], arr[1]);
        
        // Step 2: Reduce heap size (last element is now in sorted position)
        currentSize--;
        
        // Step 3: Propagate the new root down to its correct position
        heapify(arr, currentSize, 1);
    }
}

int main(){
    heap h;
    h.insert(50);
    h.insert(55);
    h.insert(53);
    h.insert(52);
    h.insert(54);
    h.print();
    h.deletefromHeap();
    h.print();
    int arr[6] = {-1,54,53,55,52,50};
    int n = 5;
    for(int i = n/2; i>0; i--){
        heapify(arr,n,i);
    }
    cout<< "printing the array now "<<endl;
    for(int i = 1; i < n; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;
    return 0;
}