#include <iostream>
#include <cmath>
#include <cstdint>

class DoublePrecisionFloat {
private:
    uint64_t data;
public:
    DoublePrecisionFloat(double value) {
        data = *(uint64_t*)&value;
    }

    double getValue() {
        double result = *(double*)&data;
        return result;
    }

    bool operator<(DoublePrecisionFloat other) {
        double a = getValue();
        double b = other.getValue();
        if (std::isnan(a) || std::isnan(b)) {
            return false; // NaN is not less than anything
        } else {
            return a < b;
        }
    }

    bool operator==(DoublePrecisionFloat other) {
        double a = getValue();
        double b = other.getValue();
        if (std::isnan(a) || std::isnan(b)) {
            return false; // NaN is not equal to anything, even NaN
        } else {
            return a == b;
        }
    }
};


int main() {
    DoublePrecisionFloat a(2.0);
    DoublePrecisionFloat b(3.0);
    DoublePrecisionFloat c(std::nan(""));
    
    std::cout << ((a < b) ? "True" : "False") << std::endl; // Output: 1 (true)
    std::cout << ((a == b) ? "True" : "False") << std::endl; // Output: 0 (false)
    std::cout << ((b < c) ? "True" : "False") << std::endl; // Output: 0 (false)
    std::cout << ((c < b) ? "True" : "False") << std::endl; // Output: 0 (false)
    std::cout << ((c == c) ? "True" : "False") << std::endl; // Output: 0 (false)
}
