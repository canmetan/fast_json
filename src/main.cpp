#include <iostream>
#include <string>
#include "trivial.hpp"

using namespace std;

int main(int, char**) {
    Trivial trivial_obj = Trivial();

    string something = "Somethingasdfasdf";
    std::cout << "Hello, world!\n" << trivial_obj.return_num() << endl;
}
