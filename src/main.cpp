#include <iostream>
#include "functions.h"

//int main() {
int main(int argc, char **argv) {
    std::cout << "Hello, Jenkins!" << std::endl;
    std::cout << "5 + 3 = " << add(5, 3) << std::endl;
    std::cout << "5 - 3 = " << subtract(5, 3) << std::endl;
    return 0;
}
