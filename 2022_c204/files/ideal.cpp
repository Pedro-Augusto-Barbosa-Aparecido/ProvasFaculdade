#include <iostream>

using namespace std;

float ideal (float h, char sexo) {
    switch (sexo) {
        case 'M':
            return (72.7 * h) - 58;
        case 'F':
            return (62.1 * h) - 44.7;
        default:
            return 0.0;

    }

}

int main () {
    float height = 0;
    char sex;

    cin >> height >> sex;

    cout << "Peso ideal = " << ideal(height, sex) << "kg\n";

    return 0;

}
