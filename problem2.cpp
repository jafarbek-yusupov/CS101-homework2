#include <iostream>
using namespace std;

int main(){
  int a, b;
  cin >> a >> b;
  if(a==1)  cout << "Bus" << endl;
  else if(b==1)  cout << "Walk" << endl;
  else  cout << "Bike" << endl;
  return 0;
}
