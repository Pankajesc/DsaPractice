/*
 * C++ Program to Implement Singly Linked List

 */
#include <iostream>

using namespace std;

class SinglyLinkedListNode
{
public:
    int data;
    SinglyLinkedListNode *next;

    SinglyLinkedListNode(int node_data)
    {
        this->data = node_data;
        this->next = nullptr;
    }
};

class SinglyLinkedList
{
public:
    SinglyLinkedListNode *head;
    SinglyLinkedListNode *tail;

    SinglyLinkedList()
    {
        this->head = nullptr;
        this->tail = nullptr;
    }
    void insert_begin()
    {
        int node_data;
        cout << "Enter Data to insert : ";
        cin >> node_data;
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (this->head)
        {
            node->next = this->head;
            this->head = node;
        }
        else
        {
            this->head = node;
        }

        cout << "Element Inserted at beginning." << endl;
    }
    void insert_last()
    {
        int node_data;
        cout << "Enter Data to insert : ";
        cin >> node_data;
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);

        if (!this->head)
        {
            this->head = node;
        }
        else
        {
            this->tail->next = node;
        }

        this->tail = node;
        cout << "Element Inserted at last" << endl;
    }
    void insert_pos()
    {
        int node_pos;
        cout << "Enter Position to insert : ";
        cin >> node_pos;
        int pointer = 0;
        SinglyLinkedListNode *point = this->head;
        while (point != NULL)
        {
            if (node_pos < 0)
            {
                cout << "Positon out of range." << endl;
                break;
            }
            else if (node_pos == 0)
            {
                insert_begin();
                cout << "Inserted at position " << node_pos << endl;
                break;
            }
            else if (node_pos - 1 == pointer || node_pos == 0)
            {
                int node_data;
                cout << "Enter Data to insert : ";
                cin >> node_data;
                SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);
                node->next = point->next;
                point->next = node;
                cout << "Inserted at position " << node_pos << endl;
                break;
            }
            else
            {
                point = point->next;
                pointer++;
            }
        }
    }
    void insert_position(int node_pos)
    {
        int pointer = 0;
        SinglyLinkedListNode *point = this->head;
        while (point != NULL)
        {
            if (node_pos < 0)
            {
                cout << "Positon out of range." << endl;
                break;
            }
            else if (node_pos == 0)
            {
                insert_begin();
                cout << "Inserted at position " << node_pos << endl;
                break;
            }
            else if (node_pos - 1 == pointer || node_pos == 0)
            {
                int node_data;
                cout << "Enter Data to insert : ";
                cin >> node_data;
                SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);
                node->next = point->next;
                point->next = node;
                cout << "Inserted at position " << node_pos << endl;
                break;
            }
            else
            {
                point = point->next;
                pointer++;
            }
        }
    }

    void insert_after()
    {
        int node_data;
        cout << "Enter Data to insert After : ";
        cin >> node_data;
        int position = searchMe(node_data);
        insert_position(position + 1);
    }
    void insert_before()
    {
        int node_data;
        cout << "Enter Data to insert Before : ";
        cin >> node_data;
        int position = searchMe(node_data);
        insert_position(position);
    }
    void insert_middle()
    {
        int node_data;
        cout << "Enter Data to insert : ";
        cin >> node_data;
        SinglyLinkedListNode *node = new SinglyLinkedListNode(node_data);
        SinglyLinkedListNode *slow_ptr = this->head;
        SinglyLinkedListNode *fast_ptr = this->head;

        if (this->head != NULL)
        {
            while (fast_ptr->next != NULL && fast_ptr->next->next != NULL)
            {
                fast_ptr = fast_ptr->next->next;
                slow_ptr = slow_ptr->next;
            }
            node->next = slow_ptr->next;
            slow_ptr->next = node;
        }
    }

    void delete_first()
    {
        SinglyLinkedListNode *temp = this->head;
        this->head = this->head->next;
        free(temp);
        cout << "Deleted the first node " << endl;
    }
    int countLL(SinglyLinkedListNode *head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    void delete_last()
    {
        SinglyLinkedListNode *traveller = this->head;
        if (traveller == NULL)
            return;

        if (traveller->next == NULL)
        {
            free(traveller);
            return;
        }
        while (traveller->next->next != NULL)
        {
            traveller = traveller->next;
        }
        free(traveller->next);
        traveller->next = NULL;
    }
    void delete_pos()
    {
        int node_pos;
        cout << "Enter Position to delete : ";
        cin >> node_pos;
        int pointer = 0;
        SinglyLinkedListNode *point = this->head;
        while (point != NULL)
        {
            if (node_pos < 0)
            {
                cout << "Positon out of range." << endl;
                break;
            }
            else if (node_pos == 0)
            {
                delete_first();
                cout << "deleted at position " << node_pos << endl;
                break;
            }
            else if (node_pos - 1 == pointer || node_pos == 0)
            {
                SinglyLinkedListNode *temp;
                temp = point->next;
                point->next = point->next->next;
                free(temp);
                cout << "Deleted at position " << node_pos << endl;
                break;
            }
            else
            {
                point = point->next;
                pointer++;
            }
        }
    }

    void update()
    {
        SinglyLinkedListNode *temp = this->head;
        SinglyLinkedListNode *nhead;
        int node_data;
        cout << "Enter value to Update : ";
        cin >> node_data;
        int node_val;
        cout << "Enter value to Update with : ";
        cin >> node_val;

        while (temp->next != NULL)
        {
            if (temp->next->data == node_data)
            {
                temp->next->data = node_val;
            }
            else
            {
                temp = temp->next;
            }
        }
        if (head->data == node_data)
        {
            head->data = node_val;
        }

        cout << "The value is Updated " << endl;
    }

    int searchMe(int node_data)
    {
        SinglyLinkedListNode *traveller = this->head;
        int pos = 0;
        while (traveller != NULL)
        {
            if (traveller->data == node_data)
            {
                return pos;
            }
            else
            {
                traveller = traveller->next;
                pos++;
            }
        }
        return -1;
    }
    void search()
    {
        int node_data, pos = 1;
        cout << "Enter Data to Search : ";
        cin >> node_data;
        SinglyLinkedListNode *traveller = this->head;
        while (traveller != NULL)
        {
            if (traveller->data == node_data)
            {
                cout << "Element Present at position " << pos << endl;
                return;
            }
            else
            {
                traveller = traveller->next;
                pos++;
            }
        }
        cout << "Element Not Present " << endl;
    }
    void display()
    {
        SinglyLinkedListNode *node = this->head;
        cout << "[ ";
        if (node == NULL)
        {
            cout << "The List is Empty ";
        }
        while (node != NULL)
        {
            cout << node->data << "->";
            node = node->next;
        }
        cout << "(NULL)";
        cout << " ]";
    }
    void reverse();
    void sort();
};

int main()
{
    int choice, nodes, element, position, i;
    SinglyLinkedList *sl = new SinglyLinkedList();

    cout << endl
         << "--------------pankaj-kumar-yadav---------------" << endl;
    cout << endl
         << "Operations on singly linked list" << endl;
    cout << endl
         << "----------------Assignment-5----------------" << endl;
    cout << "1.Insert Node at beginning" << endl;                 //done
    cout << "2.Insert node at last" << endl;                      //done
    cout << "3.Insert node at position" << endl;                  //done
    cout << "4.Insert node after a node" << endl;                 //done
    cout << "5.Insert node before a node" << endl;                //done
    cout << "6.Insert node in middle of the linked list" << endl; //done
    cout << "7.Delete first  node" << endl;                       //done
    cout << "8.Delete last node" << endl;                         //done
    cout << "9.Delete a Particular Node" << endl;                 //done
    cout << "10.Update Node Value" << endl;                       //done
    cout << "11.Search Element" << endl;                          //done
    cout << "12.Display Linked List" << endl;                     //done
    cout << "13.Exit " << endl;                                   //done
    cout << endl
         << endl;

    while (1)
    {
        cout << "Enter your choice : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Inserting Node at Beginning: " << endl;
            sl->insert_begin();
            cout << endl;
            break;
        case 2:
            cout << "Inserting Node at Last: " << endl;
            sl->insert_last();
            cout << endl;
            break;
        case 3:
            cout << "Inserting Node at a given position:" << endl;
            sl->insert_pos();
            cout << endl;
            break;
        case 4:
            cout << "Insert node after a node" << endl;
            sl->insert_after();
            cout << endl;
            break;
        case 5:
            cout << "Insert node before a node" << endl;
            sl->insert_before();
            cout << endl;
            break;
        case 6:
            cout << "Insert node in middle of the linked list" << endl;
            sl->insert_middle();
            cout << endl;
            break;
        case 7:
            cout << "Delete the first element" << endl;
            sl->delete_first();
            break;
        case 8:
            cout << "Delete the last element" << endl;
            sl->delete_last();
            break;
        case 9:
            cout << "Delete a particular node: " << endl;
            sl->delete_pos();
            break;
        case 10:
            cout << "Update Node Value:" << endl;
            sl->update();
            cout << endl;
            break;
        case 11:
            cout << "Search element in Link List: " << endl;
            sl->search();
            cout << endl;
            break;
        case 12:
            cout << "Display elements of link list" << endl;
            sl->display();
            cout << endl;
            break;
        case 13:
            cout << "Exiting..." << endl;
            cout << "Thank You For Using!" << endl;
            exit(1);
            break;
        default:
            cout << "Wrong choice" << endl;
        }
    }
    return 0;
}
