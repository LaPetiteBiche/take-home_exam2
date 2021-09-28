#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>  

/// Preconditions: 0<=trimming_fraction<0.5
/// Postconditions: the input data will not be altered
double trimmed_mean(std::vector<double> vect, double trimming_fraction)
{
    if (vect.size() == 0){
        return 0;
    }
    // Sort increasing order
    sort(vect.begin(), vect.end());
    // Remove first 10%
    int N = vect.size()*trimming_fraction;
    vect.erase(vect.begin(), vect.begin() + N);
    // Sort decreasing order
    std::sort(vect.begin(), vect.end(), std::greater<int>());
    // Remove first (last) 10%
    vect.erase(vect.begin(), vect.begin() + N);
    // Average
    auto nn = vect.size();
    double average = accumulate( vect.begin(), vect.end(), 0.0) / nn;
    return average;
}

int main()
{
    std::vector<double> numbers;
    for(int i = 0; i < 10; ++ i)
        numbers.push_back(i);
    
    std::cout << trimmed_mean(numbers,0.1) << std::endl;
    
    return 0;
}