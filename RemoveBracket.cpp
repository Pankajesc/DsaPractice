//Removal of bracket of expression using null value '\0'
#include<bits/stdc++.h>
  using namespace std;
    string removeBracket(string str){
        for(int i=0; i<str.size(); i++){
            if(str[i] =='(' || str[i] ==')'){
                str[i]='\0';
            }
        }
        return str;
    }
    int main(){
          string str="a+(b+c)-(z-a)";
            string newstr=removeBracket(str);
            cout<<newstr;
        return 0;
    }