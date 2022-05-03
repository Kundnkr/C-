#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int key;
    int data;
    node *next;
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int k, int d)
    {
        key = k;
        data = d;
    }
};
class singlyLinkedlist
{
public:
    node *head;
    singlyLinkedlist()
    {
        head = NULL;
    }
    singlyLinkedlist(node *n)
    {
        head = n;
    }
    // 0. Add node;
    void CreateNode(int n)
    {
        int key = 0;
        node *temp = new node;
        temp->data = n;
        temp->next = NULL;
        temp->key = key;
        key++;
    }
    // 1. Check if node exist or not;
    node *nodeExist(int k)
    {
        node *temp;
        node *ptr = head;
        while (ptr != NULL)
        {
            if (ptr->key == k)
            {
                temp = ptr;
            }
            ptr = ptr->next;
        }
    }
    // 2. Append to node list;
    void AppendNode(node *n, int d)
    {
        if (nodeExist(n->key) != NULL)
        {
            cout << "Node already exist, try different one" << endl;
        }
        else
        {
            if (head == NULL)
            {
                head = n;
                head->data = d;
            }
            else
            {
                node *ptr = head;
                while (ptr->next != NULL)
                {
                    ptr = ptr->next;
                }
                ptr->next = n;
                ptr->data = d;
            }
        }
    }
    // 3. Prependnode(Add node in start);
    void prependNode(node *n, int d)
    {
        if (head == NULL)
        {
            head = n;
            n->data = d;
            cout << "Node assign at first position" << endl;
        }
        else
        {
            n->next = head;
            n->data = d;
            head = n;
            cout << "Node added at first position" << endl;
        }
    }
    // 4. insert a node after a perticlar key
    void insertNodeafter(node *n, int k)
    {
        if (nodeExist(n->key) != NULL)
        {
            cout << "Already exist";
        }
        else
        {
            node *ptr = head;
            while (ptr->key != k)
            {
                ptr = ptr->next;
            }
            n->next = ptr->next;
            ptr->next = n;
            cout << "Node inserted after " << k << " element" << endl;
        }
    }
    // 5. To delete a node with key value==k;
    void deleteNode(int k)
    {
        node *temp = NULL;
        node *prevptr = head;
        node *currentptr = head->next;
        while (currentptr != NULL)
        {
            if (currentptr->key == k)
            {
                temp = currentptr;
                currentptr = NULL;
            }
            else
            {
                prevptr = prevptr->next;
                currentptr = currentptr->next;
            }
        }
        if (temp != NULL)
        {
            prevptr->next = temp->next;
            cout << "Node with key value " << k << " deleted" << endl;
        }
        else
        {
            cout << "Node does't exist with this keyvalue" << endl;
        }
    }
    // 6.Update node by key
    void updateNodeByKey(int k, int d)
    {
        node *temp = nodeExist(k);
        if (temp != NULL)
        {
            while (head->key != k)
            {
                head = head->next;
            }
            head->data = d;
            cout << "data successfully updated with the key value :" << k << endl;
        }
        else
        {
            cout << "Node does't exist with the given key value" << endl;
        }
    }
    // 7. printing the entire linked list
    int display()
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << "(" << temp->key << "," << temp->data << ")" << endl;
            temp = temp->next;
        }
    }
};

int main()
{
    int data1, key1;
    singlyLinkedlist s;
    node *n1 = new node();
    node *n2 = new node();
    node *n3 = new node();
    int n = 10;
    int count = 0;
    // for(int i=1;i<=n;i++,count++){
    // cin>>key1;
    // // cin>>data1;
    // n1->key=key1;
    // // n1->data=data1;
    // s.AppendNode(n1,4);
    // s.prependNode(n2,5);
    // s.AppendNode(n3,105);
    // }
    node *p;
    for (int i = 0; i < 5; i++)
    {
        p->data = i;
        p->next = head;
        p = head;
    }
    s.display();
    return 0;
}