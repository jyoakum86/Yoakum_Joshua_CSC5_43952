/* 
 * File:   main.cpp
 * Author: Joshua Yoakum
 *
 * Created on March 2, 2015, 9:08 AM
 *   Porpose: Free fall problem from Savitch
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries
          
//Global constants
          const float G=3.2174e1f;//Acceleration in ft/sec^2
          const float CNVFTMT=3.048e-1f;//Conversion from feet to 

//Function Prototypes
          
//Execution Begins Here!
/*
 * 
 */
int main(int argc, char** argv) {
              //Declare variables
              float time,dstnce;
              //Prompt for time
              cout << "Free Fall Problem" << endl;
              cout << "Input the time to drop x.xx (seconds)" << endl;
              cin >> time;
              //Calculate in distance
              dstnce=1.0f/2*G*time*time;//does not work
              //dstnce=static_cast<float> (1)/2*G*time*time;
              //dstnce=1.0f/2*G*time*time
              //dstnce=1/2.0f*G*time*time
              //dstnce=G*1/2*time*time
              //Output the Results
              cout<<"Distance fallen= "<<dstnce<< " (feet) "<<endl;
              cout<<"Distance fallen="<<dstnce*CNVFTMT<<" (meters)"<<endl;
              //Exit stage right!
    return 0;
}

