#include <iostream>
#include <fstream>
#include <windows.h>
#include <dos.h>
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <conio.h>
#include "hostel.h"
#include "canteen.h"
#include "attendance.h"
using namespace std;

int main()
{
    int a;
    system("color 71");
    cout << "---------------------------------------------------------------------------------\n";
    cout << "----------------------------------STUDENT MIS 3----------------------------------\n";
    cout << "--------------------- ------------------------------------------------------------\n";
    cout << "Functionalities of the MIS:\n";
    cout << "1. Hostel Management System\n";
    cout << "2. Attendance Management System\n";
    cout << "3. Canteen Management System\n";
    int flag = 1;
    cout << "Enter the key corresponding to the system you want to use: \n";
    while (flag)
    {
        cin >> a;
        switch (a)
        {
        case 1:
            Hostell();
            break;
        case 2:
            Attendance();
            break;
        case 3:
            Canteen();
            break;
        case 0:
            flag = 0;
            break;
        default:
            cout << "Enter a valid choice\n";
        }
    }
    return 0;
}