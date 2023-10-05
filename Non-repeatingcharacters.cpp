#include<bits/stdc++.h>
  using namespace std;
      string NonRepeatingChar(string str){
                     string newstr=" ";
            for(int i=0; i<str.size(); i++){
                 for(int j=0; j<str.size(); j++){
                    if(str[i]!=str[j]){
                           newstr=str[i];   
                    }
                 }
            }
            return newstr;
       }
     int main(){
        string str="google";
        string newstirng=NonRepeatingChar(str);
                 cout<<newstirng;
        return 0;
     }