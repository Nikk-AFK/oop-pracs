#include <iostream>
#include "Person.h"

PersonList shallowCopyPersonList(PersonList pl) {
    PersonList field1 = pl;
    PersonList field2;
    field2.people = field1.people;
    return field2;
}