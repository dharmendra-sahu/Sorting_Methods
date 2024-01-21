#include<iostream>
using namespace std;
void printarray(int*arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubblesort(int*arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            }
        }
    }
}
int main(){
    int n=6;
    int arr[n]={3,2,1,5,4,-1};
    printarray(arr,n);
    bubblesort(arr,n);
    printarray(arr,n);
}