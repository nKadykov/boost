#include <iostream>
#include <boost/dynamic_bitset.hpp>

int main() {
    boost::dynamic_bitset<> db(10);
    db[1] = 1;
    db[3] = 1;
    db[5] = 1;

    std::cout << "Bitset: " << db << std::endl;

    return 0;
}
