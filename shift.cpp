#include <iostream>
#include <vector>

std::vector<double> shift(std::vector<double> v, int s) {
    // Create a vector containing ints
    std::vector<double> out = { };
    int size = v.size();
    for (int count{ 1 }; count <= size; ++count) {
        if (count > s && count < size + s)
            out.push_back(v.at(count - 1));
    }
            
    return out;
}

int main() {
    // say the program is running
    std::cout << "working!\n";

    // get vector from user 
    std::cout << "Enter a vector length: \n";
    int p;
    std::cin >> p;
    std::cout << "Enter a vector: \n";
    double a;
    std::vector<double> v; 
    for (int i = 0 ; i < p ; i++) {
        std::cin >> a;
        v.push_back(a);
    }
    // get shift value from user
    std::cout << "Enter a shift value: \n";
    int s;
    std::cin >> s;

    // shift and print out shifted result
    std::vector<double> shifted = shift(v, s);
    std::cout << "v = { ";
    for (double d : shifted) {
        std::cout << d << " ";
    }
    std::cout << "}; \n";
    return 0; 
}
    
