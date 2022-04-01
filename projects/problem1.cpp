#include <iostream>
#include <string>
using namespace std;
void function (int *,int);

int main() {
  int x=6;
   
  int* p;
  p = &x;

  cout << *p;
  cout << endl;

  int array[4] = {3,9,12,13};
  int *ptr;
  const char *str = "C++ is such fun!"; 

  for (int i=0; i < 4 ; ++i){
   cout << *(array+i);
  } 

  cout << endl;
 
  ptr = (array+2);

  cout << *(ptr+1);
  cout << endl;

  cout << str;
  cout << endl;

  cout << *(str+4);
  cout << endl;

  cout << *(array+2);
  cout << endl;
  
  int theArray[3] = {5,3,9};

  function(theArray, 3);

  return 0; 
}  
 
// // Using the below and the function definition below main, write one line of code within main that will properly call the function
// // Write the proper function call here
// where len contains the number of element in the array

void function (int *a,int len)  { 
  for (int i =0; i < len; i++)
     cout << a[i]; 
}