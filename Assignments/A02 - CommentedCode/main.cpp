///////////////////////////////////////////////////////////////////////////////
//                   
// Author:           Jackson Porter
// Email:            jackson.porter49@gmail.com
// Label:            Assignment 02
// Title:            Commented Code
// Course:           CMPS 2143 - OOP
// Semester:         Spring 2020
//
// Description:
//       The purpose of this code is to get more acquainted with Github and proper commenting
//          techniques for use in CMPS 2143.
//
// Usage:
//       how to use the program if necessary
//
// Files:            main.cpp (github file)
/////////////////////////////////////////////////////////////////////////////////
#include <iostream>

using namespace std;

int A[100];

struct Node
{
    int x;
    Node *next;
    Node()
    {
        x = -1;
        next = NULL;
    }
    Node(int n)
    {
        x = n;
        next = NULL;
    }
};
/**
 * Class Name: List
 * 
 * Description:
 *      This class creates a list with multiple functions for manipulating different parts of 
 *      the list such as Pop, Push, Print, and Insert.
 * 
 * Public Methods:
 *      - void Push
 *      - void Insert
 *      - void PrintTail
 *      - void Pop
 *      - List operator+
 * 
 * Usage: 
 * 
 *      
 */
class List
{
  private:
    Node *Head;
    Node *Tail;
    int Size;

  public:
    List()
    {
        Head = Tail = NULL;
        Size = 0;
    }
     /**
     * Public : Push
     * 
     * Description:
     *      Allocates new memory for a new node in a list
     * 
     * Params:
     *      - int val
     * 
     * Returns:
     *      - No return value
     */
    void Push(int val)
    {
        // allocate new memory and init node
        Node *Temp = new Node(val);

        if (!Head && !Tail)
        {
            Head = Tail = Temp;
        }
        else
        {
            Tail->next = Temp;
            Tail = Temp;
        }
        Size++;
    }
     /**
     * Public : Insert
     * 
     * Description:
     *      Inserts new node on a list at the front
     * 
     * Params:
     *      - int val
     * 
     * Returns:
     *      - No return type
     */
    void Insert(int val)
    {
        // allocate new memory and init node
        Node *Temp = new Node(val);

        // figure out where it goes in the list

        Temp->next = Head;
        Head = Temp;
        if (!Tail)
        {
            Tail = Head;
        }
        Size++;
    }
     /**
     * Public: PrintTail
     * 
     * Description:
     *      Prints the value of the tail node in the list
     * 
     * Params:
     *      - No Parameters
     * 
     * Returns:
     *      - No return type
     */
    void PrintTail()
    {
        cout << Tail->x << endl;
    }
     /**
     * Public: Print
     * 
     * Description:
     *      Prints the list in its entirety
     * 
     * Params:
     *      - No Parameters
     * 
     * Returns:
     *      - string list
     */
    string Print()
    {
        Node *Temp = Head;
        string list;

        while (Temp != NULL)
        {
            list += to_string(Temp->x) + "->";
            Temp = Temp->next;
        }

        return list;
    }
     /**
     * Public: Pop
     * 
     * Description:
     *      Reduces size of the list
     * 
     * Params:
     *      - No parameters
     * 
     * Returns:
     *      - Returns Integer 0
     */
    // not implemented 
    int Pop()
    {
        Size--;
        return 0; //
    }
     /**
     * Public: operator+
     * 
     * Description:
     *      Utilizes other functions created in the class to create new lists
     * 
     * Params:
     *      - const List &Rhs
     * 
     * Returns:
     *      - List NewList
     */
    List operator+(const List &Rhs)
    {
        // Create a new list that will contain both when done
        List NewList;

        // Get a reference to beginning of local list
        Node *Temp = Head;

        // Loop through local list and Push values onto new list
        while (Temp != NULL)
        {
            NewList.Push(Temp->x);
            Temp = Temp->next;
        }

        // Get a reference to head of Rhs
        Temp = Rhs.Head;

        // Same as above, loop and push
        while (Temp != NULL)
        {
            NewList.Push(Temp->x);
            Temp = Temp->next;
        }

        // Return new concatenated version of lists
        return NewList;
    }
     /**
     * Public: operator[]
     * 
     * Description:
     *      This function returns an int value as if the list were an array
     * 
     * Params:
     *      - int index
     * 
     * Returns:
     *      - Node Temp->x
     */
    // Implementation of [] operator.  This function returns an
    // int value as if the list were an array.
    int operator[](int index)
    {
        Node *Temp = Head;

        if (index >= Size)
        {
            cout << "Index out of bounds, exiting";
            exit(0);
        }
        else
        {

            for (int i = 0; i < index; i++)
            {
                Temp = Temp->next;
            }
            return Temp->x;
        }
    }
    /**
     * Public: ostream &operator<<
     * 
     * Description:
     *     This function prints a list to a file.
     * 
     * Params:
     *      - ostream &os
     *      - List L
     * 
     * Returns:
     *      - ostream &os
     */
    friend ostream &operator<<(ostream &os, List L)
    {
        os << L.Print();
        return os;
    }
};

int main(int argc, char **argv)
{
    List L1;    //New list 1
    List L2;    //New list 2

    for (int i = 0; i < 25; i++)
    {
        L1.Push(i);     //Pushes new values into the list L1
    }

    for (int i = 50; i < 100; i++)
    {
        L2.Push(i);     //Pushes new values into the list L2
    }

    //cout << L1 << endl;
    L1.PrintTail();
    L2.PrintTail();

    List L3 = L1 + L2;
    cout << L3 << endl;

    cout << L3[5] << endl;
    return 0;
}
