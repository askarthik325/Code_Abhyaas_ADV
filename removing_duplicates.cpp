// Program for removing duplicates from an assending array
#include<bits/stdc++.h>
using namespace std;
int duplicate(int arr[],int n){
    int i=0,j=1;
    while(j<n){
        if(arr[i]==arr[j]){
            j++;
        }
        else{
            i++;
            arr[i]=arr[j];
            j++;
        }
    }
    return i+1;

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
    n=duplicate(arr,n);
    cout << "Array after removing duplicates:";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}