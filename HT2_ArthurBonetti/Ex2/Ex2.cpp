#include <iostream>
#include <cmath>
#include <algorithm>


// Define and implement the class MaxAfterThreshold here
using namespace std;
class MaxAfterThreshold {
    public: 
        int threshold;
        int value;
        int max;
    
        MaxAfterThreshold(int x){
            threshold = x;
            value = 0;
            max = 0;
        }
        void add_value(int x){
            
            if (x < 0) {
                value -= x;
                if (-x > max) {
                    max = -x;
                }
            } else {
                value += x;
                if (x > max) {
                    max = x;
                }
            }
        }
    
        bool limit_exceeded() {  // Method/function defined inside the class
            if (value < threshold) {
                return false;} else {
                return true;
            }
            
    }
};


// DO NOT CHANGE any of the following code.
int main() {
    int x;
    MaxAfterThreshold max_thresh(10);
    
    std::cout << "Enter numbers:" << std::endl;
    do{
        std::cin >> x;
        max_thresh.add_value(x);
    } while (!max_thresh.limit_exceeded());
    
    std::cout << "The maximum of the absolute values is " << max_thresh.max << "." << std::endl;
    
    return 0;
}

