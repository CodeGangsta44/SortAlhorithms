#include <iostream>

using namespace std;

int main(){
  bool sorted = false;
  int len = 5;
  int arr[len] = {5, 0, 0, 4, 6};
  int swap;
  while(!sorted){
    for(int i = 0; i < len - 1; i++){
      if(arr[i] < arr[i + 1]){ /* > - from low to high < - from high to low*/
        swap = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = swap;
        break;
      }
      if(i == len -2) sorted = true;
    }
  }
  for(int i = 0; i < len; i++){
    cout<<arr[i]<<endl;
  }
}
