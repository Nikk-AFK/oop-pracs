#include <iostream>
#include "Person.h"

extern Person* createPersonArray(int n);

int main() {
    Person * arr = createPersonArray(5);
    std::cout << arr[3].name << " " << arr[3].age << std::endl;
    delete[] arr;
}