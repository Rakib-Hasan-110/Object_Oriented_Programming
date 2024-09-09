#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    float marks[5];
    float totalMarks;

public:
    // Constructor to initialize the attributes
    Student(string n, int roll, float m[5]) {
        name = n;
        rollNumber = roll;
        for (int i = 0; i < 5; i++) {
            marks[i] = m[i];
        }
        calculateTotalMarks();
    }

    // Method to calculate the total marks of the student
    void calculateTotalMarks() {
        totalMarks = 0;
        for (int i = 0; i < 5; i++) {
            totalMarks += marks[i];
        }
    }

    // Method to display the information of the student, including the total marks
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: ";
        for (int i = 0; i < 5; i++) {
            cout << marks[i] << " ";
        }
        cout << endl;
        cout << "Total Marks: " << totalMarks << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
    }

    // Method to calculate and return the percentage of marks
    float calculatePercentage() {
        return (totalMarks / 500) * 100;
    }
};

int main() {
    // Marks for three students
    float marks1[5] = {85, 90, 78, 92, 88};
    float marks2[5] = {76, 81, 67, 89, 80};
    float marks3[5] = {90, 93, 94, 96, 95};

    // Creating three Student objects
    Student student1("Ali", 1, marks1);
    Student student2("Boby", 2, marks2);
    Student student3("Akbar", 3, marks3);

    // Displaying information of each student
    cout << "Student 1 Information:" << endl;
    student1.displayInfo();
    cout << endl;

    cout << "Student 2 Information:" << endl;
    student2.displayInfo();
    cout << endl;

    cout << "Student 3 Information:" << endl;
    student3.displayInfo();
    cout << endl;

    return 0;
}
