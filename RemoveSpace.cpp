#include<bits/stdc++.h>
  using namespace std;
     string RemoveSpace(string str){
            remove(str.begin(), str.end(), ' ');
        return str;
     }
   int main(){
             string str="take u forward";
             string AfterRemovingSpace=RemoveSpace(str);
            cout<<AfterRemovingSpace;
    return 0; 
   }