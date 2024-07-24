//Lab7-3.cpp - calculates the average number of text
//messages sent each day for 7 days
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{	

    int day = 1;
    int Ntext = 0;
    int Daily = 0;
    double Avg = 0.0;

    while (day < 8)
    {
        cout << "How many texts did you send on day " << day << "? ";
        cin >> Daily;
        Ntext += Daily;
        day += 1;
    } //end while

    Avg = static_cast<double>(Ntext) / (day - 1) ;
    cout << fixed << setprecision(0);
    cout << endl << "You sent approximately" << Avg << "texts per day." << endl;

    
    return 0;
}   //end of main function