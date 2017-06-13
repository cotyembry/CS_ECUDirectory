/* 
 * File:   main.cpp
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 1
 *
 * Created on September 22, 2014, 6:08 PM
 */

// The spell checker can be turned off for
// comments.  If it is not turned off, your
// comments will be flagged everywhere the
// spell checker finds a misspelling.  This
// is probably too distracting.  To turn off
// the spell checker do the following.
//  1. Select the Tools -> Options menu items.
//     This displays the Options page.
//  2. In the Options page, select the icon labeled
//     Miscellaneous if you are using NetBean 7.0.
//     Select the icon labeled Editor if you are using
//     NetBeans 8.0.  In either case, select the tab
//     labeled Spellchecker.  Uncheck C/C++/Fortran
//     comments and click the OK button.
//     
// The file cstdlib contains standard library
// functions and seems to be automatically put
// in programs built with the NetBeans IDE.  The
// file cstdlib is analogous to stdlib.h in C.
#include <cstdlib>
// File iostream is needed by the cout statements
// below.
#include <iostream>

// The std namespace is needed by the cout statements
// below.  We will discuss namespace later.
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // cout is an output statement in C++ similar
    // to, but different, from printf in C.
    cout << "C++ is an improved C\n";
    cout << "This is how text is displayed in C++" << endl;
    
    // The keyword const in C++ is a way to define a constant
    // in C++.  The value of a constant cannot be changed.  A
    // const is similar to #define in C.
    const int moon = 238857;
    cout << "The moon's distance from earth is " << moon;
    cout << " miles." << endl;
    
    // Try to change variable moon by uncommenting the following
    // statement.  What happens when you compile the program?
    //moon = 75;    
    
    int kilo = 1.609*moon;
    cout << "In kilometers this is " << kilo;
    cout << " km." << endl;

    return 0;
}

