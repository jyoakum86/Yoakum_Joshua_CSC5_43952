/* 
 * File:   main.cpp
 * Author: Josh
 * This program calculates the user's pay.
 * Created on March 1, 2015, 1:28 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    float hours, rate, pay;
    
    //Get the number of hours worked.
    cout << "How many hours did you work?";
    cin >>hours;
    
    //Get the hourly pay rate
    cout << "How much do you get paid per Hour?";
    cin >>rate;
    
    //Caculate the pay.
    pay = hours * rate;
    
    //Display the pay.
    cout <<"You have earned $" << pay << endl;
   
    return 0;
}

