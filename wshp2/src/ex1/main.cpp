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
    std::cout << "Hello world!";        // :: is __scope__ operator

    // The rule: use size_t datatype for almost all cases when you deal with sizes in C++.
    size_t s1 = sizeof(char); // ends with ; (semicolon)
    // ^^^ this is a definition statement
    //       ^^^ we initialize the newly created variable with a result of
    //           an expression, which gives a size of type char, in bytes


    size_t s2 = sizeof(int);

    using std::cout;        // this statement is used for disclosing the object
                            // named cout from the namespace named std to be
                            // able to use the object w/o scope operator and std prefix

    //cout << "\nThe size of int datatype is equal to " << s2 << " bytes";
    cout << std::endl << std::endl
         <<  "The size of int datatype is equal to " << s2 << " bytes";

    // the name of this :  character is colon

    using std::endl;    // normally such statements are appeared at the very
                        // begining of a method
    cout << endl << "The size of double datatype is "
         << sizeof(double)  << " bytes";    // this is an expression statement

    //cout

    // TODO: place your code starting from this line

    int a = 0;

    return 0;
}
