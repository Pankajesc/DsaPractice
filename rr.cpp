#include<iostream>
#include<math.h>
using namespace std;
int main () {
    char a[20];
    int math;
    int phy;
    int chem;
    int hindi;
    int english;
    cout<<"name";
    cin>>math>>phy>>chem>>hindi>>english;
    int per=math+phy+chem+hindi+english;

    per= per/5;
    cout<<"per of student"<<per;

return 0;
}
