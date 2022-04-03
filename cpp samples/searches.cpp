#include <iostream>

using namespace std;

int sequecialSearch(int array[], int size, int goal){

  for(int i=0; i<size; i++){
    if (array[i] == goal) return i;
  }

  return -1;
}

// 1 2 5 6 8 10
// 1 2 5 || 6 8 10
// 8 10
// 8 || 10
// 8 *

int binarySearch(int array[], int size, int goal){

  int start = 0;
  int end = size-1;

  while( start <= end ){
    int middle = (start+end)/2;

    if(array[middle] == goal) return middle;
    else if(array[middle] > goal) end = middle-1;
    else if(array[middle] < goal) start = middle + 1;
  }

  return -1;
}

// 2 1 5 4 6 9 2 3 4

int main(int argc, char const *argv[]) {
  
  int n;
  cin >> n;

  int array[n];
  for(int i=0; i<n; i++) cin >> array[i];

  return 0;
}
