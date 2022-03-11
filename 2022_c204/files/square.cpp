#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float square(float x0, float x, float lim) {
    if ((abs(pow(x0, 2) - x)) <= lim)
        return x0;

    return square(x, ((pow(x0, 2) + x) / (2.0 * x0)), lim);

}

int main() {
    float x0 = 0.0;
    float x = 0.0; 
    float lim = 0.0;

    cin >> x >> x0 >> lim;

    float res = square(x0, x, lim); 

    cout << fixed << setprecision(4);
    cout << res << endl;

    return 0;

}
