#include<iostream>
using namespace std;
int main() {
   int a,b,c;

  cin>>a>>b>>c;
if (a>b) {
        if (a>c) {
    cout<<"max is a"<<a;
        }
        else {
                cout<<c;

}
}
else {
        if(b>c) {
    cout<<"max is b"<<b;
}

 else {
        cout<<"max is c"<<c;
}
}

   return 0;
}
