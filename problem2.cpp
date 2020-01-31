# include <iostream>
using namespace std;

/*
-read in the maximum room capacity
-and the number of people to attend the meeting.

less than or equal to the maximum room capacity:
-it is legal to hold the meeting and tells how many additional people may
    legally attend.

exceeds the maximum room capacity:
-the meeting cannot be held as planned due to fire regulations
    and tells how many people must be excluded to meet the fire regulations.
 */

 int main (){
     int maxCap, numAttending, numChange;

     // ask user maximum capacity
     cout << "What is the maximum capacity?" << endl;
     cin >> maxCap;

     // ask user number of people attending
     cout << "How many people are attending?" << endl;
     cin >> numAttending;

     // if statement to check if people attending is <= maxCap
     if (numAttending > maxCap){
         cout << "Meeting cannot be held as planned due to fire regulations." << endl;
         cout << numAttending - maxCap << " people need to go." << endl;
     }

     else{
         cout << "It is legal to hold the meeting." << endl;
         cout << maxCap - numAttending << " people can join." << endl;
     }


     return 0;
 }
