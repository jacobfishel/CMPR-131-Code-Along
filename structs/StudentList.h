#include "StudentList.h"

int main() {

private:
  Student *head;

public:

  StudentList();
  ~StudentList();

  void appendStudent(int id, string name);
  void insertStudent(int id, string name);
  void deleteStudent(int id, string name);
  void displayList() const;

}