//An e-commerce company plans to give their c
#include<bits/stdc++.h>
   using namespace std;
        int discount(int number){
            int sum=0;
              while(number!=0){
                  int lastDigit=number%10;
                  if(!(lastDigit%2==0)){
                        sum=lastDigit+sum;
                  }
                  number/=10;
              }
              return sum;
        }


     int main(){
                int number;
                cin>>number;
                int totalDiscount=discount(number);
                cout<<totalDiscount;
        return 0;
     }