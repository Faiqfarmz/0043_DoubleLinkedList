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
            //step: newNode.next = START
            newNode-> next = START;

            //step 5: start. prev = newNode (if start exist)
            if (START != NULL)
                START->prev = newNode;
        }
    }
};