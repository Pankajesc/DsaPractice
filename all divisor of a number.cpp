// all divisiors of a number

    #include<iostream>
   using namespace std;

    void printDivisors(int n ){
        for( int i =1; i<=n; i++){

            if(n%i==0){

                cout<<i<<endl;
            }
        }
        }
        int main(){
         printDivisors(16);

     return 0;

    }



