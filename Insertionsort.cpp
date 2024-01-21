#include<iostream>
using namespace std;
void printarray(int*arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertionsort(int*arr,int n){
    for(int i=1; i<n; i++){
        for(int j=i; j>=1; j--){
            if(arr[j]>=arr[j-1])break;
            else{
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
            }
            
        }
    }
}
int main(){
    int n=6;
    int arr[n]={6,4,3,2,1,-2};
    printarray(arr,n);
    insertionsort(arr,n);
    printarray(arr,n);
    //for(int i=0; i<n; i++){
      //  cout<<arr[i]<<" ";
    
    //cout<<endl;
    //for(int i=1; i<n; i++){
      //  int j=i;
        //while(j>=1){
          //  if(arr[j]>=arr[j-1])break;
            //else{
              //  swap(arr[j],arr[j-1]);
            //}
            //j--;
        //}
    //}
    //for(int i=0; i<n; i++){
   //     cout<<arr[i]<<" ";
 //   }
}