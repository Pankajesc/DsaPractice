#include<bits/stdc++.h>
  using namespace std;
  string checkPalindrome(string str){
    string rev;
        for(int i=str.size()-1; i>=0; i--){
            rev=rev+str[i];
        }
        return rev;
   }
   int main(){
      string str;
      cin>>str;

      string reverse= checkPalindrome(str);

      if(str==reverse){
        cout<<"this is a Palindrome string";
      }
      else{
        cout<<"this string is not a palindrome string";
      }
    return 0;
   }