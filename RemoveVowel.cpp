#include<bits/stdc++.h>
  using namespace std;
     string RemoveVowel(string str){
        for(int i=0; i<str.size(); i++){
            if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||
            str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||str[i]=='O' ||str[i]=='U'){
                str[i]='\0';
            }
        }
        return str;
     }
    int main(){
      string str;
       cin>>str;
      string updatedString= RemoveVowel(str);
      cout<<updatedString;
    }