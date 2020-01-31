# include <iostream>
using namespace std;

/*
-$16.00 per hour for regular hours worked in a week.
-Any hours at the overtime rate of one and one-half times that. (1.5*16)*overHour

From the worker’s pay:
    6% is withheld for Social Security tax
    14% is withheld for federal income tax
    5% is withheld for state income tax
    $10 per week is withheld for medical insurance

Write a program that will:
    -read in the number of hours worked in a week as input

    -output:
        1. the worker’s gross pay
        2. each withholding amount
        3. net take-home pay for the week.
 */

 int main (){
     // initialize and assign variables
     double regularRate = 16.00;
     double overtimeRate = (1.5*16.00);
     double securityTax = 0.06;
     double federalTax = 0.14;
     double stateTax = 0.05;
     double medInsurance = 10.00;
     double regularHour = 40.0;
     double userHours, endPay, netPay;

     // ask user hours worked in a week
     cout << "Number of hours worked in a week: " << endl;
     cin >> userHours;

     // if statement to calculate gross pay
     if (userHours <= regularHour){
         endPay = regularRate * userHours;
     }
     else {
         endPay = (regularRate * regularHour) + (overtimeRate * (userHours - regularHour));
     }

     // output the worker’s gross pay
     cout << "Gross pay of the week: $" << endPay << endl;

     // output each withholding amount
     cout << " - Social Security tax: $" << endPay * securityTax << endl;
     cout << " - Federal income tax: $" << endPay * federalTax << endl;
     cout << " - State income tax: $" << endPay * stateTax << endl;
     cout << " - Medical insurance: $" << medInsurance << endl;

     // calculate and output the worker’s net pay
     netPay = endPay - ((endPay * securityTax) + (endPay * federalTax) + (endPay * stateTax) + medInsurance);
     cout << "Net take-home pay for the week: $" << netPay << endl;

     return 0;
 }
