//Jackson, a math research student, is developing an application on 
#include<bits/stdc++.h>
       using namespace std;
        float areaTri(int base1, int height1){
                      float area=(float)((base1*height1)/2);

                      return area;
        }
        int main(){
                 int base1, height1;
                 cin>> base1 >> height1;
                 int base2, height2;
                cin>> base2 >> height2;
                 float areaOfTriangle1=areaTri(base1, height1);
                 float areaOfTriangle2=areaTri(base1, height1);
                 cout<< fixed <<setprecision(2);
                 cout<<areaOfTriangle1<<endl;
                 cout<<areaOfTriangle2;
            return 0;
        }