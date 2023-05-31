#include<iostream>
using namespace std;
void  fun(int A[]){
    cout<<sizeof(A)/sizeof(int)<<endl;

}

int main(){
    int A[]={2,4,5,8,7};
    int n=5;
    fun(A);


    for(int x:A)
    cout<<x<<endl;
   return 0;
}
