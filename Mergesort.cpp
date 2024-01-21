#include<iostream>
using namespace std;
void printarray(int *arr,int n){
    for(int t=0; t<n; t++){
        cout<<arr[t]<<" ";
    }
    cout<<endl;
}

void merge(int *arr,int low,int mid, int high ){
    int i=low;
    int j=mid+1;
    int k;
    int b[high-low+1];
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            b[k]=arr[i];
        }
        else{
            b[k]=arr[j];
        }
        i++;
        j++;
        k++;
    }
    while(i<=mid){
        b[k]=arr[i];
        i++;
        k++;
    }
    while(j<=mid){
        b[k]=arr[j];
        j++;
        k++;
    }
    for(int i=low; i<high; i++){
        arr[i]=b[i];
    }
}
void mergesort(int*arr,int low,int high){
    int mid=(low+high)/2;
    if(low<high){

        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
}

int main (){
    int n=6;
    int arr[n]={8,4,3,-1,-3,-2};
    printarray( arr, n);
    mergesort( arr,0,6);
    printarray(arr , n);
}