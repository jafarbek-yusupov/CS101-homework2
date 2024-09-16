#include <iostream>
using namespace std;

int main() {
    char c;
    double a;
    cin >> c >> a;
    if((c=='M' && a<1.7) || c=='F' && a<1.6)  cout << "Short" << endl;
    else if((c=='M' && a>1.85) || c=='F' && a>1.75)  cout << "Tall" << endl;
    else  cout << "Normal" << endl;
    return 0;
}
