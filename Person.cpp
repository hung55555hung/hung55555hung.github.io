#include <iostream>
#include "Person.h"
using namespace std;

Person::Person(const string &name, const string &gender, const string &birthday)
    : name(name), gender(gender), birthday(birthday)
{
}
Person::~Person()
{
}
void Person::display() const
{
    cout << "Ten: " << name << endl;
    cout << "Gioi tinh: " << gender << endl;
    cout << " Ngay sinh: " << birthday << endl;
}

const string &Person::getName() const
{
    return name;
}

const string &Person::getGender() const
{
    return gender;
}

const string &Person::getBirrthday() const
{
    return birthday;
}
