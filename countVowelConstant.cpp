#include<bits/stdc++.h>
 using namespace std;
      string toLower(string str){
            for(int i=0; i<str.size(); i++){
                if(str[i]=='A' && str[i]=='Z'){
                    str[i]+=32;
                }
            }
            return str;
      }
     void countVowel(string str){
        int countV=0;
        int consonant=0;
        int whitespace=0;
        for(int i=0; i<str.size(); i++){
            if(str[i]=='a'|| str[i]=='e'|| str[i]=='i'|| str[i]=='o'|| str[i]=='u'){
                countV++;
            }
            else if (str[i]==' '){
                whitespace++;
            }
            else{
                consonant++;
            }
        }
        cout<<"the total vowel in this string is: "<<countV<<endl;
        cout<<"the total consonant in this string is: "<<consonant<<endl;
        cout<<"the total white space is : "<<whitespace;
     }

   int main(){
    string str;
    getline(cin,str);
         toLower(str);
   countVowel(str);
    return 0;
   }