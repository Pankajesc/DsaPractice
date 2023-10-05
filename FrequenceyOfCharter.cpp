#include<bits/stdc++.h>
  using namespace std;
             int countfrequency(string str){
                int count=0;
                 for(int i=0; i<str.size(); i++){
                    for(int j=0; j<str.size(); j++){
                          if(str[i]==str[j]){
                            count++;
                          }
                    }
                 }
                    
             } 
   int main(){
              string str="takeuforward";
              countfrequency(str);
    return 0;
   }