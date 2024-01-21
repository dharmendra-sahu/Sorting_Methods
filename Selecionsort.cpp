#include<iostream>
#include<climits>
using namespace  std;
int main(){
    int n=6;
    int arr[n]={8,9,2,3,1,4};
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min=INT_MAX;
    int mindx=-1;
    for(int i=0; i<n-1; i++){
        for(int j=i; j<n; j++){
            if(arr[j]<=min){
                min=arr[j];
                mindx=j;
                 swap(arr[i],arr[j]);
            }
        }
         //swap(arr[i],arr[j]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}