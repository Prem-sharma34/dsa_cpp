#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // contructors

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

Node *convert2Arr(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;

    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->next = temp; // point to temp
        mover = temp;       // move to temp
    }

    return head;
}

Node *deleteEl(Node *head, int el)
{

    if (head == nullptr)
        return nullptr;

    if (head->data == el)
    {
        Node *temp = head;

        head = head->next;

        delete temp;

        return head;
    }

    Node *temp = head;
    Node *prev = nullptr;

    while (temp != nullptr)
    {
        if (temp->data == el)
        {
            prev->next = prev->next->next;
            free(temp);

            break;
        }

        prev = temp;
        temp = temp->next;
    }

    return head;
}

void deleteNode(Node* node)
{
        Node* temp = node;

        Node* prev= nullptr;

        while(temp->next != nullptr)
        {
            temp->data = temp->next->data;
            prev = temp;
            temp = temp->next;
        }

        prev->next = nullptr;
        delete temp;
}

int main()
{
    vector<int> arr = {2, 5, 8, 7};

    Node *head = convert2Arr(arr);
    Node *tmp = head;
    while (tmp != nullptr)
    {
        cout << tmp->data << " ";
        tmp = tmp->next;
    }
    cout << "\n";
    Node * test = head->next->next;
    deleteNode(test);
    Node* temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
