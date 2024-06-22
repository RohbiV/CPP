#include <bits/stdc++.h>
using namespace std;

//enum is used to define own types
enum weekDays {M = 1,TU,W,TH,F,S,SN}; //this is enumeration and this type of variable can only hold these values given in curly braces

void getDay(weekDays);

int main() {
    weekDays d = M;

    cout << d << "\n";

    int i;
    
    cout << "Enter the digit for day name: " << "\n";
    cin >> i;


    getDay(weekDays(i)); //gives the day in the week


    return 0;
}


void getDay(weekDays d){
    switch(d) {
        case M: cout << "Monday!";
            break;
        case TU: cout << "Tuesday!";
            break;
        case W: cout << "Wednesday!";
            break;
        case TH: cout << "Thursday!";
            break;
        case F: cout << "Friday!";
            break;
        case S: cout << "Saturday!";
            break;
        case SN: cout << "Sunday!";
            break;
        default: cout << "You have entered something wrong!!" << "\n";
            break;
    }
}
