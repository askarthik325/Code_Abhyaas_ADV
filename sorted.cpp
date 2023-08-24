// program to check weather the array is sorted or not...
#include<bits/stdc++.h>
using namespace std;
void sorted(int arr[],int n){
    bool asc,dsc = true; // asc = ascending , dsc = descending
    for(int i=0;i<n-1;i++){
        if(arr[i+1]>=arr[i]){
            asc=false;
            break;
        }
        if(arr[i+1]<=arr[i]){
            dsc=false;
            break;
        }
    }
    if(asc||dsc){
        cout << "Array is Sorted..!";
    }
    else{
        cout << "Array is not Sorted...!";
        
    }

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
    sorted(arr,n);
    return 0;
}