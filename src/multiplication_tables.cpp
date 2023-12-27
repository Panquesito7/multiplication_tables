#include <iostream>   /// for IO operations
#include <cassert>    /// for assert
#include <cmath>      /// for std::fabs
#include <limits>     /// for std::numeric_limits

/**
 * @namespace
 * @brief Function for the Multiplication Table implementation
 */
namespace multiplication_tables {
/**
 * @brief Asks the user a number and maximum value (e.g.: 10)
 * and prints the given number's multiplication until `maximum_value`.
 * @tparam T the type that will be used for the variables
 * @param number The number that will be used
 * @param maximum_value The maximum number of times the given number will be multiplicated (e.g.: 10)
 * @returns void
 */
template <typename T>
void ask_number(T number, T maximum_value) {
    std::cout << "Please enter a number: ";
    std::cin >> number;

    std::cout << "Please enter maximum number of times the number will be multiplicated: ";
    std::cin >> maximum_value;

    std::cout << "\n";

    for (int i = 1; i < maximum_value + 1; i++) {
        std::cout << number << " * " << i << " = " << number * i << "\n";
    }
}

/**
 * @brief Function that returns a number multiplied by the given value.
 * Very useful for creating self-test with `assert`.
 * @tparam T the type that will be used for the variables
 * @param number The number that will be multiplied
 * @param multiplication_number The value that will be multiplied to the given number
 * @returns the multiplication of the number and the given multiplication value
 */
double number_multiplication(double number, double multiplication_number) {
    return number * multiplication_number;
}

/**
 * @brief Checks if two doubles are equal. This is done because there might
 * be very minor value differences that will cause the `assert` checks to fail.
 * @param a First number to check
 * @param b Second number to check
 * @param epsilon The maximum difference between a and b for them to be considered equal
 * @return true if `a` and `b` are equal
 * @return false if `a` and `b` are NOT equal
 */
bool are_equal(double a, double b, double epsilon = std::numeric_limits<double>::epsilon()) {
    return std::fabs(a - b) <= epsilon;
}
}  // namespace multiplication_tables

/**
 * @brief Self-test implementations
 * @returns void
 */
static void tests() {
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(64, 2), 128));
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(2, 2.6), 5.2));
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(28, 7), 196));
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(3, 3), 9));
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(474, 600), 284400));
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(4, 4), 16));
    assert(multiplication_tables::are_equal(multiplication_tables::number_multiplication(15, 12), 180));

    std::cout << "All tests have successfully passed!\n";
}

/**
 * @brief Main function
 * @returns 0 on exit
 */
int main() {
    int choice = 0;

    do {
        std::cout << "1. Interactive mode.\n";
        std::cout << "2. Self-test mode.\n";

        std::cout << "Choose mode: ";
        std::cin >> choice;

        std::cout << "\n";
    } while ((choice < 1) || (choice > 2));

    if (choice == 1) {
        std::cout << "\n";

        int number = 0, maximum_value = 0;
        multiplication_tables::ask_number(number, maximum_value);
    }

    else {
        tests();  // run self-test implementations
    }

    return 0;
}
