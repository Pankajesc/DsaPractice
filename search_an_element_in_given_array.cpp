/// A program insert an element in an array at the beginning
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void insertBeginning(int* array,int size, int element){
    for (int i = 0; i < size; i++)
    {
        array[size-i] = array[size-i-1];
    }
    array[0] = element;
}
void showArray(int array[],int usize){
    for (int i = 0; i < usize ; i++)
    {
        cout<<array[i]<<" ";
    }
}
int main(){
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int array[size+1];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    int element;
    cout<<"Enter the Element to insert at the beginnig of the array : ";
    cin>>element;
    insertBeginning(array,size,element);
    cout<<"Array after insersion [ "; showArray(array,size+1); cout<<"]"<<endl;
return 0;}
