#include "rotate_scale/rotate_scale.hpp"
#include <iostream>
#include <cmath>
#include <vector>


int main() {
    const double sf = 1./std::sqrt(2), angle1 = 45., angle2 = 135.;
    std::vector<double> x (2, 1.), y (2, 1.);
    
    y[1] = -1;
    
    scale(x,sf);
    scale(y,sf);
    
    std::cout << "x = [" << x[0] << ", " << x[1] << "]\n";
    std::cout << "y = [" << y[0] << ", " << y[1] << "]\n";
    
    rotate(x, angle1);
    rotate(y, angle2);
    
    std::cout << "x = [" << x[0] << ", " << x[1] << "]\n";
    std::cout << "y = [" << y[0] << ", " << y[1] << "]\n";
    
    return 0;
}
