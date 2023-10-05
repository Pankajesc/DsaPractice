#include<bits/stdc++.h>
 using namespace std;
        string   capitalizeFirstLastC(string str){
             for(int i=0; i<str.size(); i++){
                 if(i==0 || i==(str.size()-1)){
                            str[i]=towupper(str[i]);
                          }
                  else if(str[i]==' '){
                    
                    str[i-1]=towupper(str[i-1]) ;  
                    str[i+1]=towupper(str[i+1]);        
                          }
                         
             }
             return str;
           }
      int main(){
        string str="take u forward";
        string caPitalze=capitalizeFirstLastC(str);
        cout<<caPitalze;
        return 0;
      }