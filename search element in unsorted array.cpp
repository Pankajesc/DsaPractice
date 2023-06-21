#include <iostream>
#include <bits/stdc++.h>
using namespace std;


    int search(int arr[], int n,  int x){
        for(int i=0; i<n; i++){
            if(arr[i]==x){
                return i;
            }

        }
        return -1;

    }
    int main()
        {
                   int n=5;
                   int x=8;
            int arr[]={1,2,5,3,9};


                   cout<<search(arr, n, x);

    return 0;
}
