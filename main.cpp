#include <iostream>
#include "Test.hpp"

int main() {

    CalculatorTest::use();

    std::cout << mpl::Calculator::calculate("+--+-+1");

}
