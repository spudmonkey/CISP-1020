/********************************************************
*  Name:           function02
*  Author:         Chris Jones
*  Date due:       2014-01-27 
*  Description:    Write a function that takes two arguments and returns
*                  nothing.
*
*                  In main function grab two floats (length and 
*                  width).  Pass those to our function and calculate 
*                  the square footage 
*                  
*                  Then convert that to acres (by definition 
*                  1 acre = 43560.174 square feet).
*
*                  Output variables per the assignment
********************************************************/

/***************************
*     libraries
****************************/
#include <iostream>            // needed for Cin and Cout
#include <cstdlib>             // need for call to system()
using namespace std;

/************************************
*     defines
*************************************/
#define SQF_IN_ACRE 43560.174; // the number of square feet in an acre

/*************************************
*     function prototype
*************************************/
void hasArgsNoRet(float length, float width);

/************************************
*      global variables
*************************************/


int main()
{
    /************************************
    *      local variables
    *************************************/
    
    float length = 0.0;     // The length of the area as input by user
    float width = 0.0;      // The width of the area as input by user

    // Get our inputs
    cout << "Please enter the length of your plot: ";
    cin >> length;
    cout << "Please enter the width of your plot: ";
    cin >> width;
    cout << "\n\n";
    
    hasArgsNoRet(length, width);

    system("pause");
    return 0;
}

/************************************
*      functions
*************************************/
void hasArgsNoRet(float length, float width)
{
    /************************************
    *      local variables
    *************************************/
    
    float sqFeet = 0.0;     // The square footage as calculated
    float acres = 0.0;      // The acreage as calculated
    
    
    // do our calculations
    sqFeet = length * width;
    acres = sqFeet / SQF_IN_ACRE;
    
    // Build our output
    cout << "A parcel of land with the dimensions of\n";
	cout << "\tlength\t" << length << "\n";
	cout << "\twidth\t" << width << "\n";
    cout << "contains " << acres << " acres" << "\n";   
}
