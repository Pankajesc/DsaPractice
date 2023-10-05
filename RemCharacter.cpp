//Remove brackets from an algebraic expression
#include<bits/stdc++.h>
       using namespace std;
         string RemoveCharcter(string str){
            string result="";
               for(int i=0; i<str.size(); i++){
                   if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
                      result+=str[i];
                   }
                   else{
                    str[i]='\0';
                   }
               }
               return result;
         }
            int main(){
                 string str="take!688@09)$W(2uforward%@*";
                 string Afterremoving=RemoveCharcter(str);
                 cout<<Afterremoving;
                return 0;
            }