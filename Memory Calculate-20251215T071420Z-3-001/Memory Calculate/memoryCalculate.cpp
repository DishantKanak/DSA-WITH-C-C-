#include <iostream>
#include <vector>
#include <string>
using namespace std;


template <typename T>
class MemoryCalculate {

private:
    T id;
    string name;

public:

    MemoryCalculate(T i, string n) {

        id = i;
        name = n;
    }


    void display() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }


    T getId() const {
        return id;
    }
};

int main() {

    vector<MemoryCalculate<int>> students;
    int choice;

    do {
        cout << "\n===== Student Management System =====" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Remove Student by ID" << endl;
        cout << "4. Search Student by ID" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int id;
            string name;
            cout << "Enter Student ID: ";
            cin >> id;
            cout << "Enter Student Name: ";
            cin >> name;


            students.push_back(MemoryCalculate<int>(id, name));

            cout << "Student Added Successfully!" << endl;
        }

        else if (choice == 2) {

            cout << "\n--- All Students ---" << endl;

            if (students.empty()) {

                cout << "No students found!" << endl;
            } else {

                for (const auto &s : students) {
                    s.display();
                }
            }
        }

        else if (choice == 3) {
            int id;

            cout << "Enter ID to Remove: ";
            cin >> id;

            bool found = false;

            for (auto it = students.begin(); it != students.end(); ++it) {
                if (it->getId() == id)
                    {
                    students.erase(it);

                    cout << "Student Removed Successfully!" << endl;
                    found = true;
                    break;
                }
            }

            if (!found) {
                cout << "Student Not Found!" << endl;
            }
        }

        else if (choice == 4) {
            int id;
            cout << "Enter ID to Search: ";
            cin >> id;

            bool found = false;

            for (const auto &s : students) {
                if (s.getId() == id) {
                    cout << "Student Found: ";
                    s.display();
                    found = true;
                }
            }

            if (!found) {
                cout << "Student Not Found!" << endl;
            }
        }

        else if (choice == 5) {
            cout << "Exiting Program. Goodbye!" << endl;
        }

        else {
            cout << "Invalid Choice! Try Again." << endl;
        }

    } while (choice != 5);

    return 0;
}
