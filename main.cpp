#include <iostream>
#include "List.h"
#include "Person.h"
using namespace std;
int main() {
    List<Person> personList;

    // Nhập thông tin người từ bàn phím
    Person person1("", "", "");
    person1.input();
    personList.push_back(person1);

    Person person2("", "", "");
    person2.input();
    personList.push_back(person2);

    // Hiển thị danh sách người
    for (int i = 0; i < personList.getSize(); i++) {
        Person person = personList[i];
        person.display();
        std::cout << std::endl;
    }

    return 0;
}
