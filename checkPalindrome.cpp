 #include<iostream>
 #include<bits/stdc++.h>
 using namespace std;
     int lenof(char name[]){
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
       char name[20];
       cin>>name;
       cout<<"string before reversed"<<name<<endl;
       int count=0;
       int len=lenof(name);
       cout<<"the length of the sting is : "<<len<<endl;
       char rev=reverse(name,len);
         if(name==rev){
        cout<<"This is a palindrome number: ";
      }
    return 0;
  }