


#include <bits/stdc++.h> 

  using namespace std;
int largestElement(vector<int> &arr, int n) {
        
         int largest=arr[0];

         for(int i=0; i<n; i++){
             if(arr[i]>largest){

                  largest=arr[i];
             }
             
         }

         return largest;
    
}
 int main(){
        vector<int> arr={5,7,34,9,3,96,4};
             int n=8;
     
     
           int s=largestElement(arr, n);
           cout<<s;
     
     
     return 0;
 }
