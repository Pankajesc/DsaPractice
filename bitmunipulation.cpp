//swapin two number with xor operaor
#include<bits/stdc++.h>
   using namespace std;
   int main(){

       int a=5;
       int b=8;
       cout<<"before swaping "<<a<<" "<<b<<endl;
       a= a^b;
       b= b^a;
       a= a^b;
    cout<<"after  swaping "<<a<<" "<<b;


   return 0;


   }
