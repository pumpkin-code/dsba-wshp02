/*******************************************************************************
 *  Workshop 2/Task 2
 *
 *  Studying input, output, conditions and simple loops.
 *
 *  A program outputs a formatted multiplication table for n numbers.
 *
 *  Example. For n = 3, the output is:
 *
 *      1   2   3
 *  1   1   2   3
 *  2   2   4   6
 *  3   3   6   9
 *
 *  1) Ask a user to input a boundary n for the table.
 *  2) Check whether n is in the range [1; 10] using if statement. Otherwise
 *     output the following message: "Wrong argument", and terminate the program.
 *  3) Output a table row by row using for-loop statement. Use tabs to separate
 *     individual values.
 *  4) Modify the program. Use while-loop statement.
 *
 ******************************************************************************/

#include <iostream>

// the entrypoint of the application
int main()
{
    // a toy example: we have an object called x defined in the scope of two
    // nested namespaces
    //
    //      namespace Foo {  ...  namespace Bar {  ... x  .. }    };
    //
    // how to refer to the object x?
    //      Foo::Bar::x

    using std::cin;         // further we want to use cin w/o std prefix

    std::cout << "Multiplication table application\n\n";

    // we're going to provide a prompt
    std::cout << "Input a size of the table: ";

    // here we have a defining statement
    int n;              // we automatically allocate 4 bytes right at this very point
                        // (where? — in the stack memory)

    // for instance, if a user inputs 42 at this point, so internal representation
    // of variable n will be like this
    //      +----+----+----+----+
    //      | 2A | 0  |  0 |  0 |
    //      +----+----+----+----+
    //
    //       0    1    2    3     ← number of a cell/byte (Little Endian)

    cin >> n;

    //-------------------<Variant 3 (final)>-------------------
    // see for vars 1 and 2 below

    // check whether the input number is positive one
    if(n <= 0)          //(!(n > 0))
    {
        std::cout << "The input value of n is wrong";
        return 0;
    }

    // the only way how to reach this point is to have (n <= 0) expression
    // evaluated as false

    // we have to output a header of our table

    // try to use while-loop  statement first
    // first, we have to create a countet variable
    int k = 1;

    // output all elements of the header using the while loop
    while(k <= n)
        std::cout << '\t' << k++;       // correct

    std::cout << std::endl;     // the same as using '\n'

    // output the body of the table
    //
    //for(int i = 0; i < n  ;  i++)
    for(int i = 1; i <= n; ++i)
    {
        // output the number of the current row
        std::cout << i;
        for(int j = 1; j <= n; j += 1)
        {
            std::cout << '\t' << i * j;
        }
        std::cout << '\n';     // the same as using std::endl
    }
    // the end of meaningful part of the program


    //-------------------<Variant 2>-------------------
    // below we are going to inverse the logic and swap the if and else branches

    //    // check whether the input number is positive one
    //    if(n <= 0)          //(!(n > 0))
    //        std::cout << "The input value of n is wrong";
    //    else
    //    {
    //        // we have to output a header of our table

    //        // try to use while-loop  statement first
    //        // first, we have to create a countet variable
    //        int k = 1;

    //        // output all elements of the header using the while loop
    //        while(k <= n)
    //            std::cout << '\t' << k++;       // correct

    //        std::cout << std::endl;     // the same as using '\n'

    //        // output the body of the table
    //        //
    //        //for(int i = 0; i < n  ;  i++)
    //        for(int i = 1; i <= n; ++i)
    //        {
    //            // output the number of the current row
    //            std::cout << i;
    //            for(int j = 1; j <= n; j += 1)
    //            {
    //                std::cout << '\t' << i * j;
    //            }
    //            std::cout << '\n';     // the same as using std::endl
    //        }
    //    } // the end of meaningful part of the program


    //-------------------<Variant 1>-------------------
    // this variant is ok except of readability of lonf if...else statemtn
    //    // check whether the input number is positive one
    //    if(n > 0)
    //    {
    //        // we have to output a header of our table

    //        // try to use while-loop  statement first
    //        // first, we have to create a countet variable
    //        int k = 1;

    //        // output all elements of the header using the while loop
    //        while(k <= n)
    //        {
    ////            std::cout << '\t' << k;
    ////            //k = k + 1;  // a trivial approach
    ////            //k += 1;       // this is a shortcut for ^^^ approach
    ////            //k++;          // an increatemntal approch with postfix ++
    ////            ++k;            // an increatemntal approch with prefix ++

    //            std::cout << '\t' << k++;       // correct
    //            //std::cout << '\t' << ++k;     // incorrect

    //            // let us consider using the for-loop statement
    //        }

    //        std::cout << std::endl;     // the same as using '\n'


    //        // output the body of the table
    //        //
    //        //for(int i = 0; i < n  ;  i++)
    //        for(int i = 1; i <= n; ++i)
    //        {
    //            // output the number of the current row
    //            std::cout << i;
    //            for(int j = 1; j <= n; j += 1)
    //            {
    //                std::cout << '\t' << i * j;
    //            }
    //            std::cout << '\n';     // the same as using std::endl
    //        }
    //    }
    //    else
    //        std::cout << "The input value of n is wrong";

    return 0;
}
