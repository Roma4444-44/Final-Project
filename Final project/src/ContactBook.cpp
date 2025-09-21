#include "ContactBook.h"
class ContactBook
{
private:
    vector<Contact> contacts;

public:
    void addContact(const Contact &c)
    {
        contacts.push_back(c);
    }
    void deleteContact(string fname, string lname)
    {
        for (auto it = contacts.begin(); it != contacts.end(); ++it)
        {
            if (it->getFirstName() == fname && it->getLastName() == lname)
            {
                contacts.erase(it);
                cout << "Contact deleted!\n";
                return;
            }
        }
        cout << "Contact not found!\n";
    }


    void searchContact(string fname, string lname)
    {
        for (const auto &c : contacts)
        {
            if (c.getFirstName() == fname && c.getLastName() == lname)
            {
                cout << "Contact found:\n";
                c.display();
                return;
            }
        }
        cout << "Contact not found!\n";
    }

    void displayAll() const
    {
        if (contacts.empty())
        {
            cout << "Contact book is empty.\n";
            return;
        }
        cout << "All Contacts:\n";
        for (const auto &c : contacts)
        {
            c.display();
        }
    }
};
