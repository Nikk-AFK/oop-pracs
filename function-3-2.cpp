#include <iostream>

int *readNumbers() {
    int * arr = new int[10];
    for (int i = 0; i < 10; i++) {
        std::cin >> arr[i];
    }
    return arr;
}

bool equalsArray(int *numbers1,int *numbers2,int length) {
    if (length < 1) {
        return false;
    }
    for (int i = 0; i < length; i++) {
        if (numbers1[i] != numbers2[i]) {
            return false;
        }
    }
    return true;

}

int * reverseArray(int *numbers1,int length) {
    if (length < 1) {
        return 0;
    }
    int * numbers2 = new int[length];
    for (int i = 0; i < length; i++) {
        numbers2[i] = numbers1[length-1-i];
        std::cout << numbers2[i] << std::endl;
    }
    return numbers2;
}

