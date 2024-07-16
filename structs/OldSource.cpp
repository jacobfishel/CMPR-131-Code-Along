// #include <iostream>
// #include "Box.h"

// using namespace std;

// void insert(Box*& head);
// void display(Box*& head);
// //void newInsert(Box*& head);
// void deleteBox(Box*& head);
// //void displayRToLeft(Box*& head);
// //int getSize(Box*& head);
// int main() {

// Box* head = nullptr;
// int number = 0;
// char answer = ' ';

// cout << "How many boxes do you want: ";
// cin >> number;
// for (int i = 0; i < number; i++)
// {
// cout << "Id for Box #" << i + 1 << ": ";
// insert(head);
// }

// cout << "Here are the ID's from the Boxes:\n\n";
// display(head);

// cout << "Would like to delete a Box? (Y or N): ";
// cin >> answer;

// //answer = toupper(answer);
// while (answer == 'Y' || answer == 'y')
// {
// deleteBox(head);
// cout << "Delete another one? (Y or N): ";
// cin >> answer;
// }

// cout << "Here is the data after deleting the Box or Boxes,\n\n";
// display(head);
// /*cout << "Do you want to add a Box: (Y or N): ";
// char choice = ' ';
// cin >> choice;*/
// /*while (toupper(choice) == 'Y')
// {
// newInsert(head);
// cout << "Add any more BoXes: (Y or N): ";
// cin >> choice;
// }
// cout << "Here are the data after inserting a box or boxes.\n\n";
// display(head);
// cout << "Here are the data from right to left.\n\n";
// displayRToLeft(head);
// cout << "\n\nHere is the size of the List.\n\n";
// cout << getSize(head);*/
// cout << endl << endl;
// return 0;
// }

// void insert(Box*& head)
// {
// Box* ptr = new Box();
// cout << "Please enter the id: ";
// cin >> ptr->id;
// ptr->next = head;
// head = ptr;
// }

// void display(Box*& head)
// {
// Box* print = head;
// while (print != nullptr)
// {
// cout << print->id << endl;
// print = print->next;
// }
// cout << endl << endl;
// }

// void deleteBox(Box*& head) {
//     int idNum = 0;
//     std::cout << "Which Box do you want to delete (Enter the Id number): ";
//     std::cin >> idNum;

//     if (head == nullptr) {
//         std::cout << "Sorry, the list is empty.\n\n";
//         return;
//     }

//     Box* lead = head;
//     Box* follow = nullptr;

//     if (lead->id == idNum) {
//         head = head->next;
//         delete lead;
//         return;
//     }

//     while (lead != nullptr && lead->id != idNum) {
//         follow = lead;
//         lead = lead->next;
//     }

//     if (lead == nullptr) {
//         std::cout << "Box with id " << idNum << " not found.\n\n";
//         return;
//     }

//     follow->next = lead->next;
//     delete lead;
// }


// // while (lead->id != idNum && lead->next != nullptr)
// // {
// // follow = lead;
// // lead = lead->next;
// // if (lead->next == nullptr && lead->id == idNum)
// // {
// // follow->next = lead->next;
// // delete lead;
// // return;
// // }
// // }
// // follow->next = lead->next;
// // delete lead;
// // }



// void newInsert(Box*& head)
// {
// Box *ptr = new Box();

// char choice = ' ';

// cout << "Would you like a box at the front of the list? (Y or N) ";
// cin >> choice;

// if (toupper(choice) == 'Y') {
//     cout << "Please enter the id for the new BOX: ";
//     cin >> ptr->id;

//     ptr-> next = head;
//     head = ptr;
//     return;
// }
// cout << "Would you like a box at the end of the list? (Y or N) ";
// cin >> choice;

// if (toupper(choice) == 'Y') {
//     cout << "Please enter the id for the new BOX: ";
//     cin >> ptr->id;

//     ptr->next = nullptr;

//     Box *temp = head;

//     while(temp->next != nullptr) {
//         temp = temp->next;
//     }
//     temp->next = ptr;
//     return;
// }

// int num = 0;

// cout << "After which id do you want to insert a BOX: ";
// cin >> num;

// Box *lead = head;

// while (lead->id != num) {
//     lead = lead->next;
// }

// ptr->next = lead->next;
// lead->next = ptr;


// }


// void displayRToLeft(Box *&head) {
//     Box* ptr = head;

//     if (ptr == nullptr)
//     return;             //base case

// displayRToLeft(ptr->next);
// cout << ptr->id << "\t"
// }

// int getSize(Box *&head) {
//     // int count = 0;

//     Box* temp = head;

//     // while (temp != nullptr) {
//     //     temp = temp->next;
//     //     count++;
//     // }

//     // return count;

//     if (temp == nullptr)
//         return 0;

//     return 1 + getSize(temp->next);
// }







// /* Output
// How many boxes do you want: 3
// Id for Box #1: Please enter the id: 1
// Id for Box #2: Please enter the id: 2
// Id for Box #3: Please enter the id: 3
// Here are the ID's from the Boxes:

// 3
// 2
// 1


// Would like to delete a Box? (Y or N): y
// Which Box do you want to delete (Enter the Id number): 2
// Delete another one? (Y or N): n
// Here is the data after deleting the Box or Boxes,

// 3
// 1*/