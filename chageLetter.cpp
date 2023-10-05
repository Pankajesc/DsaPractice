//Change every letter with next lexicographic alphabet
#include<bits/stdc++.h>
  using namespace std;
            string      ChangeEveryLetter(string str){
                   for(int i=0; i<str.size(); i++){
                       int ascii=(int)(str[i]);

                       if(ascii==90){
                        str[i]=char(65);
                       }
                       else if(ascii==122){
                        str[i]=char(97);
                       }
                       else if((ascii>=65 && ascii<90) || (ascii>=97 && ascii<122)){
                          str[i]=char(ascii+1);
                       }
                   }
                   return str;
            }
      int main(){
        string str="abcdxyz";
        string change=ChangeEveryLetter(str);
        cout<<change;
        return 0;
      }