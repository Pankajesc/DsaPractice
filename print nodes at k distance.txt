// print nodes at k distance
#include <bits/stdc++.h>
using namespace std;
   struct Node{
       int key;
       Node *left;
       Node *right;

       Node(int k){
           key=k;
           left=right=NULL;
       }
   };
     void printkdist(Node *root, int k){
         if(root==NULL){
            return;
         }
         if(k==0){
            cout<<root->key<<" ";
         }
         else{
            printkdist(root->left, k-1);
            printkdist(root->right, k-1);
         }
     }
     /*
             TREE
             10
           /    \
          20     30
        /   \      \
      40     50     70
                      \
                      80

*/
       int main(){
           Node *root=new Node(10);
           root->left=new Node(20);
           root->left->left=new Node(40);
           root->left->right=new Node(50);
           root->right=new Node(30);
           root->right->right=new Node(70);
           root->right->right->right=new Node(80);
            printkdist(root,2);
   return 0;
   }

