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
        Node *current = START;
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
    current->next = newNode; // step 9d: current.next = newNode
    }

    void hapus()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        cout << "\nENter the roll number of the student whose record is to be deleted: ";
        int rollNo;
        cin >> rollNo;

                Node *current = START;
        // step 1: Traverse the list to find the mode
        while (current != NULL && current->noMhs != rollNo)
        current = current->next;

        if (current == NULL)
        {
        cout << "Record not found" << endl;
        return;
        }
        
        // step 2: if node is at the beginning
        if ( current == START)
        {
            START = current->next; // step 2a: START = START.next
            if (START != NULL)
                START->prev = NULL; //step 2b: START.prev = NULL
        }
        else
        {
            // step 3: Link previous node to next of current
            current->prev->next = current->prev;

            // step 4: if current is not the last node
            if (current->next != NULL)
                current-> next->prev = current->prev;

        }

        // step 5: Delete the node
        delete currrent;
        cout << "Recod with roll number" << rollNo << " deleted " << endl;
    }

    void traverse()
    {
        if (START == NULL)
        {
            cout << "\nList is empty" << endl;
            return;
        }

        // step 1: Mark first node as currentNode
        Node *currentNode = START;

        // step 2: Repeat untill currentNodde == NULL
        cout << "\nRecords is ascending order of roll number are:\n";
        int i= 0;
        while (currentNode != NULL)
        {
            
            cout << i + i << ". " << currentNode->noMhs << " " << endl;

            // step 3:  Move to next node
            currentNode = currentNode->next;
            i++;
        }

    void revTraverse();
        {
    
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;
            }

            // step 1: Move to last mode
            Node *currentNode = START;
            int i = 0;
            while ( currentNode-> next != NULL){
                currentNode = currentNode-> next;
                i++;
            }  

            cout << "\nRecord in descending oreder of roll number are: \n";
            while (currentNode != NULL)
            {
                cout << i + 1 << ". " << currentNode -> noMhs << " " << endl;
                currentNode = currentNode -> prev;
                i++;
            } 
        }

        void searchData();
        {
            if (START == NULL)
            {
                cout << "\nList is empty" << endl;
                return;
            }
            int rollNo;
            cout << "\nEnter the roll number to search: ";
            cin >> rollNo;

            Node *current = START;

            //step 1: Taverse to find matching roll number
            while (current != NULL && current->noMhs != rollNo)
                current = current->next;

            //step 2:vOutput result
            if (current == NULL)
            {
                cout << " Record no found\n";
            }
            else
            {
                cout << "Record no found\n";
                cout << "Roll Number: " << current->noMhs << endl;
            }
    }
};

int main()
{
    DoubleLinkedList list;
    char choice;

    do 
    {

        cout << "\nMenu:\n";
        cout << "1. Add Record\n";
        cout << "2. Delete Record\n";
        cout << "3. view Ascending\n";
        cout << "4. view Descending\n";
        cout << "5. Search Record\n";
        cout << "6. exit\n";
        cout << "Enter the Number: ";
        cin >> choice;
    } while ();

    switch (choice)
    {
        case '1':
            list.addNode();
            break;
        case '2':
            list.hapus();
            break;
        case '3':
            list.traverse();
            break;
        case '4':
            list.revTraverse();
            break;
        case '5':
            list.searchData();
            break;
        case '6':
            return 0;
        default:
            cout << "Invalid Option\n";
    }
    cout << "\n Press enter tp coutinue...";
    cin.ignore();
    cin.get();
    cout << endl;
    system("clear");
    };
};