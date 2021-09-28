#include <iostream>
#include <cmath>

const double pi = M_PI;

// Implement the function(s) ellipsoid_volume for question 9 here

template <typename T>
T ellipsoid_volume (T a, T b, T c){
    return (4/3 * pi * a * b * c);
}


// DO NOT CHANGE any of the following code.
int main() {
    float float_v = ellipsoid_volume(3.f, 2.f, 1.f);
    std::cout << "4/3 * pi * 3.f * 2.f * 1.f = " << float_v << std::
        endl;
    
    double double_v = ellipsoid_volume(3., 2., 1.);
    std::cout << "4/3 * pi * 3.f * 2.f * 1.f = " << double_v << std::
        endl;
        
    double_v = ellipsoid_volume(3, 2, 1);
    std::cout << "4/3 * pi * 3.f * 2.f * 1.f = " << double_v << std::
        endl;
    
    // d)
    float a = 5.0;
    float b = 3.0;
    float c = 23.05;
    float float_v2 = ellipsoid_volume(a, b, c);
    std::cout << "4/3 * pi * 5.0 * 3.0 * 23.05 = " << float_v2 << std::
        endl;
}

