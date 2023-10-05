#include<bits/stdc++.h>
  using namespace std;
    void checkPalindrome(string str){
        string rev;
        for(int i=str.size()-1; i>=0; i--){
            rev.pushback(str[i]);
        }
        if(str==rev){
            cout<<"this string is palindrome";
        }
        else{
            cout<<"this is not a palindrome";
        }
    }

    int main(){
        string str;
        cin>>str;
        checkPalindrome(str);
        return 0;
    }