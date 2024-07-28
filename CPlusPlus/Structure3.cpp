#include<iostream>
using namespace std;

struct Person {
    string first_name;
    string last_name;
    int age;
    float salary;

    // member function to display information about the person
    void display_info() {
        cout << "First Name: " << first_name << endl;
        cout << "Last Name: " << last_name << endl;
        cout << "Age: " << age << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    int num_persons;
    cout << "Enter the number of persons: ";
    cin >> num_persons;

    // Create an array of Person structures
    Person persons[num_persons];

    // Loop to collect information for each person
    for (int i = 0; i < num_persons; ++i) {
        cout << "\nEnter details for person " << i + 1 << ":" << endl;
        cout << "Enter first name: ";
        cin >> persons[i].first_name;
        cout << "Enter last name: ";
        cin >> persons[i].last_name;
        cout << "Enter age: ";
        cin >> persons[i].age;
        cout << "Enter salary: ";
        cin >> persons[i].salary;
    }

    // Loop to display information for each person
    cout << "\nDisplaying Information." << endl;
    for (int i = 0; i < num_persons; ++i) {
        cout << "\nPerson " << i + 1 << " details:" << endl;
        persons[i].display_info();
    }

    return 0;
}
