//Count the number of words in a given string
#include<bits/stdc++.h>
using namespace std;
            int counWords(string str){
                int count=0;
                for(int i=0; i<str.size(); i++){
                    if(str[i]==' '){
                        count=count+1;
                    }
                }
                return count;
            }
  using namespace std;
          int main(){
            string str="Hello Goole  sdjds dsjd hfdxd dsjj dsadsf";
            int countword=counWords(str);
            cout<<countword;
            return 0;
          }