#include <iostream>
#include <string>
#include "trivial.hpp"

using namespace std;

int main(int, char**) {
    Trivial obj = Trivial();

    string something = "Somethingasdfasdf";
    std::cout << "Hello, world!\n" << obj.return_num() << endl;
}
