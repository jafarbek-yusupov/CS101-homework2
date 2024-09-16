#include <iostream>
using namespace std;

int main(){
  long long x;
  cin >> x;
  if(x>=-2147483647 && x<=2147483647)  cout << "YES" << endl;
  else  cout << "NO" << endl;
  return 0;
}
