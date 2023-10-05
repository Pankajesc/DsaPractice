  #include<bits/stdc++.h>
   using namespace std;

    int powers(int x ,int n){

          int res=1;
          for(int i=0; i<n;  i++)

            res= res * x;

           return res;
    }

           int main () {
            powers(3, 4);

     return 0;

    }



