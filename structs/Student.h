#pragma once
#include <iostream>
#include <string>

using namespace std;

struct Student {

    int idNum;
    string name;
    Student* next;
};