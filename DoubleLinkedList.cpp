#include <iostream>
#include <string>
using namespace std;

class Node
{
    public:
    int noMhs;
    Node *next;
    Node * prev;
};

class DoubleLinkedList
{
    private:
        Node *START;

    public:
        DoubleLinkedList()
        {
            START = NULL;
        }


void addNode()
    {
        int nim;
        string nm;
        cout << "\nEnter the roll number of the student";
        cin >> nim;
        Node *newNode = new Node();
        newNode -> noMhs = nim;
        if (START == NULL || nim <= START->noMhs){
            if (START != NULL && nim == START ->noMhs)
            {
                cout << "\nDuplicate number not allowed" << endl;
                return;
            }
            //step 4: newNode.next = START
            newNode-> next = START;

            //step 5: start. prev = newNode (if start exist)
            if (START != NULL)
                START->prev = newNode;

            //step 6: newNode.prev = NULL
            newNode->prev = NULL;

            // step 7: START = newNode
            START = newNode;
            return;
        }

        // Insert in bertween mode
        // step 8: location potition fot insertion
        Node *curren = START;
        while (current->next !=NULL && current->next->noMhs < nim)
        {
            current = current->next;
        }

        if (current-> next !=NULL && nim == current->next->noMhs)
        {
            cout << "\nDuplicate roll number not allowed" << endl;
            return;
        }
        //step 9: Insert between current and current->next
        newNode->next = current->next;//step 9a
        newNode->prev = current; //step 9b

        //Insert last mode
        if (current->next != NULL)
            current->next->prev = newNode; //step 9c
        
    }
};