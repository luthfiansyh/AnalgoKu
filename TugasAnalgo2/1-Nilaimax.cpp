#include <iostream>
using namespace std;

int main(){
    int arr[5] = {2,4,8,16,32};
    int panjangArr = sizeof(arr)/sizeof(arr[0]);
    int maks = arr[0];
    int i = 2;
    
    while(i<panjangArr){
        if(arr[i] > maks){
            maks = arr[i];
        }
        i++;
    }
    
    cout<<"\n Nilai maks dari array: "<<maks;
}

