// A program to insert a number in a sorted array
#include<iostream>
using namespace std;

void getarray(int* array,int size){
    for (int i = 0; i < size ; i++)
    {
        cin>>array[i];
    }
}
void insertSorted(int *array, int size, int element){
    int i;
    for (i = size - 1; (i >= 0 && array[i] > element); i--)
        array[i + 1] = array[i];

    array[i + 1] = element;

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
    cout<<"Enter the Elements of the sorted array below - "<<endl;
    getarray(array,size);
    int element;
    cout<<"Enter the Element to insert in the sorted array : ";
    cin>>element;
    insertSorted(array,size,element);
    cout<<"Array after insersion [ "; showArray(array,size+1); cout<<"]"<<endl;
return 0;}
