#include <cassert>
#include "Calculator.hpp"

class CalculatorTest {

private:

    static void TestMinus() {

        double result;

        try {

            result = mpl::Calculator::calculate("1 - 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 - 1'" << std::flush;

            exit(1);

        }

        assert(result == 0 && "Result of '1 - 1' is not 0");

        try {

            result = mpl::Calculator::calculate("1 - 1 - 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 - 1 - 1'" << std::flush;

            exit(1);

        }

        assert(result == -1 && "Result of '1 - 1 - 1' is not -1");

    }

    static void TestPlus() {

        double result;

        try {

            result = mpl::Calculator::calculate("1 + 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 + 1'" << std::flush;

            exit(1);

        }

        assert(result == 2 && "Result of '1 + 1' is not 2");

        try {

            result = mpl::Calculator::calculate("1 + 1 + 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 + 1 + 1'" << std::flush;

            exit(1);

        }

        assert(result == 3 && "Result of '1 + 1 + 1' is not 3");

    }

    static void TestMultiple() {

        double result;

        try {

            result = mpl::Calculator::calculate("1 * 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 * 1'" << std::flush;

            exit(1);

        }

        assert(result == 1 && "Result of '1 * 1' is not 1");

        try {

            result = mpl::Calculator::calculate("2 * 3 * 4");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '2 * 3 * 4'" << std::flush;

            exit(1);

        }

        assert(result == 24 && "Result of '2 * 3 * 4' is not 24");

    }

    static void TestDivide() {

        double result;

        try {

            result = mpl::Calculator::calculate("1 / 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 / 1'" << std::flush;

            exit(1);

        }

        assert(result == 1 && "Result of '1 / 1' is not 1");

        try {

            result = mpl::Calculator::calculate("8 / 2 / 2");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '8 / 2 / 2'" << std::flush;

            exit(1);

        }

        assert(result == 2 && "Result of '8 / 2 / 2' is not 2");

    }

    static void TestPercentDivide() {

        double result;

        try {

            result = mpl::Calculator::calculate("1 % 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 % 1'" << std::flush;

            exit(1);

        }

        assert(result == 0 && "Result of '1 % 1' is not 0");

        try {

            result = mpl::Calculator::calculate("3 % 2");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '3 % 2'" << std::flush;

            exit(1);

        }

        assert(result == 1 && "Result of '3 % 2' is not 1");

    }

    static void TestPower() {

        double result;

        try {

            result = mpl::Calculator::calculate("1 ** 1");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '1 ** 1'" << std::flush;

            exit(1);

        }

        assert(result == 1 && "Result of '1 ** 1' is not 1");

        try {

            result = mpl::Calculator::calculate("2 ** 2 ** 2");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '2 ** 2 ** 2'" << std::flush;

            exit(1);

        }

        assert(result == 16 && "Result of '2 ** 2 ** 2' is not 16");

    }

    static void TestBrackets() {

        double result;

        try {

            result = mpl::Calculator::calculate("2 + 2 * 2");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '2 + 2 * 2'" << std::flush;

            exit(1);

        }

        assert(result == 6 && "Result of '2 + 2 * 2' is not 6");

        try {

            result = mpl::Calculator::calculate("(2 + 2) * 2");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '(2 + 2) * 2'" << std::flush;

            exit(1);

        }

        assert(result == 8 && "Result of '(2 + 2) * 2' is not 8");

    }

    static void TestPriority() {

        double result;

        try {

            result = mpl::Calculator::calculate("2 % 2 + 2 * 2 ** 2");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '2 % 2 + 2 * 2 ** 2'" << std::flush;

            exit(1);

        }

        assert(result == 8 && "Result of '2 % 2 + 2 * 2 ** 2' is not 8");

        try {

            result = mpl::Calculator::calculate("27");

        }

        catch(...) {

            std::cerr << "Caught an exception when function calculated expression '27'" << std::flush;

            exit(1);

        }

        assert(result == 27 && "Result of '27' is not 27");

    }

public:

    static void use() {

        TestPlus();

        TestMinus();

        TestMultiple();

        TestDivide();

        TestPercentDivide();

        TestPower();

        TestBrackets();

        TestPriority();

    }

};
