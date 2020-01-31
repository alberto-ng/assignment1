# include <iostream>
using namespace std;

/*
A metric ton is 35,273.92 ounces.
Write a program that will:
-read the weight (console input) of a package of breakfast cereal in ounces
-output the weight in metric tons
-as well as the number of boxes needed to yield one metric ton of cereal.
 */

 int main (){
     double weightOunces, weightTon, Box;
     double metricTon = 35273.92;

     // ask user weigh of cereal
     cout << "How much does a box of cereal weigh?" << endl;
     cin >> weightOunces;

     // change user input from ounces to metric ton
     weightTon = weightOunces / metricTon;
     // get box number to make 1 metric ton
     Box = 1 / weightTon;

     cout << "A package of cereal weighs " << weightTon << " metric ton." << endl;
     cout << Box << " box of cereal is needed to yield 1 metric ton." << endl;

     return 0;
 }
