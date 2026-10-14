#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << left;

    cout << endl;
    cout << "Monday: NO CLASSES" << endl;
    cout << endl;

    cout << "Tuesday:" << endl;
    cout << setw(14) << "Time" << setw(14) << "Course Code" << setw(14) << "Section" << setw(5) << "Room" << endl;
    cout << setw(14) << "7:00-9:40" << setw(14) << "CCS0001" << setw(14) << "TN02" << setw(5) << "ONLINE" << endl;
    cout << setw(14) << "11:00-12:50" << setw(14) << "GED0011" << setw(14) << "TN02" << setw(5) << "ASYNCH" << endl;
    cout << setw(14) << "1:00-2:20" << setw(14) << "GED0006" << setw(14) << "TN02" << setw(5) << "ONLINE" << endl;
    cout << endl;

    cout << "Wednesday:" << endl;
    cout << setw(14) << "Time" << setw(14) << "Course Code" << setw(14) << "Section" << setw(5) << "Room" << endl;
    cout << setw(14) << "7:00-9:40" << setw(14) << "CCS0001L" << setw(14) << "TN02" << setw(5) << "F702" << endl;
    cout << setw(14) << "11:00-12:50" << setw(14) << "GED0004" << setw(14) << "TN02" << setw(5) << "NO CLASSES" << endl;
    cout << setw(14) << "1:00-2:50" << setw(14) << "GED0009" << setw(14) << "TN02" << setw(5) << "F505" << endl;
    cout << endl;

    cout << "Thursday:" << endl;
    cout << setw(14) << "Time" << setw(14) << "Course Code" << setw(14) << "Section" << setw(5) << "Room" << endl;
    cout << setw(14) << "7:00-9:40" << setw(14) << "CCS0003L" << setw(14) << "TN02" << setw(5) << "F702" << endl;
    cout << endl;

    cout << "Friday:" << endl;
    cout << setw(14) << "Time" << setw(14) << "Course Code" << setw(14) << "Section" << setw(5) << "Room" << endl;
    cout << setw(14) << "7:00-9:40" << setw(14) << "CCS0003" << setw(14) << "TN02" << setw(5) << "ONLINE" << endl;
    cout << setw(14) << "11:00-12:50" << setw(14) << "GED0011" << setw(14) << "TN02" << setw(5) << "ONLINE" << endl;
    cout << setw(14) << "1:00-2:20" << setw(14) << "GED0006" << setw(14) << "TN02" << setw(5) << "ASYNCH" << endl;
    cout << endl;

    cout << "Saturday:" << endl;
    cout << setw(14) << "Time" << setw(14) << "Course Code" << setw(14) << "Section" << setw(5) << "Room" << endl;
    cout << setw(14) << "11:00-12:50" << setw(14) << "GED0004" << setw(14) << "TN02" << setw(5) << "F301" << endl;
    cout << setw(14) << "1:00-2:50" << setw(14) << "GED0009" << setw(14) << "TN02" << setw(5) << "F505" << endl;
    cout << endl;

    return 0;
}
