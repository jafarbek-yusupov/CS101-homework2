#include <iostream>
using namespace std;

int main() {
    double a, b, r;
    char c;
    cin >> a >> c >> b;
    switch(c){
        case '+':
            r = a + b;
        break;
        case '-':
            r = a - b;
        break;
        case '*':
            r = a * b;
        break;
        case '/':
            if (b == 0) {
                cout << "Division by zero is NOT allowed!" << endl;
            } else {
                r = a / b;
            }
        break;
        default:
            cout << "Invalid operator" << endl;
        break;
    }
    cout << r << endl;

    return 0;
}
