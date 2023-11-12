#include <iostream>
#include <string>
#include <vector>
#include <deque>
using namespace std;

int main() {
    vector<string> nameOfStudent;
    vector<string> attendanceStatus; 
    int numberOfS;
    cout << "How many students are in your class?: ";
    cin >> numberOfS;

    // consume the newline character in the input stream
    cin.ignore();

    for (int i = 0; i < numberOfS; i++) {
        cout << "Type in student #" << i + 1 << " name: ";
        string students;
        getline(cin, students);
        nameOfStudent.push_back(students);

        cout << "Enter attendance status for " << students << " [absent/late/present]: ";
        string status;
        getline(cin, status);
        attendanceStatus.push_back(status);
    }

     cout << "******************\n";
     cout << "Attendance report:\n";
    for (int i = 0; i < nameOfStudent.size(); i++) {
        cout << nameOfStudent[i] << " is " << attendanceStatus[i] << endl;
    }

    return 0; 
}