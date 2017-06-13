/* 
 * File:   String.h
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 5
 *
 * Created on November 17, 2014, 2:15 PM
 */

#include <string.h>
#include <iostream>     // needed for cout
#include <assert.h>

#ifndef STRING_H
#define	STRING_H

using namespace std;

const int max_len = 255;

typedef struct STRING {
    private:
        char s[max_len];
        int len;
    public:
        void initialize(const char* st) {
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
        
        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.
        // Put the statement len=25; inside { and } and see
        // what happens.        
        int getLength() const { return len; }
        
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
            
} String;

#endif	/* STRING_H */

