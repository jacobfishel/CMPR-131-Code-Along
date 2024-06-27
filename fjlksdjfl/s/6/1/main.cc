#include "SortedList.h"

int main() {

    SortedList list;

    string name = "Jacob Fishel";
    string name1 = "Bob Lee";

    cout << "Inserting.\n";

    if (!list.isFull())
        list.insertItem(name);

    if (!list.isFull())
        list.insertItem(name1);

    cout << "\n\nDisplaying the list:\n\n";
    list.displayList();

    if (!list.isEmpty()) {
        list.deleteItem(name);
    }
    list.displayList();

    return 0;
}




// #include "UnsortedList.h"


// void insertItem(UnsortedList& list, int id) {

//     if (!list.isFull()) {
//         list.insertItem(id);
//     } else {
//         cout << "The list is full.\n\n";
//     }
// };

// void deleteItem(UnsortedList& list, int id) {

//     if (!list.isEmpty()) {
//         list.deleteItem(id);
//     } else {
//         cout << "The list is empty.\n\n";
//     }
// };
// int main() {

//     UnsortedList list;

//     int number = 0;
//     int id = 0;
//     char answer = ' ';

//     cout << "Inserting ID numbers.\n";
    
//     cout << "Ho wmany ID numbers? ";
//     cin >> number;

//     if (number > 0) {

//         for (int i = 0; i < number; i++) {
//             cout << "Pleasr enter the ID: ";
//             cin >> id;
//             insertItem(list, id);
//         }
//     }

//     else {
//         cout << "The number must be greater than zero.\n\n";
//     }

//     cout << "\n Displaying the list:\n";
//     list.displayList();

//     cout << "Would you like to delete any item from the list? ";
//     cin >> answer;

//     while (toupper(answer) == 'Y') {
//         cout << "Please enter the ID to be deleted: ";
//         cin >> id;
//         deleteItem(list, id);

//         if (list.isEmpty()) {
//             break;
//         }

//         cout << "Anymore to delete? ";
//         cin >> answer;

//     }

//     cout << "\nDisplaying the list after deleting.\n";

//     list.displayList();

//     return 0;
// }
