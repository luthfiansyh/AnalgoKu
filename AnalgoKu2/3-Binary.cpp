#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    int i = 2;
    int j = sizeof(arr)/sizeof(arr[0]);
    int y = 4;
    int index, mid;
    bool found = false;
  
    while(!found && i <= j){
        mid  = (i + j)/2;
        if(arr[mid] == y){
            found = true;
        }
        else if(arr[mid]< y){
                i = mid + 1;
        }
        else {
            j = mid - 1;
        }
    }
    
    if(found == true){
        index = mid;
    }
    else index = 0;
    
    cout<<"\nIndex elemen yang dicari: "<<index<<endl;
}

