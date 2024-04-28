#include <boost/container/vector.hpp>
#include <boost/container/stable_vector.hpp>
#include <vector>
#include <iostream>

// struct animal {
//     boost::container::vector<animal> children;
// };

struct animal {
    std::vector<animal> children;
};

int main() {
    animal parent, child_1, child_2;
    parent.children.push_back(child_1);
    parent.children.push_back(child_2);

    boost::container::stable_vector<int> v(2, 1);
    int &i = v[1];
    v.erase(v.begin());
    std::cout << i << '\n';

    return 0;
}