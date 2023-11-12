/*
Carrie Bailey
CS221 Fall 2023
 Due October 8, 2023
Completed: November 12, 2023
Week 3, Program #6: Cartesian Plane
Description:
 This program asks the user for the coordinates of a point on a Cartesian plane
 then outputs its location on the grid.

//Instructions
/*Write a program that prompts the user to input the (x, y) coordinate of a point
 * in a Cartesian plane. The program should then output a message indicating
 * whether the point is the origin,
is located on the x or y axis, or appears in a particular quadrant.
 */



//ALGORITHM
// if (x == 0 and y == 0)
//display origin
//msg
//if x == 0,
//display (x, y
//) and
//on the
//y coordinate
//* if y == 0,
//display (x, y
//) and
//on the
//x coordinate
//* if x > 0
//AND y
//> 0,
//display (x, y
//) and Q1
//* if x<0 and y> 0,
//display (x, y
//) and Q2
//* if
//x<0 and y < 0, display(x, y)
//and Q3
//* if x > 0 and
//y<0, display(x, y)
//and Q4
#include <iostream>
using namespace std;
//VARIABLES
int x; // x coordinate
int y; // y coordinate
//END VARIABLES

//IF STATEMENT - determines quadrant location
int main() {
    cout
            << "Welcome to the algebra assistant. I can tell you which quadrant a given coordinate is, or if it is the origin or on the x-axis or y-axis. Press enter to start."
            << endl;
    cin.ignore();
    cout
            << "Please enter the x value of your coordinate: "
            << endl;
    cin >> x;
    cout << "Now enter the y value: "
         << endl;
    cin >> y;

    //Program
    if ((x == 0) and (y == 0)) {
        cout << "The point (" << x
             << "," << y
             << ") is at the origin.";
    }
    if ((x == 0) and (y > 0)) {
        cout << "The point ("
             << x
             << "," << y
             << ") is on the y-axis.";
    }

    if ((x > 0) and (y == 0)) {
        cout << "The point (" << x
             << "," << y
             << ") is on the x-axis.";
    }
    if ((x > 0) and (y > 0)) {
        cout << "The point (" << x
             << "," << y
             << ") is in Quadrant I.";
    }
    if ((x < 0) and (y > 0)) {
        cout << "The point (" << x
             << "," << y
             << ") is in Quadrant II.";
    }
    if ((x < 0) and (y < 0)) {
        cout << "The point (" << x
             << "," << y
             << ") is in Quadrant III.";
    }
    if ((x > 0) and (y < 0)) {
        cout << "The point (" << x
             << "," << y
             << ") is in Quadrant IV.";
    }

    return 0;
}