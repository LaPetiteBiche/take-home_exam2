#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <tuple>
#include <pybind11/pybind11.h>

void quadra(double a, double b, double c){
    double delta = b*b - 4*a*c;
    if (delta > 0){
        double x1 = (-b + sqrt(delta))/2*a;
        double x2 = (-b - sqrt(delta))/2*a;
        std::cout << "roots are " << x1 << " " << x2 <<std::endl;
    }
    else if (delta == 0) {
        std::cout << "Roots are real and same." << std::endl;
        double x1 = -b/(2*a);
        std::cout << "x1 = x2 =" << x1 << std::endl;
    }
    else {
        double realPart = -b/(2*a);
        double imaginaryPart =sqrt(-delta)/(2*a);
        std::cout << "Roots are complex and different."  << std::endl;
        std::cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << std::endl;
        std::cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << std::endl;
    }

}


PYBIND11_MODULE(quad_fun, m) {
    m.doc() = "pybind11 roots of quadratic function plugin"; 
    m.def("quadra", &quadra, "Solution for roots of a quadratic function");
}



