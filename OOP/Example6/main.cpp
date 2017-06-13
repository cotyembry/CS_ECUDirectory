/* 
 * File:   main.cpp
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 6
 *
 * To compile and execute this
 * program without Netbeans type
 *
 *   g++ -o Example6 main.cpp
 *   ./Example6
 *
 * Created on November 17, 2014, 5:07 PM
 */

#include <cstdlib>
#include "String.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    String text(NULL);
    text.print();
    cout << "text has length " << text.getLength() << endl;
    text.setString("Who is Alan Turing?");
    text.print(3);
    text.print(-7);
    text.print(35);
    cout << "text has length " << text.getLength() << endl;
    // Private member variables and functions CANNOT
    // be durectly accessed.  The following statements
    // cause a compiler error.  Uncomment the statements
    // to see the error.
    //cout << "s has length " << text.len << endl;
    //text.s[0] = 'a';
    
    String name("Mary Smith");
    name.print();
    name.print(4);
    name.print(-8);
    name.print(29);
    cout << "name has length " << name.getLength() << endl;
    
    // The following String declaration uses the second
    // constructor to create an empty string named phrase.
    String phrase;
    cout << "phrase has length " << phrase.getLength() << endl;
    phrase.setString("The cat is on a mat.");
    cout << "phrase has length " << phrase.getLength() << endl;
    phrase.print();
    
    String answer("  An English mathematician.");
    String result;
    result = text + answer;
    result.print();
    String space(" ");    
    text = name + space + phrase;
    text.print();
    
    return 0;
}

