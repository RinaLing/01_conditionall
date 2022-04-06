

#include <iostream>
#include <cmath>

int main() {
    double a, b, c, d, x1, x2;
    std::cin >> a >> b >> c;
    if (a == 0) {
        if (b != 0) {
            std::cout << -c / b;
        }
        else {
           
        }
    }
    else {
        d = (b * b - 4 * a * c);
        if (d < 0) {
           
        }
        else {
            if (d == 0) {
                x1 = x2 = -b / (2 * a);
                std::cout << x1;
            }
            else {
                x1 = (-b + sqrt(d)) / (2 * a);
                x2 = (-b - sqrt(d)) / (2 * a);
                std::cout << x1 << x2;
            }
        }
    }
}
