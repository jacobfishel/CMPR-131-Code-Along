#include "StudentList.h"

StudentList::StudentList() {
    head = nullptr;
};

StudentList::~StudentList() {
    Student *temp = head;
    Student *nextNode;

    while(temp != nullptr) {
        nextNode = temp->next;
        delete temp;

        temp = nextNode;
    }
};

  void StudentList::appendStudent(int id, string name) {
    Student *temp = new Student();

    Student *move;

    temp->id = idNum;
    temp->name = name;
    temp->next = nullptr;

    if (!head) {
        head = temp;
    } else {
        move = head;

        while (move->next) {
            move = move->next;
        }

        move->next = temp;
    }
  };


  void StudentList::insertStudent(int idNum, string name) {

    Student *temp = new Student();

    temp->id = idNum;
    temp->name = name;

    if (!head) {
        head = temp;
        temp->next = nullptr;
    } else {
        Student *lead = head;

        Student *follow = nullptr;

        while (lead != nullptr && lead->id != idNum) {
            follow = lead;
            lead = lead->next;
        }
    }

    if (follow == nullptr) {
        head = lead;
        temp->next = lead;
    } else {
        follow->next = temp;
        temp->next = lead;
    }
  };


  void deleteStudent(int id, string name) {

    int idNum = 0;
    std::cout << "Which Box do you want to delete (Enter the Id number): ";
    std::cin >> idNum;

    if (head == nullptr) {
        std::cout << "Sorry, the list is empty.\n\n";
        return;
    }

    Box* lead = head;
    Box* follow = nullptr;

    if (lead->id == idNum) {
        head = head->next;
        delete lead;
        return;
    }

    while (lead != nullptr && lead->id != idNum) {
        follow = lead;
        lead = lead->next;
    }

    if (lead == nullptr) {
        std::cout << "Box with id " << idNum << " not found.\n\n";
        return;
    }

    follow->next = lead->next;
    delete lead;
}


// while (lead->id != idNum && lead->next != nullptr)
// {
// follow = lead;
// lead = lead->next;
// if (lead->next == nullptr && lead->id == idNum)
// {
// follow->next = lead->next;
// delete lead;
// return;
// }
// }
// follow->next = lead->next;
// delete lead;
// }


  };

  void displayList() const {
    Student *temp = head;

    while(temp) {

        cout << "Id: " << temp->id << "\t" << "name: " << temp->name << endl;

        temp = temp->next;
}
  };