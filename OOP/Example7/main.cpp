/* 
 * File:   main.cpp
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 7
 *
 * Created on November 19, 2014, 3:35 PM
 */

#include <cstdlib>
#include "Array.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    Array a;
    int x[] = { 21, 0, 15, 17, 13, 39, 58 };
    int s = sizeof(x)/sizeof(int);
    a.setArray(s,x);
    a.print();
    a.print(3);
    int y[] = { 5, 3, 3, 6, 0, 7, 10, 4, 8 };
    s = sizeof(y)/sizeof(int);
    Array b(-s,y);
    b.print();
    b.setArray(s,y);
    Array c;
    c = a / b;
    c.print();
    Array d;
    d = a % b;
    d.print();
    int z[20];
    s = sizeof(z)/sizeof(int);
    for( int i = 0; i < s; ++i) z[i] = 20-i;
    Array list;
    list.setArray(s,z);
    list.print();
    return 0;
}

// Assignment 2 (25 points): Create a class named Vector
//  that is similar to the class Array.  Put class Vector
//  in header file Vector.h.  Class Vector has
//  the following two private member variables.

//   1. An array of doubles named v of size max_len where
//      max_len is a constant integer having the value 20.
//   2. Integer length which indicates the size of array v
//      that contains array values in the first length elements,
//      namely, elements v[0], v[1], v[2], ..., v[length-1].

//			i dont need length-1 because of my for loop

//      The value of private member variable length must be
//      between 0 and max_len inclusive.

//  Class Vector has the following two constructors.
//   1. The first constructor takes no parameters and merely
//      sets length to zero.  This creates an empty Vector.
//   2. The second constructor takes two parameters.  The
//      first parameter is a constant integer that specifies
//      the size of the vector (the number of elements which
//      will be initialized).  The second parameter is a constant
//      double array having size elements.  If the first parameter
//      size is not between 0 and max_len (inclusive) the constructor
//      uses cerr to display the following error messages
//          xxx is an invalid length
//          The length of the vector will be set to zero.
//      where xxx is the value of size.  After displaying the error
//      messages the constructor returns after creating an empty Vector
//      object.

// Class Vector has two public overloaded print functions.  One print
// function has no parameters and prints elements v[0], v[1], v[2],
// ..., v[length-1] of private member variable array v.  The other
// print function has one parameter, a constant integer n, and it
// prints elements v[0], v[1], v[2], ..., v[m-1] of private member
// variable array v where m = min(n,length).  Both print functions
// print the elements all on a SINGLE line.



//I'm here 1/30/15


//?? im confused about the very next part *****************

// Class Vector has a public getVector function which returns a constant
// pointer to the private member array variable v.
// *******************************************

// Class Vector has a public setVector function which has two constant
// parameters, namely, the size of a double array, and the double array
// itself. 

//Function setVector initializes the first size elements of v
// using the array passed as the second parameter and sets private member
// variable length to size, provided size is between 0 and max_len inclusive.
// If size exceeds max_len then the following messages are displayed.
//     The vector size xxx is too large.
//     Only the first yyy values will be used.
// In the above message xxx is the value of size and yyy is the value of
// max_len.
// If size is less than zero then the following messages are displayed.
//     The vector size xxx is too small.
//     The vector will be set to the empty vector.
//----------------------------------------------------------------------------------------------------------------------
// Two overloaded operators are defined for class Vector, namely, + and -
// which are described as follows.

// Operator + adds the elements of two Vector objects, elementwise, that
// is, element by element.  If one Vector conains more elements then the
// other, the remaining elements are copied to the result.  For example,
// suppose the Vector objects contain
//   Vector object 1:     8.5 -2.0  0.0  4.2   8.0  -3.5  0.7
//   Vector object 2:     0.5 -2.0 -1.0  0.0   4.1
// The result of + would be
//   Vector object 1 + 2: 9.0 -4.0 -1.0  4.2  12.1  -3.5  0.7

// Operator - subtracts the elements of two Vector objects, elementwise, that
// is, element by element.  If one Vector conains more elements then the
// other, the remaining elements are copied to the result.  For example,
// suppose the Vector objects contain
//   Vector object 1:     8.5 -2.0  0.0  4.2   8.0  -3.5  0.7
//   Vector object 2:     0.5 -2.0 -1.0  0.0   4.1
// The result of - would be
//   Vector object 1 - 2: 8.0  0.0  1.0  4.2   3.9  -3.5  0.7
//
// Test your Vector class with a main program that does the following.
//  1. Declares double array x as follows.
//      double x[] = { 8.5, -2.0, 0.0, 4.2, 8.0, -3.5, 0.7 };
//  2. Declares Vector object vector as
//      Vector vector(s,x);
//     where s = sizeof(x)/sizeof(double);
//  3. Prints vector as follows.
//      vector.print();
//      vector.print(4);
//  4. Declare array
//      double a[30];
//     and initialize a with a for loop so that element i contains i
//     for i = 0, 1, 2, ..., s-1 where s = sizeof(a)/sizeof(double);
//  5. Sets Vector object vector as
//      vector.setVector(s,a);
//     where s = sizeof(a)/sizeof(double);
//  6. Prints vector as
//      vector.print();
//  7. Declares double array y as follows.
//      double y[] = { 0.5, -2.0, -1.0, 0.0, 4.1 };
//  8. Declares Vector object vy as
//      Vector vy(s,y);
//     where s = sizeof(y)/sizeof(double);
//  9. Prints vy
// 10. Declares Vector object vx as
//      Vector vx(s,x);
//     where s = sizeof(x)/sizeof(double);
// 11. Prints vx
// 12. Declares
//      Vector vu;
// 13. Computes
//      vu = vx + vy;
// 14. Prints vu
// 15. Declares
//      Vector vw;
// 16. Computes
//      vw = vx - vy;
// 17. Prints vw
// 18. Declares
//      Vector vz;
// 19. Computes
//      vz = vy - vx;
// 20. Prints vz
// 21. Declares
//      Vector my_vector(-s,x);
//     where s = sizeof(x)/sizeof(double);  This should
//     produce an error message by the constructor.
//
// When you complete assignment 2, compress your Netbeans project and
// submit your compressed file to Blackboard on or before the due date.
// The due date will be posted on Blackboard and announced in class.
//
// If you DO NOT use Netbeans put files Vector.h and main.cpp in a
// folder named Assignment2.  Compress folder Assignment2 and submit
// the compressed file to Blackboard on or before the due date.
// The due date will be posted on Blackboard and announced in class.


