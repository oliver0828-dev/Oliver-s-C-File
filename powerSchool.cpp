#include <iostream>
#include <string>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

vector<int> grade;
vector<pair<string, string>> file1;

void YesOrNo();

int main() {
    string name;
    string subject;
    int gradeInt;
    int accessStudent;
    string option;
    int studentInt;
    vector<int> numberOfStudents;
    int numberOfStudentsInt;

    cout << "Type in the number of students: ";
    cin >> numberOfStudentsInt;

    for (int i = 0; i < numberOfStudentsInt; i++) {
        numberOfStudents.push_back(numberOfStudentsInt);
    }

    // Now getting the name and the subjects
    for (int i = 0; i < numberOfStudents.size(); i++) {
        cout << "Name of a student: ";
        cin >> name;
        cout << "Name of a subject: ";
        cin >> subject;

        // Validate the grade input
        do {
            cout << "The grade of a subject (60 ~ 100): ";
            cin >> gradeInt;
            if (gradeInt < 60 || gradeInt > 100) {
                cout << "Invalid grade! Please enter a grade between 60 and 100." << endl;
            }
        } while (gradeInt < 60 || gradeInt > 100);

        file1.push_back(make_pair(name, subject));
        grade.push_back(gradeInt);
    }

    if (numberOfStudents.size() == 1) {
        cout << file1[accessStudent].first << " - " << file1[accessStudent].second << ": " << grade[accessStudent] << "%\n";
        cout << "Thank you for using PowerSchool C++";
        return 0;
    }

    YesOrNo();
    cin >> option;

    if (option == "Yes") {
        for (int i = 0; i < numberOfStudents.size(); i++) {
            cout << i << " ";
            cout << file1[i].first << " " << file1[i].second;
            cout << endl;
        }

        // Validate the student number selection
        do {
            cout << "Choose the number of the student above: ";
            cin >> accessStudent;
            if (accessStudent < 0 || accessStudent >= numberOfStudents.size()) {
                cout << "Invalid student number! Please enter a valid student number." << endl;
            }
        } while (accessStudent < 0 || accessStudent >= numberOfStudents.size());

        cout << file1[accessStudent].first << " - " << file1[accessStudent].second << ": " << grade[accessStudent] << "%";
    }

    if (option == "All") {
        for (int i = 0; i < file1.size(); i++) {
            cout << file1[i].first << " - " << file1[i].second << ": " << grade[i] << "%" << endl;
        }
    }

    cout << "Thank you for using PowerSchool C++";

    return 0;
}

void YesOrNo() {
    cout << "If you want to look into an individual score, please type: 'Yes'" << endl;
    cout << "If you want to see all the scores, please type: 'All'" << endl;
    cout << "If not, please type: 'No'\n";
}
