#include <iostream>

using namespace std;

int somatory(int n){

  // base case
  if(n==1) return 1;

  // recursion case
  return n + somatory(n-1);
}

// 0 1 1 2 3 5 8 13 21 34
// fib(n) = fib(n-1) + fib(n-2)

int fib(int n){

  if(n==0) return 0;
  if(n==1) return 1;

  return fib(n-1) + fib(n-2);
}

int main(){

  int sum = 0;
  int n = 100;

  for(int i=1; i<=n; i++){
    sum += i;
  }

  cout << "bottom up: " << sum << endl;

  cout << "top down: " << somatory(100) << endl;

  return 0;
}