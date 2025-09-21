#include <iostream>
#include <PhoneNumber.h>
#include <Contact.h>
#include <ContactBook.h>
using namespace std;
int main()
{
    ContactBook book;
    int choice;

    do
    {
        cout << "\n=== Contact Book Menu ===\n";
        cout << "1. Add a new contact\n";
        cout << "2. Delete a contact\n";
        cout << "3. Search for a contact\n";
        cout << "4. Display all contacts\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1)
        {
            string fname, lname, email;
            cout << "Enter first name: ";
            cin >> fname;
            cout << "Enter last name: ";
            cin >> lname;
            cout << "Enter email: ";
            cin >> email;

            Contact c(fname, lname, email);

            int phoneCount;
            cout << "How many phone numbers to add? ";
            cin >> phoneCount;
            for (int i = 0; i < phoneCount; i++)
            {
                string num, type;
                cout << "Enter phone number " << i+1 << ": ";
                cin >> num;
                cout << "Enter type (home/work/mobile): ";
                cin >> type;
                c.addPhoneNumber(PhoneNumber(num, type));
            }
            book.addContact(c);
        }
        else if (choice == 2)
        {
            string fname, lname;
            cout << "Enter first name of contact to delete: ";
            cin >> fname;
            cout << "Enter last name: ";
            cin >> lname;
            book.deleteContact(fname, lname);
        }
        else if (choice == 3)
        {
            string fname, lname;
            cout << "Enter first name of contact to search: ";
            cin >> fname;
            cout << "Enter last name: ";
            cin >> lname;
            book.searchContact(fname, lname);
        }
        else if (choice == 4)
        {
            book.displayAll();
        }

    }
    while (choice != 5);

    cout << "Exiting program...\n";
    return 0;
}
