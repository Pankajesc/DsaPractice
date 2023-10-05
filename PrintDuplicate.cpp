#include<bits/stdc++.h>
   using namespace std;
        void   PrintDuplicate(string str){
                int counts[26]={0};
                for(int i=0; i<str.size(); i++){
                      counts[str[i]-'a']++;
                }
                for(int i=0; i<26; i++){
                    if(counts[i]>1)
                    cout<<(char)(i+'a')<<"-"<<counts[i]<<endl;
                }
            }

    int main(){
               string str="sasjaljsddsfddj";
            PrintDuplicate(str); 
        return 0;
    }