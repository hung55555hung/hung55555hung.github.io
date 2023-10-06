// #include <iostream>
// #include <string>
// using namespace std;

// class Person
// {
//     protected:
//         string name;
//         string gender;
//         string birthday;
//     public:
//         Person(const string& name, const string& gender, const string& birthday);
//         ~Person();
//         void display() const;
// };


#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include "List.h"

class Person {
public:
    std::string name;
    std::string dateOfBirth;
    std::string gender;

    // Constructor
    Person(const std::string& n, const std::string& dob, const std::string& g);

    // Destructor
    ~Person();

    // Phương thức nhập thông tin từ bàn phím
    void input();

    // Phương thức hiển thị thông tin người
    void display() const;
};

#endif // PERSON_H
