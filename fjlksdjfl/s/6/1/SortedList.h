#pragma once
#include <iostream>
//#include <iomanip>

using namespace std;

const int SIZE = 100;

class SortedList {

private:
    int length;
    string name[SIZE];

public:

    SortedList();
    ~SortedList();

    void insertItem(string item);
    void deleteItem(string name);

    bool isFull() const;
    bool isEmpty() const;

    int binarySearch(string item);
    int linearSearch(string name);
    void displayList() const;
}