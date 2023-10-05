//finding number of digit in a number

  #include<iostream>
   using namespace std;


       bool  ispal(int n){
           int rev=0;
           int temp=n;

           while( temp!=0){

               int lt= temp%10;
               rev = rev*10+lt;
               temp=temp/10;

           }
           return (rev==n);


        }
         int main(){

            cout<<ispal(362);



          return 0;



    }
