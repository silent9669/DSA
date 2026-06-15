#include "main.h"

class Node {

public:
  int data;

  Node *next;

  Node(int val) : data(val), next(nullptr) {}
};

class Linked_List {

private:
  Node *head;

public:
  Linked_List() : head(nullptr) {}

  ~Linked_List() {

    while (head != nullptr) {

      Node *temp = head;

      head = head->next;

      delete temp;
    }
  }

  // Insert at head

  void InsertAtHead(int val) {

    Node *newNode = new Node(val);

    newNode->next = head;

    head = newNode;
  }

  // Insert at tail

  void InsertAtTail(int val) {

    Node *newNode = new Node(val);

    if (head == nullptr) {

      head = newNode;

      return;
    }

    Node *current = head;

    while (current->next != nullptr) {

      current = current->next;
    }

    current->next = newNode;
  }

  // Delete at head

  void deleteAtHead() {

    if (head == nullptr)
      return;

    Node *temp = head;

    head = head->next;

    delete temp;
  }

  // Display list

  void display() const {

    Node *current = head;

    while (current != nullptr) {

      cout << current->data << " ";

      current = current->next;
    }

    cout << endl;
  }

  // Search

  bool search(int val) const {

    Node *current = head;

    while (current != nullptr) {

      if (current->data == val)
        return true;

      current = current->next;
    }

    return false;
  }
};

int main() {

  Linked_List list;

  list.InsertAtHead(3);

  list.InsertAtTail(2);

  list.display();

  cout << list.search(3) << endl;

  list.deleteAtHead();

  list.display();

  return 0;
}
