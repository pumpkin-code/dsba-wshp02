/*******************************************************************************
 * Workshop 2/Task 1
 * Studying properties of some basic datatypes.
 *
 * Use operator sizeof to explore size of all important basic datatypes:
 *  char, short, int, long, long long, double, bool
 *
 * For storing results use named variables of size_t for some types from the
 * list above.
 * Also, try to create complex expressions for output formatted results to
 * std::cout.
 *
 ******************************************************************************/

#include <iostream>

// the entrypoint of the application
int main()
{

    int size_int = sizeof(int);
    int size_char = sizeof(char);
    int size_short = sizeof(short);
    int size_long = sizeof(long);
    int size_longlong = sizeof(long long);
    int size_double = sizeof(double);
    int size_bool = sizeof(bool);

    std::cout << size_int << std::endl;
    std::cout << size_char << std::endl;
    std::cout << size_short << std::endl;
    std::cout << size_long << std::endl;
    std::cout << size_longlong << std::endl;
    std::cout << size_double << std::endl;  
    std::cout << size_bool << std::endl;  

    // TODO: place your code starting from this line

    return 0;
}
