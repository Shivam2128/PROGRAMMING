#include <iostream>
using namespace std;

void reverse (int arr[] , int n){
  int start =0 , end= n-1;
  while (start<=end){
    swap(arr[start] , arr[end]);
    start ++;
    end--;  
    }
}



void printarray (int arr[], int n) {
  for (int i=0; i<n ; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {1,2,3,4,7,-9};
  int brr[5] ={2,4,5,6,1};


  reverse (arr, 6);
  reverse (brr, 5);

  printarray (arr , 6);
  printarray (brr , 5);
  return 0;
}
