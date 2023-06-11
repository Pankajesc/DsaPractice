// A program insert an element in an array at a given index
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void insertAt(int* array,int size, int element, int index){
    for (int i = index-1; i < size; i++)
    {
        array[size-i] = array[size-i-1];
    }
    array[index] = element;
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
    int element,index;
    cout<<"Enter the Element to insert in the array followed by the Index at which to insert with a SPACE: ";
    cin>>element>>index;
    insertAt(array,size,element,index-1);
    cout<<"Array after insersion [ "; showArray(array,size+1); cout<<"]"<<endl;
return 0;}
