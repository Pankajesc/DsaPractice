#include<iostream>
using namespace std;
struct rectangle{
    int lenth;
    int breadth;

};
int main(){
    rectangle r={10,5};
    cout<<r.lenth<<endl;
    cout<<r.breadth<<endl;

    rectangle *p=&r;
    cout<<p->lenth<<endl;
    cout<<p->breadth<<endl;

    return 0;

}
