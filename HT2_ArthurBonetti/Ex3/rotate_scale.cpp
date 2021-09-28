#include "rotate_scale.hpp"
#include <iostream>
#include <cmath>
#include <vector>

void rotate(std::vector<double>& x, const double degrees) {
    double radians = degrees*M_PI/180.;
    double temp = x[0];
    x[0] = std::cos(radians)*x[0] - std::sin(radians)*x[1];
    x[1] = std::sin(radians)*temp + std::cos(radians)*x[1];
}

void scale(std::vector<double>& x, const double scale_factor) {
    x[0] *= scale_factor;
    x[1] *= scale_factor;
}

