#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
#include <numeric>  

/// Preconditions: 0<=trimming_fraction<0.5
/// Requirements: ForwIT is a forward iterator
/// Postconditions: the elements in the range between the iterators will not be altered
template<typename ForwIt>
double trimmed_mean(ForwIt begin, ForwIt end, double trimming_fraction)
{
    using value_type = typename std::iterator_traits<ForwIt>::
        value_type;
    // 10%
    int N = std::distance( begin, end )*trimming_fraction;
    // Move iterators
    advance(begin, N);
    advance(end, -N);
    // Average
    auto nn = std::distance( begin, end );
    double average = accumulate( begin, end, 0.0) / nn;
    return average;
}

int main()
{
    std::vector<int> numbers;
    for(int i = 0; i < 10; ++ i)
        numbers.push_back(i);
    
    const std::vector<int> v0(numbers.begin(), numbers.end());
    const std::vector<float> v1(numbers.begin(), numbers.end());
    std::cout << trimmed_mean(v0.begin(),v0.end(),0.1) << ' ' << trimmed_mean(v1.begin(), v1.end(), 0.1) << std::endl;
    
    return 0;
}