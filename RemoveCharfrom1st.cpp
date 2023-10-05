//Remove Characters from first String present in the Second String
#include<bits/stdc++.h>
  using namespace std;
      string RemoveCharcterFromFirststr(string str1, string str2){
        int i,j;
            for( i=0; i<str1.size(); i++){
                for(j=0; j<i; j++){
                    if(str1[i]==str2[j])
                    str1[i]='\0';
                }
            }
            return str1;
      }
  int main(){
    string str1="xyzpw";
    string str2="lmn";
  
    string afterRemove=RemoveCharcterFromFirststr(str1, str2);
    cout<<afterRemove;
    return 0;
  }