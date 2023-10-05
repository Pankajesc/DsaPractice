#include<bits/stdc++.h> 
 using namespace std;

         string RemoveDuplicateChar(string str){
               string ans="";
               int i,j;
               for( i=0; i<str.size(); i++){
                  for(j=0; j<i; j++){
                     if(str[i]==str[j]){
                        break;
                     }
                  }
                  if(j==i){
                     ans+=str[i];
                  }
               }
               return ans;
         }
     int main(){
      string str="takeuforwardtk";
      string afterRemoval=RemoveDuplicateChar(str);
      cout<<afterRemoval;
      return 0;
     }