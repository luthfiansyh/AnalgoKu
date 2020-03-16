#include <iostream>
using namespace std;

int main(){
  int arr[5] = {1,3,5,7,9};
  int panjangArr = sizeof(arr)/sizeof(arr[0]);
  int i = 1;
  int y = 3;
  int index;
  bool found = false;

  while(i <= panjangArr && !found){
    if(arr[i] == y){
        found = true;
    }
    else i++;
  }
  
  if(found == true){
    index = i;
  }
  else index = 0; //jika tidak ditemukan index = 0
  
  cout<<"\nIndex elemen yang dicari :"<<index<<endl;
}
