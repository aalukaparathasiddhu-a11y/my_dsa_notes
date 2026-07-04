#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
  
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
if(arr[j]<arr[min]) min=j;
        }
 swap(arr[i],arr[min]);
    }
    return;
}

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        int didwap=0;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){ swap(arr[j],arr[j+1]);
        didwap=1;
            }
           }
            if(didwap==0)break;
        }
    
    return;
}
void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
            }
            else break;
        }
    }
}
int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];  // choose last element as pivot
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1);   // left
        quickSort(arr, pi + 1, high);  // right
    }
}
int main(){
    }