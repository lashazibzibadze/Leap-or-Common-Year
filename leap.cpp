/* 
Author: Lasha Zibzibadze
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Lab 1 C Task

This program calculates if the user inputed year is leap year or common year.
*/

#include <iostream>
using namespace std;

int main(){

    int User_input;
    cout<< "Enter year: ";
    cin>> User_input;

    if((User_input % 4) != 0){
        cout<< "Common year"<< endl;
    }
    else if((User_input % 100) != 0){
        cout<< "Leap year"<< endl;
    }
    else if((User_input % 400) != 0){
        cout<< "Common year"<< endl;
    }
    else {
        cout<< "Leap year"<< endl;
    }
    

    
    return 0;
}