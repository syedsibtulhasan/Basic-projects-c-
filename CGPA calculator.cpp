#include <iostream>
using namespace std;

int main() {
    int numSubjects;
    double credit, gradePoint, totalPoints = 0, totalCredits = 0;

    cout << "----- GPA Calculator -----" << endl;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;
    

    for (int i = 1; i <= numSubjects; i++) {
        cout << "Enter credit hours for subject " << i << ": ";
        cin >> credit;
        cout << "Enter grade point for subject " << i << " (e.g., 4.0 for A): ";
        cin >> gradePoint;

        totalPoints += credit * gradePoint;
        totalCredits += credit;
    }

    double gpa = totalPoints / totalCredits;
    cout << "Your GPA for this semester is: " << gpa << endl;

    // Now calculate CGPA
    int totalSemesters;
    cout << "\n----- CGPA Calculator -----" << endl;
    cout << "Enter total number of semesters completed: ";
    cin >> totalSemesters;

    double semesterGPA, semesterCredits, cgpaPoints = 0, cgpaCredits = 0;

    for (int i = 1; i <= totalSemesters; i++) {
        cout << "Enter GPA for semester " << i << ": ";
        cin >> semesterGPA;
        cout << "Enter total credit hours in semester " << i << ": ";
        cin >> semesterCredits;

        cgpaPoints += semesterGPA * semesterCredits;
        cgpaCredits += semesterCredits;
    }

    double cgpa = cgpaPoints / cgpaCredits;
    cout << "Your CGPA is: " << cgpa << endl;

    return 0;
}

