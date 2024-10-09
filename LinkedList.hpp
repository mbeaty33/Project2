#ifndef LINKEDLIST_H
#define LINKEDLIST_H

template <class T> //NODE CLASS
class Node {
public:
    T data;
    Node* next;

    Node(const T& data = T(), ListNode *n = NULL) : data(data), next(n) {}
};

template <class T>  //LIST CLASS
class List {
private:
    Node<T>* dummyHead; //dummy head node
public:
    List(); //constructor initializes dummy head
    List(const List& rhs); //copy constructor for the overloaded operator
    ~List(); //destructor 
    Node<T>* zeroth(); //get the dummyhead
    Node<T>* first(); //returns first node after dummy head
    const Node<T>* first() const; //first for const data
    bool isEmpty() const; //returns true if the list is empty
    void insert(const T& data, Node<T>* ptr); //inserts data into the linked list
    Node<T> find(const T& data); //loops throught the list to find data
    Node<T> findPrevious(const T& data); //finds the previous node to a given node
    void remove(const T& data); //removes desired node
    void print() const; //prints out the list
    void makeEmpty(); //makes the list empty
    List& operator=(const List& rhs); //overloaded operator



};

#endif