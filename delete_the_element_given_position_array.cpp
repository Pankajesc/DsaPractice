// A program to delete all thlicate element of an array
#include <iostream>
#define MAX_SIZE 100 // Maximum size of the array
using namespace std;

int main()
{
    int arr[MAX_SIZE]; // Declares an array of size 100
    int num; // Total number of elements in array
    int i, j, k;

    //Enter size of array
    cout<<"Enter size of the array : ";
    cin>>num;

    //Reading elements of array
    cout<<"Enter elements in array : ";
    for(i=0; i<num; i++)
    {
        cin>>arr[i];
    }

    // Finding all duplicate elements in array

    for(i=0; i<num; i++)
    {
        for(j=i+1; j<num; j++)
        {
            //If any duplicate found */
            if(arr[i] == arr[j])
            {
                // Delete the current duplicate element
                for(k=j; k<num; k++)
                {
                    arr[k] = arr[k + 1];
                }

                //Decrement size after removing duplicate element
                num--;

                // If shifting of elements occur then don't increment j
                j--;
            }
        }
    }

    // Print array after deleting duplicate elements

    cout<<"\nArray elements after deleting duplicates : ";
    for(i=0; i<num; i++)
    {
        cout<<"\t"<<arr[i];
    }

    return 0;
}
