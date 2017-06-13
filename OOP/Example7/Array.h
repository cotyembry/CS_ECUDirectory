/* 
 * File:   Array.h
 * Author: Mary Smith
 * Course: CMPSC 3543
 * Example 7
 *
 * Created on November 19, 2014, 3:36 PM
 */

#include <iostream> // needed for cout and cerr
#include <climits>  // needed for INT_MAX.  INT_MAX
                    // is the largest signed integer
                    // that can be stored in 32 bits.
                    // INT_MAX = 2^31-1 = 2147483647.
                    // The leftmost bit is a sign bit.

#ifndef ARRAY_H
#define	ARRAY_H

using namespace std;

const int max_len = 15;

class Array {
    private:
        int a[max_len];
        int size;
    public:
        // A constructor is a special public member
        // function having no type.  It is usually
        // used to create and initialize an object.
        Array(const int len, const int array[]) {
            if( 0 <= len && len <= max_len ) {
                size = len;
                for( int i = 0; i < size; ++i ) a[i] = array[i];
            } else {
                size = 0;            
                cerr << len << " is an invalid size, the size will be set to zero" << endl;
            }
        }
        
        // A second constructor creates a Vector object of size 0.
        // Class Vector has two overloaded constructors.
        Array() { size = 0; }
        
        int getSize() const { return size; }
        
        // The following two versions of print illustrate
        // overloading.  If the same function, such as print,
        // has two or more prototypes, it is said to be
        // overloaded.  Operators such as + - * /, etc. can
        // also be overloaded.
        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.
        void print() const {
            for( int i = 0; i < size; ++i ) cout << a[i] << " ";
            cout << endl;
        }
        
        // The const at the end of the prototype guarantees
        // that the function will not modify member variables.        
        void print(const int n) const {
            for( int i = 0; i < min(n, size); ++i ) cout << a[i] << " ";
            cout << endl;
        }
        
       const int* getArray() const { return a; }        

       void setArray(const int length, const int array[]) {       
           if( length < 0 ) {
                cout << "The array size " << length << " is too small." << endl;
                cout << "The array will be set to the empty array." << endl;
                size = 0;
           } else if( length > max_len ) {
                cout << "The array size " << length << " is too large." << endl;
                cout << "Only the first " << max_len << " values will be used." << endl;
                size = max_len;
           } else
               size = length;
           for( int i = 0; i < size; ++i ) a[i] = array[i];
        }
       
};

Array operator/(const Array a, const Array b)
{
    int sizea = a.getSize();
    int sizeb = b.getSize();
    int size = min(sizea,sizeb);
    int c[max_len];
    // The cast (int*) is necessary in
    // the two following statements.    
    int* pa = (int*)a.getArray();
    int* pb = (int*)b.getArray();
    
    for( int i = 0; i < size; ++i )
        if( pb[i] != 0 )
            c[i] = pa[i] / pb[i];
        else
            c[i] = INT_MAX; //division by zero

    Array temp; 
    temp.setArray(size, c);
    return temp;
}
       
Array operator%(const Array a, const Array b)
{
    int sizea = a.getSize();
    int sizeb = b.getSize();
    int size = min(sizea,sizeb);
    int c[max_len];
    // The cast (int*) is necessary in
    // the two following statements.
    int* pa = (int*)a.getArray();
    int* pb = (int*)b.getArray();
    
    for( int i = 0; i < size; ++i )
        if( pb[i] != 0 )
            c[i] = pa[i] % pb[i];
        else
            c[i] = INT_MAX; //division by zero

    Array temp;    
    temp.setArray(size, c);
    return temp;
}

#endif	/* ARRAY_H */

