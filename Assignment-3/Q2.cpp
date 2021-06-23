#include<iostream> 
using namespace std; 
struct Node 
{ 
    int data; 
    struct Node* next; 
    Node (int data) 
    { 
        this->data = data; 
        next = NULL; 
    } 
}; 
struct LinkedList 
{ 
    Node *head; 
    LinkedList() 
    { 
        head = NULL; 
    } 
    void reverse() 
    { 
        Node *current = head; 
        Node *prev = NULL, *next = NULL; 
        while (current != NULL) 
        {
            next = current->next; 
            current->next = prev;  
            prev = current; 
            current = next; 
        } 
        head = prev;  
    } 
    void print() 
    { 
        struct Node *temp = head; 
        while (temp != NULL) 
        { 
            cout << temp->data << " "; 
            temp = temp->next; 
        } 
    } 
    void push(int data) 
    { 
        Node *temp = new Node(data); 
        temp->next = head; 
        head = temp; 
    } 
}; 
int main() 
{ 
    LinkedList l; 
    l.push(1); 
    l.push(2); 
    l.push(3); 
    l.push(4); 
    cout << "Given linked list    :"; 
    l.print(); 
    cout<<endl;
    l.reverse(); 
    cout << "Reversed Linked list :"; 
    l.print(); 
    return 0; 
} 
