#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    int ans = 0;
    int sims = 0;

    if (n1 == n2) sims++;
    if (n1 == n3) sims++;
    if (n1 == n4) sims++;
    if (n2 == n3) sims++;
    if (n2 == n4) sims++;
    if (n3 == n4) sims++;
    
    cout << sims << endl;
    switch(sims){
      case(6):  
        ans=3;
        break;
      case(3):  
        ans=2;
        break;      
      default:
        ans = sims
        break;
    }
  
    cout << ans << endl;

    return 0;
}
