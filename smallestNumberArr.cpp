#include<bits/stdc++.h>
  using namespace std;
     void smallestNum(int arr[], int n){
              sort(arr, arr+n);
                for(int i=0; i<n; i++){
                    cout<<arr[i]<<" ";
                }
     }
     int main(){
         int arr[]={5,6,8,4,26,87,54};
                 int n=sizeof(arr)/sizeof(arr[0]);
               smallestNum(arr, n);
                int smallest=arr[0];
                cout<<endl;
                cout<<smallest;
        return 0;
     }