#include<bits/stdc++.h>
  using namespace std;
     int main(){
        string str;
        cin>>str;
       string rev;
       for(int i=str.size()-1; i>=0; i--){
         // rev=rev+str[i];
         str.push_back(str[i]);
       }
       cout<<rev;

        return 0;
     }