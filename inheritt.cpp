// Create result sheet program 
// using student class, having data:
//rol,name,sub1,sub2,sub3,total

//Ctetae 5 students object using array display the result sheet 
//
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int roll;
    string name;
    int sub1, sub2, sub3;
    int total;

public:
    // Constructor to initialize student data
    Student(int r, string n, int s1, int s2, int s3) {
        roll = r;
        name = n;
        sub1 = s1;
        sub2 = s2;
        sub3 = s3;
        total = sub1 + sub2 + sub3;
    }

    // Function to display student details
    void display() {
        cout << roll << "\t" << name << "\t" << sub1 << "\t" << sub2 << "\t" << sub3 << "\t" << total << endl;
    }
};

int main() {
    // Creating an array of 5 student objects
    Student students[5] = {
        Student(1, "Atharva", 85, 90, 88),
        Student(2, "Rizwan", 78, 82, 80),
        Student(3, "Ameya", 92, 88, 91),
        Student(4, "Sam", 70, 75, 72),
        Student(5, "Ritesh", 88, 84, 86)
    };

    // Displaying the result sheet header
    cout << "==============================================" << endl;
    cout << "Roll\tName\tSub1\tSub2\tSub3\tTotal" << endl;
    cout << "==============================================" << endl;
    

    // Looping through the array and displaying each student's details
    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
