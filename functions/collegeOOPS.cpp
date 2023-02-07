#include <iostream>
#include <string>

using namespace std;

class Teacher {
    private:
        string name;
        string subject;
        int experience;

    public:
        void set_details(string n, string s, int e) {
            name = n;
            subject = s;
            experience = e;
        }

        virtual void get_details() {
            cout << "Name: " << name << endl;
            cout << "Subject: " << subject << endl;
            cout << "Experience: " << experience << endl;
        }
};

class Student {
    private:
        string name;
        int roll_number;
        int year;
        string stream;

    public:
        void set_details(string n, int rn, int y, string s) {
            name = n;
            roll_number = rn;
            year = y;
            stream = s;
        }

        virtual void get_details() {
            cout << "Name: " << name << endl;
            cout << "Roll number: " << roll_number << endl;
            cout << "Year: " << year << endl;
            cout << "Stream: " << stream << endl;
        }

        friend void display(Student &s) {
            cout << "Friend Function: " << endl;
            cout << "Name: " << s.name << endl;
            cout << "Roll number: " << s.roll_number << endl;
            cout << "Year: " << s.year << endl;
            cout << "Stream: " << s.stream << endl;
        }
};

class ThirdYearStudent: public Student {
    private:
        string project_topic;

    public:
        void set_details(string n, int rn, int y, string s, string pt) {
            Student::set_details(n, rn, y, s);
            project_topic = pt;
        }

        void get_details() {
            Student::get_details();
            cout << "Project topic: " << project_topic << endl;
        }
};

int main() {
    Teacher t1;
    t1.set_details("John Doe", "Mathematics", 10);
    cout << "Teacher Details:" << endl;
    t1.get_details();

    ThirdYearStudent s1;
    s1.set_details("Jane Doe", 12345, 3, "Computer Science", "Artificial Intelligence");
    cout << "\nThird Year Student Details:" << endl;
    s1.get_details();

    Student *ptr;
    ptr = &s1;
    cout << "\nVirtual Function: " << endl;
    ptr->get_details();

    display(s1);

    return 0;
}
