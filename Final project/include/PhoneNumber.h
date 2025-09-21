#ifndef PHONENUMBER_H
#define PHONENUMBER_H
#include <iostream>
using namespace std;
class PhoneNumber
{
private:
    string number;
    string type;
public:
    PhoneNumber(string num = "", string t = "") : number(num), type(t) {}
    void setNumber(string num)
    {
        number = num;
    }
    void setType(string t)
    {
        type = t;
    }
    string getNumber() const
    {
        return number;
    }
    string getType() const
    {
        return type;
    }
    void display() const
    {
        cout << type << ": " << number << endl;
    }
};

#endif
