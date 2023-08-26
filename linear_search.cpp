#include<bits/stdc++.h>
using namespace std;
int l_search(int arr[],int n,int x){
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            index =i;
            break;
        }
    }
    if(index>=0){
        cout<< "Element found at index position: "<< index;
    }
    else{
        cout << "Element not found in array..!";
    }
}
int main(){
    int n,x;
    cout << "Enter the size of the array:";
    cin>> n;
    int arr[n];
    cout << "Enter elements to the array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter element to search:";
    cin >> x;
    l_search(arr,n,x);


}