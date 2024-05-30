#include <boost/multi_array.hpp>
#include <iostream>

int main() {
    boost::multi_array<int, 3> arr(boost::extents[2][3][4]);
    int value = 0;
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {
            for(int k = 0; k < 4; ++k) {
                arr[i][j][k] = value++;
            }
        }
    }
    for(int i = 0; i < 2; ++i) {
        for(int j = 0; j < 3; ++j) {
            for(int k = 0; k < 4; ++k) {
                std::cout << arr[i][j][k] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }
    return 0;
}