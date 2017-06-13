/* 
 * File:   main.cpp
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 5
 *
 * To compile and execute this
 * program without Netbeans type
 *
 *   g++ -o Example5 main.cpp
 *   ./Example5
 *
 * Created on November 17, 2014, 2:13 PM
 */

#include <cstdlib>
#include "String.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    String text;
    text.initialize(NULL);
    text.print();
    text.initialize("Mary Smith");
    text.print();
    text.print(4);
    text.print(-3);
    text.print(57);
    cout << "text has length " << text.getLength() << endl;
    // Private member variables and functions CANNOT
    // be directly accessed.  The following statements
    // cause a compiler error.  Uncomment the statements
    // to see the error.
    //cout << "s has length " << text.len << endl;
    //text.s[0] = 'a';
    
    // Answer to a question raised in class.
    // Note: Use \\ to literally print backslash \ character
    if( '\0' == 0 )
        cout << "'\\0' and 0 are equal" << endl;
    else
        cout << "'\\0' and 0 are NOT equal" << endl;
    
    const int EOS = '\0';
    
    text.setString("Who is Alan Turing?");
    cout << "text has length " << text.getLength() << endl;
    text.print(3);
    text.print(-7);
    text.print(35);
    return 0;
}

