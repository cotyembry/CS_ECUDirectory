// Mary Smith
// CMPSC 3543
// Example 4
//
// compile as
//   gcc -o Example4 Example4.c
// and compile as
//   g++ -o Example4 Example4.c
//
// Compare with Example 3, which
// is in C++.  Is it better in C++
// to require all prototypes?  Which
// program (and language) is giving
// more reliable and consistent results?

#include <stdio.h>

// In C the following prototype for
// add3 is not required as it is in C++.
// Run the program entering
//   11 2 9
// and compare with the C++ program.
// Then use the prototype and compare
// with the C++ program using the same
// three input values.
int add3(int, int, int);
// The prototype for average is required
// in both C and C++.
double average(int);

int main(int argc, char** argv) {

    printf("Enter 3 whole numbers: ");
    int x, y, z;
    scanf("%d %d %d",&x, &y, &z);
    int sum = add3(x,y,z);
    printf("sum= %d\n",sum);
    printf("average= %f\n",average(sum));
    sum = add3(1.5*x,y,z);
    printf("sum= %d\n",sum);
    
    return 0;
}

int add3(int a, int b, int c)
{
    printf("a=%d\n",a);
    return a + b + c;
}

double average(int s)
{
    return s / 3.0;
}
