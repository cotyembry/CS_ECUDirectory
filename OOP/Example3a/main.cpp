/* 
 * File:   main.cpp
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 3
 * 
 * Compare with the C program
 * in example 4.  Which program
 * and language is more consistent
 * and reliable?
 *
 * To compile and execute this
 * program without Netbeans type
 *
 *	g++ -o Example3 main.cpp
 *
 * This invokes the gnu C++ compiler g++
 * and the -o option stores the executable
 * output of the g++ compiler in a file named
 * Example3
 *
 * Created on September 25, 2014, 3:43 PM
 */

#include <cstdlib>
#include <iostream>

// define v.s. inline
// Consider the same function defined
// first with #define and second as inline.
// The function calculates the square of a
// value.
#define SQ1(x)   x*x
inline const int SQ2(int x) { return x*x; }

using namespace std;

// The following function prototypes declare
// the number and type of each parameter, and
// the return type.  In C++ the prototypes are
// required if the functions are referenced before
// they are defined.  Comment out a prototype and
// see what happens.
int add3(int,int,int);
double average(int);

/*
 * 
 */
int main(int argc, char** argv) {
    // Illustrate #define v.s. inline.  In the
    // the first case, SQ1(5+3) = 5*3*5+3 = 23.
    // However, you want (5+3)*(5+3)=64.  The
    // reason 23 is calculated is that with #define
    // expressions, they often must be fully parenthesized.
    // This is not only an inconvenience but prone to error.
    // This issue is avoided with inline and makes it
    // a better choice.  With inline you can also specify
    // types such as int, float, double. etc.  This is
    // another advantage of inline.
    //
    // The preprocessor examines and interprets #define.
    // The drawback of this is that the preprocessor
    // doesn't understand C syntax.  Hence, the need to
    // fully parenthesize expressions.
    //
    // Both inline and #define are intended for short,
    // simple functions and constants.  Unlike functions
    // the code is plugged in wherever they are referenced.
    // Code plugged in this way is referred to as a macro.
    // This avoids the function call/return overhead.  This
    // can be an issue if the function is called many times
    // during execution.
    //
    // A #define is always treated as a macro.  An inline
    // function may or may not be treated as a macro.  It
    // can be treated as a usual function which is called
    // and returns.  The decision is made by the compiler.
    //
    // When choosing between define and inline, the clear
    // preference is inline, and that is what you are asked
    // to do in this course.
    //
    cout << "SQ1(5+3)=" << SQ1(5+3) << endl;
    cout << "SQ2(5+3)=" << SQ2(5+3) << endl;
    cout << "SQ1((5+3))=" << SQ1((5+3)) << endl;

    cout << "Enter 3 whole numbers: ";
    int x, y, z;
    cin >> x >> y >> z;
    int sum = add3(x,y,z);
    cout << "sum= " << sum << endl;
    cout << "average= " << average(sum) << endl;
    // Since the prototype specifies that the first
    // parameter is an int the value of 1.5*x is
    // automatically converted and passed as an int.
    sum = add3(1.5*x,y,z);
    cout << "sum= " << sum << endl;
    
    return 0;
}

int add3(int a, int b, int c)
{
    cout << "a= " << a << endl;
    return a + b + c;
}

double average(int s)
{
    return s / 3.0;
}
