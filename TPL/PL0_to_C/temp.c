#include <stdio.h>

in startBegin: globalBlockFlag = 1, printedMain = 0
in startBegin: globalBlockFlag = 1, printedMain = 0
globalBlockFlag = 1
in startBegin: globalBlockFlag = 1, printedMain = 0
in startBegin: globalBlockFlag = 1, printedMain = 0
in startBegin: globalBlockFlag = 1, printedMain = 0
globalBlockFlag = 1
in startBegin: globalBlockFlag = 1, printedMain = 0
in startBegin: globalBlockFlag = 1, printedMain = 0
globalBlockFlag = 1
in startBegin: globalBlockFlag = 0, printedMain = 0
globalBlockFlag = 0
const int m=7, n=85;
int x, y, z, q, r;
void multiply() {
    int a, b;
{
a = x;

b = y;

z = 0;

while(b > 0) {
    {
if((((b) % 2) != 0)) {
    z = z+a;

}

a = 2*a;

b = b/2;

}

}

}

}

void divide() {
    int w;
{
r = x;

q = 0;

w = y;

while(w <= r) {
    w = 2*w;

}

while(w > y) {
    {
q = 2*q;

w = w/2;

if(w <= r) {
    {
r = r-w;

q = q+1;

}

}

}

}

}

}

void gcd() {
    int f, g;
{
f = x;

g = y;

while(f != g) {
    {
if(f < g) {
    g = g-f;

}

if(g < f) {
    f = f-g;

}

}

}

z = f;

}

}

void main() {
{
x = m;

y = n;

printf("%d\n", z);

multiply();
x = 25;

y = 3;

printf("%d\n", z);

divide();
x = 84;

y = 36;

gcd();
printf("%d\n", z);

}

}

