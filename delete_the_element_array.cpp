// A program to delete an element of an array from a given position
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void deleteAt(int* array,int size, int index){
    for (int i = index; i < size; i++)
    {
        array[i] = array[i+1];
    }
    array[size-1] = -1;
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
    int array[size];
    cout<<"Enter the Elements of the array below - "<<endl;
    getarray(array,size);
    int index;
    cout<<"Enter the Position of the element to delete from the array: ";
    cin>>index;
    deleteAt(array,size,index-1);
    cout<<"Array after insersion [ "; showArray(array,size); cout<<"]"<<endl;
return 0;}
