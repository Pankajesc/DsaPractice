
#include <iostream>
using namespace std;

int main()
{
    int n;
    int key=5;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i]==key){
                cout<<i;
                break;
            }
        }
    }
    return 0;
}
