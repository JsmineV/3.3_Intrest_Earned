// 3.3_Intrest_Earned.cpp : This file contains the 'main' function. Program execution begins and ends there.



// This program calculate intrest earned in a savings account based on the initial princpal, intrest rate, and times compounded in a year. 


#include <iostream>
#include <iomanip>

int main()
{
    

    using namespace std; 

    cout << fixed << setprecision(2); 

    cout << "This program calculates the intrest earned in a savings account based on the initial principle, intrest rate, and times compounded in a year." << endl; 
    cout << "Enter the principle amount: "; 

    int principle; 
    cin >> principle; 

    cout << "Enter the intrest rate: (example 25% into 25)" << endl;
    double intrestRate; 
    cin >> intrestRate; 

    cout << "Enter the amount of times the interest is compunded in a year: "; 
    int timesCompounded; 
    cin >> timesCompounded;

    const double intrestRateDecimal = intrestRate / 100; 
    const double amount = principle * pow(1 + intrestRateDecimal / timesCompounded, timesCompounded); 
    double intrestEarned = amount - principle; 

    cout << "The intrest rate is:" << intrestRateDecimal * 100 << "%" << endl; 
    cout << "The amount of times compounded in a year is:" << timesCompounded << endl; 
    cout << "The principle amount is " << principle << endl; 
    cout << "The interest earned is: " << intrestEarned << endl; 
    cout << "The total amount saved over one year is: " << amount << endl; 


    return 0; 
}

