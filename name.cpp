#include<iostream>
using namespace std;

      int length(char name[]){
        int count=0;
        for(int i=0; name[i]!='\0'; i++){
            count++;

        }
        return count;
      }
      void reverse(char name[], int n){
        int s=0;
        int e=n-1;
        while(s<e){
            swap(name[s++], name[e--]);
        }
      }
   int main(){
     char name[50];
     cout<<"Enter Your Name: "<<endl;
     cin>>name;

     cout<<"Your Name is : "<<name<<endl;
       int len= length(name);
     cout<<"length of string is: "<<len;
     reverse(name,len);
     cout<<"Your Name is : "<<name<<endl;
    return 0;
   }