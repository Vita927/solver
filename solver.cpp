#include <iostream>
#include <cmath>

int main() {
    double a = 1, b = -3, c = 2;
    double d = b * b - 4 * a * c;
    double x1 = (-b + sqrt(d)) / (2 * a);
    double x2 = (-b - sqrt(d)) / (2 * a);
    
    std::cout << "x1 = " << x1 << ", x2 = " << x2 << std::endl;
    return 0;
}
