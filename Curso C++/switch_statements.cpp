#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum){
    string dayName;

    switch(dayNum){
        case 0:
            dayName = "Sunday";;
            break;
        case 1:
            dayName = "Monday";;
            break;
        case 2:
            dayName = "Tuesday";;
            break;
        case 3:
            dayName = "Wednesday";;
            break;
        case 4:
            dayName = "Thursday";;
            break;
        case 5:
            dayName = "Friday";;
            break;
        case 6:
            dayName = "Saturday";;
            break;
    }

    return dayName;
}

int main()
{
    int day;
    cout << "Introduce the day of the week: ";
    cin >> day;
    string dayName = getDayOfWeek(day);
    cout << dayName << " is the day of the week";


    return 0;
}