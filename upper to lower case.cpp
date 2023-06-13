// changing uper case string to lover case lower to upper case string
#include <bits/stdc++.h>

using namespace std;



        int main(){
           char A[]="WeLComE";
           for(int i=0; A[i]!=0; i++){
               if(A[i]>='A' && A[i]<=90){
                    A[i]=A[i]+32;

               }
               else if(A[i]>='a' && A[i]<=122){
                   A[i]=A[i]-32;

               }


           }


            cout<<A;

    return 0;
}
