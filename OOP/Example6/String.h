/* 
 * File:   String.h
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 6
 *
 * Created on November 17, 2014, 5:07 PM
 */

#include <string.h>
#include <iostream>     // needed for cout

#ifndef STRING_H
#define	STRING_H

using namespace std;

const int max_len = 255;

class String {
    private:
        char s[max_len];
        int len;
    public:
        // A constructor is a special public member
        // function having no type.  It is usually
        // used to create and initialize an object.
        String(const char* st) {
            if( st == NULL )
                len = 0;
            else {
                // Library function min comes from the
                // std namespace.  Function min is in STL.
                // The cast (int)strlen(st) is necessary.
                len = min( (int)strlen(st), max_len-1 );
                strncpy(s,st,len);
            }
            s[len] = 0;
        }
        
        // A second constructor creates an empty string.
        // The two constructors for class String show that
        // constructors can also be overloaded.
        String() { len = 0; s[0] = 0; }
        
        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.
        int getLength() const { return len; }
        
        void setLength(const int length) { len = length; }
        
        // The following two versions of print illustrate
        // overloading.  If the same function, such as print,
        // has two or more prototypes, it is said to be
        // overloaded.  Operators such as + - * /, etc. can
        // also be overloaded.
        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.
        void print() const { cout << s << endl; }
        
        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.        
        void print(const int n) const {
            for( int i = 0; i < min(n, len); ++i ) cout << s[i];
            cout << endl;
        }

        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.
        const char* getString() const { return s; }
        
        void setString(const char* st) {
            if( st == NULL )
                len = 0;
            else {
                // Library function min comes from the
                // std namespace.  Function min is in STL.
                // The cast (int)strlen(st) is necessary.
                len = min( (int)strlen(st), max_len-1 );
                strncpy(s,st,len);
            }
            s[len] = 0;
        }
       
};

// Overloaded operator + concatenates Strings.
// Normally, + means to add two numbers.  The +
// operator is already overloaded because + is used
// to add integers, floats, doubles.  The fact
// that the operands of + can be different types
// makes it an overloaded operator.  Here a new
// operator that uses the symbol + is defined for
// our String objects.  Two or more strings combined
// with + are concatenated to produce another string.
// That is what + means here, String concatenation.
// Note that the operator is defined OUTSIDE the
// class String.
String operator+(const String a, const String b)
{
    String temp;
    temp.setString(a.getString());
    temp.setLength( a.getLength() + b.getLength() );
    if( temp.getLength() < max_len ) {
        // The cast (char*) in the following
        // two statements is necessary to
        // override the const char* returned
        // by getString.
        char* t = (char*)temp.getString();
        strcat(t, (char*)b.getString());
        temp.setString(t);
    } else
        cerr << "Maximum length exceeded by concateantion operator +\n";
    return temp;
}

#endif	/* STRING_H */

