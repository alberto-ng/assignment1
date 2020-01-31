# include <iostream>
using namespace std;

/*
Write a program to gauge the expected cost of an item in a specified number of years.

The program asks for:
    the cost of the item
    the number of years from now that the item will be purchased
    the rate of inflation. (enter the inflation rate as a percentage like 5.6)

The program then outputs:
    the estimated cost of the item after the specified period.

Your program should then convert the percentage to a fraction, 5.6% -> 0.056.

use a loop to estimate the price adjusted for inflation. (Hint: Use a loop.)
 */

 int main (){
     // initialize and assign variables
     double itemCost, inflationRate;
     int numYears;

     // ask user
     cout << "Cost of item?" << endl;
     cin >> itemCost;

     cout << "Years from purchase?" << endl;
     cin >> numYears;

     cout << "Enter rate of inflation in percentage. (5.6% -> 5.6)" << endl;
     cin >> inflationRate;

     inflationRate /= 100;

     for (int i = 0; i < numYears; ++i){
         itemCost += (itemCost * inflationRate);
     }

     cout << "Estimated cost in " << numYears << " years: $" << itemCost << endl;

    
     return 0;
 }
