#include <iostream>
#include <string>
#include <vector>

#include "Product.h"

struct Box {
    string name;
    float  height;
}

using namespace std;

void insertBox(vector<Box>& box);
void deleteBox(vector<Box>& box);
void displayBox(vector<Box>& box);
void eraseAllBox(vector<Box>& box);

int main() {

    char answer{};
    vector<Box> boxes;
    char choice(' ');

    do {
        system("CLS");

        cout << "a.) Add a Box.\n"
             << "b.) Delete a Box.\n"
             << "c.) Display Boxes.\n"
             << "d.) quit.\n\n";

        cin >> choice;
        switch (toupper(choice)) {
            case 'A': insertBox(boxes);
                break;
            
            case 'B': deleteBox(boxes);
                break;
            
            case 'C': displayBox(boxes);
                break;

            case 'D': eraseAllBox(boxes);
                return 0;

                default: cout << "\n\nInvalid entry.\n\n"

        }

        cout << "Enter another choice: ";
        cin >> answer;
    } while (toupper(answer) == 'Y');


    return 0;
}


void insertBox(vector<Box>& box) {
    char choice(' ');
    Box box;

    cout << "Enter the name for the Box: ";
    getline(cin, box.name);

    cout << "Enter the id for the Box: ";
    cin >> box.id;

    if (boxes.size() == 0)
        boxes.push_back(box);
    else {
        cout << "\nEnter \'F\' to add Box to the front of the list.\n"
             << "or Enter \'B\' to add a Box to the back of the list:   ";
        
        cin >> choice;

        if (toupper(choice) == 'F') {
            boxes.insert(boxes.begin(), box);

        } else if (toupper(choice) == 'B') {
            boxes.push_back(box);

        } else {
            cout << "Invalid input.\n\n";
            return;
        }
    }

    cout << "Box or Boxes has been added to the list\n"
};


void deleteBox(vector<Box>& box) {

    displayBox(boxes);
    string name{};

    cout << "enter the name of the box to be deleted: ";
    getline(cin, name);

    for (int i = 0; i < boxes.size(); i++) {

        if (boxes[i].name == name) {
            swap(boxes[i], boxes.back());
            boxes.pop_back();

            cout << "\nBox with name of " << name
                 << " was deleted.\n\n";

            return;
        }
    }

    cout << "\nBox with the name " << name
         << " was not found in the list.\n\n";
};


void displayBox(vector<Box>& box);
void eraseAllBox(vector<Box>& box);

