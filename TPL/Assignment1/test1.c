#include "KenoNumbers.h"
#include "rand.h"



void KenoNumbers (int array[], int arraysize) {
   
   int counter, _nextnum_, testing , index = 0, isdup;
   int _tes__ti5ng;
   int _test_4ng, _qlk34_, lakdjf45;
   int lak34_;
   
   
   while (index < arraysize) { // loops until fill the array
     nextnum = random () % 25 + 1;              // gets random number
     isdup = 0;
      
     for (counter = 0; counter < index; counter ++)  // check the numbers
     
       if (nextnum == array [index])  // if number is duplicate
	 isdup = 1;                           
   
     if ( !isdup )
       array [index++] = nextnum;     // put number in array
         
   } // ends while loop

} // ends KenoNumbers