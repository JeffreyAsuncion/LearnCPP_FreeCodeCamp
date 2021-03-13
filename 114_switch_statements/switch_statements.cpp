#include <iostream>

using namespace std;

// covert a number to a day of the week
// 0 -> "sunday"
// 1 -> "monday"

string getDayOfWeek(int dayNum){
    string dayName;

    /*
    if(dayNum == 0){
        dayName = "Sunday";
    } else if(dayNum == 1){
        dayName = "Monday"
    }
    */

    switch(dayNum){
        case 0:
            dayName = "Sunday";
            break;
        case 1:
            dayName = "Monday";
            break;
        case 2:
            dayName = "Tuesday";
            break;
        case 3:
            dayName = "Wednesday";
            break;
        case 4:
            dayName = "Thursday";
            break;
        case 5:
            dayName = "Friday";
            break;
        case 6:
            dayName = "Saturday";
            break;
        default:
            dayName = "invalid Number";
    } 
   

    return dayName;
}



int main()
{

    cout << getDayOfWeek(1) << endl;

    return 0;
}