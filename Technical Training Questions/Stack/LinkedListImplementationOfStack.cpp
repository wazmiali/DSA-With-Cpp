#include <iostream> 
#include <climits>  // For INT_MAX 
using namespace std; 

struct Node 
{ 
    int data; 
    Node *next; 

    Node(int d) 
    { 
        data = d; 
        next = NULL; 
    } 
}; 

struct mystack 
{ 
    Node *head; 
    int sz; 
    mystack() 
    { 
        head = NULL; 
        sz = 0; 
    } 

    void push(int x) 
    { 
        Node *temp = new Node(x); 
        temp->next = head; 
        head = temp; 
        sz++; 
    } 
    int pop() 
    { 
        if (head == NULL) 
         return INT_MAX; // Stack Underflow 
 
        int res = head->data; 
        Node *temp = head; 
        head = head->next; 
        delete temp; 
        sz--; 
        return res; 
    } 

    int peek() 
    { 
        if (head == NULL) 
            return INT_MAX; // Stack is empty 
        return head->data; 
    } 

    int size() 
    { 
        return sz; 
    } 
    bool isEmpty() 
    { 
        return (head == NULL); 
    } 
}; // End of Structure 

int main() 
{ 
    mystack s;  // Creating a stack object 
    // Pushing elements onto the stack 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << "Top element (peek): " << s.peek() << endl; // Should print 30 
    cout << "Stack size: " << s.size() << endl; // Should print 3 
    cout << "Popped element: " << s.pop() << endl; // Should print 30 
    cout << "New top element: " << s.peek() << endl; // Should print 20 
    cout << "Stack size after pop: " << s.size() << endl; // Should print 2 
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl; // Should print No 
    s.pop(); 
    s.pop(); 
 
    cout << "Is stack empty after popping all elements? " << (s.isEmpty() ? "Yes" : "No") << endl; // Should print Yes 
    return 0; 

} 