#include<iostream>
using namespace std;

int linearSearch(int array[],int size,int element){
    cout<<"Using Linear Search to find the element"<<endl;
    for (int i =0 ; i<size; i++){
        if (array[i]==element){
            cout<<"The element is found at place "<<i+1<<endl;
            return 1;
        }
    }
    return 0;
}
void getarray(int* array,int size){
    cout<<"Enter the elements of the array below "<<endl;
    for (int i = 0; i < size ; i++){
        cin>>array[i];
    }
}
int main(){
    int size; cout<<"Enter size of the array "; cin>>size;
    int array[size];
    getarray(array,size);
    int element; cout<<"Enter element to search in the array "; cin>>element;
    if (!linearSearch(array,size,element)) cout<<"The element is not found"<<endl;
return 0;}
