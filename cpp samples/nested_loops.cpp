#include <iostream>

using namespace std;

int main(void){

  int n;
  cin >> n;

  int v[n];
  for(int i=0; i<n; i++) cin >> v[i];

  // n operations
  for(int i=0; i<n; i++) cout << v[i] << " ";

  cout << endl;

  // n + n-1 + n-2 + n-3 + ... + 1
  // (n^2+n)/2
  for(int i=n-1; i>=0; i--){
    for(int j=i; j>=0; j--){
      cout << v[j] << " ";
    }

    cout << endl;
  }

  // O(n^2)

  return 0;
}