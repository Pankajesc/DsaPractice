//sorting using vector
#include<bits/stdc++.h>
  using namespace std;
          int sortArr(vector<int>& arr){
              sort(arr.begin(), arr.end());
          }
    int main(){
        vector<int> arr={1,8,78,9,54,77};
        sortArr(arr);
        for(int i:arr){
            cout<<i<<" ";       
             }
        return 0;
    }