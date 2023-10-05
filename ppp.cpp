#include<iostream>
using namespace std;
int main() {
int a,b;
cout<<"enter a and b value"<<endl;
cin>>a>>b;
try
{
    if(b!=0)
        cout<<a/b;
    else
        throw 102;
}
    catch (int i)
    {
        cout<<"division by zero exeption"<<i<<endl;
        return 0;
    }
}
