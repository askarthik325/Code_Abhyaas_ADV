// Program for left roatating an elment in an array.
#include<bits/stdc++.h>
using namespace std;
int leftrotate(int arr[],int n){
    int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;

}
int main(){
    int n;
    cout<< "Enter the size of array:";
    cin>> n;
    int arr[n];
    cout<<"Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    leftrotate(arr,n);
    cout << "The array after left rotate is :";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
