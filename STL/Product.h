#pragma once

#include <iostream>
#include <string>
#include <vector>

using namespace std;
class Product {

private:
    string name;
    int units;

public:
    Product(string n, int u) {
        name = n; units = u;
    }

    void setName(string n) {
        name = n;
    }

    void setUnits(int u) {
        units = u;
    }

    string getName() const{
        return name;
    }

    int getUnits() const{
        return units;
    }
};