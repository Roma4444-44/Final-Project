#ifndef CONTACT_H
#define CONTACT_H
#include <iostream>
#include <PhoneNumber.h>
#include <ContactBook.h>
using namespace std;
class Contact {
private:
    string firstName;
    string lastName;
    string email;
    vector<PhoneNumber> phoneNumbers;
public:
    Contact(string f = "", string l = "", string e = "")
        : firstName(f), lastName(l), email(e) {}
    void setFirstName(string f) { firstName = f; }
    void setLastName(string l) { lastName = l; }
    void setEmail(string e) { email = e; }
    string getFirstName() const { return firstName; }
    string getLastName() const { return lastName; }
    string getEmail() const { return email; }

    void addPhoneNumber(const PhoneNumber &pn) {
        phoneNumbers.push_back(pn);
    }

    void deletePhoneNumber(int index) {
        if (index >= 0 && index < (int)phoneNumbers.size())
            phoneNumbers.erase(phoneNumbers.begin() + index);
        else
            cout << "Invalid phone number index!\n";
    }
    void display() const {
        cout << "Name: " << firstName << " " << lastName << endl;
        cout << "Email: " << email << endl;
        cout << "Phone Numbers:\n";
        for (int i = 0; i < phoneNumbers.size(); i++) {
            cout << "  " << (i+1) << ". ";
            phoneNumbers[i].display();
        }
        cout << "------------------------\n";
    }
};
#endif
