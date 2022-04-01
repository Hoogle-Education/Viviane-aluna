#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){

  ifstream file("Sales.txt");

  int size;
  file >> size;

  vector <double> values;

  double total = 0;

  for(int i=0; i<size; i++){
    double aux;
    file >> aux;
    values.push_back(aux);
    total += aux;
  }

  double greatest = values[0];

  for(int i=1; i<values.size(); i++){
    if(values[i] > greatest) 
      greatest = values[i];
  } 

  cout << "Total Sales: " << total << endl;
  cout << "Maximum amount: " << greatest << endl;

  return 0;
}