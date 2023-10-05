#include<iostream>
   using namespace std;

         int countZero(int n){
           int fact=1;
           for(int i=1; i<=n; i++){
               fact=fact*i;

           }
            int res=0;
            while(fact%10==0){

                res++;
                fact= fact/10;


            }
                   return res;
         }
           int main(){
               cout<<countZero(4);

          return 0;
    }
