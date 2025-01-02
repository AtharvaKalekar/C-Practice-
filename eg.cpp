#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;

public:
    void acceptData() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); // Clear the input buffer
        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayData() const {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }

    void saveToFile(const string& filename) const {
        ofstream outFile(filename, ios::out);
        if (!outFile) {
            cerr << "Error opening file for writing." << endl;
            return;
        }
        outFile << rollNo << endl;
        outFile << name << endl;
        outFile.close();
        cout << "Data saved successfully to " << filename << endl;
    }

    void loadFromFile(const string& filename) {
        ifstream inFile(filename, ios::in);
        if (!inFile) {
            cerr << "Error opening file for reading." << endl;
            return;
        }
        inFile >> rollNo;
        inFile.ignore(); // Clear the input buffer
        getline(inFile, name);
        inFile.close();
    }
};

int main() {
    Student student;
    string filename = "student_data.txt";

    // Accept data from user
    student.acceptData();

    // Save data to file
    student.saveToFile(filename);

    // Create a new student object to load and display data
    Student anotherStudent;
    anotherStudent.loadFromFile(filename);

    // Display data
    cout << "\nData retrieved from file:" << endl;
    anotherStudent.displayData();

    return 0;
}