#include "SortedList.h"

SortedList::SortedList() { length = 0 };
SortedList~SortedList() {};


void SortedList::insertItem() {

    int location = 0;
    location = binarySearch(item);

    for (int i = length; i > location; i--) {
        names[i] = name[i - 1]
    }

    name[locatin] = item;
    length++
};


void SortedList::deleteItem(string name) {

    int location = 0;

    location = linearSearch(name)

    if (location < length) {

        for (int i = location + 1; i < length; i++) {
            name[i - 1] = name[i];
        }
        length--;
    } else {
        cout << "The name is not in the list.\n\n";
    }
};

bool SortedList::isFull() const;
bool SortedList::isEmpty() const;

int SortedList::binarySearch(string item) {

    int first = 0;
    int midpoint = 0;
    int last = length - 1;

    while (true) {

        if (first > last) {

            return first;
        }
        midpoint = (first + last) / 2;

        if (item == name[midpoint]) {
            return midpoint;
        }

        else if (item > name[midpoint]) {
            first = (midpoint + 1)
        }
        
        else if (item < name[midpoint]) {
            last = (midpoint - 1);
        }
    }
};


int SortedList::linearSearch(string names) {

    int location = 0;

    while ((names > name[location]) && location < length) {
        location++
    }
};


void SortedList::displayList() const {

    for (int i = 0; i < length; i++) {
        cout << name[i] << endl;
    }
};