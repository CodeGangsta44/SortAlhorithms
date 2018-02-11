#include <iostream>

using namespace std;

int main(){
  int len = 4;
  int arr[len] = {4, 0, 5, 0};
  for (int counter = 1; counter < len; counter++){ /* > - from low to high < - from high to low*/
    int swap = arr[counter];
    int i = counter - 1;
    for (i; arr[i] < arr[i + 1] && i>= 0;){
      arr[i + 1] = arr[i];
      arr[i] = swap;
      i--;
    }
  }
  for (int counter = 0; counter < len; counter++){
    cout<<arr[counter]<<endl;
  }
}
