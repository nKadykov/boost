#include <boost/array.hpp>
#include <iostream>
#include <string>
#include <algorithm>

int main() {
    boost::array<std::string, 3> a;
    a[0] = "cat";
    a.at(1) =  "shark";
    *a.rbegin() = "spider";

    std::sort(a.begin(), a.end());
    
    for(const std::string &s : a) {
        std::cout << s << '\n';
    }

    std::cout << a.size() << '\n';
    std::cout << a.max_size() << '\n';
    return 0;
}