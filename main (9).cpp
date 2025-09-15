#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введіть x: ";
    cin >> x;

    if (x <= 0) {
        y = log(-x + 1);   // ln(-x+1)
    } else {
        y = atan(log(x));  // arctg(ln(x))
    }

    cout << "y = " << y << endl;
    return 0;
}
