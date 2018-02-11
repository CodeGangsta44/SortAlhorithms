#include <iostream>

using namespace std;

int main(){
  int len = 5;
  int arr[len] = {4, 0, 7, 0, 9};
  int index;
  int swap;
  int start = 0;
  int sorted = false;
  while (!sorted){
    int value = arr[start];
    for (int i = start; i < len; i++){
      if (arr[i] < value){ /* < - from low to high > - from high to low*/
        value = arr[i];
        index = i;
      }
    }
    swap = arr[start];
    arr[start] = arr[index];
    arr[index] = swap;
    if (start == len - 2) sorted = true;
    start++;
  }
  for(int i = 0; i < len; i++){
    cout<<arr[i]<<endl;
  }
}
