#include <iostream>
#include "Person.h"

PersonList createPersonList(int n) {
    Person * arr = new Person[n];
    PersonList list = {arr, n};
    for (int i = 0; i < n; i++) {
        arr[i] = {"Jane Doe", 1};
    }
    return list;
}