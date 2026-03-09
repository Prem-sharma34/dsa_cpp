#include<iostream>
#include<vector>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;


    // contructors

    public:
    Node(int data1 , Node* next1)
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

Node* convert2Arr(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* mover = head;

    for(int i = 1 ; i < arr.size() ; i++)
    {
        Node* temp = new Node(arr[i]);
        mover->next = temp; // point to temp 
        mover = temp; // move to temp
    }

    return head;
}




Node* deleteHead(Node* head)
{
    if(head==nullptr) return head;
    
    Node* tmp = head;

    head = head->next;

    delete tmp;

    return head;
}

Node* removeTail(Node* head)
{
    if(head == nullptr || head->next == nullptr) return nullptr;
    Node *temp = head;
    while(temp->next->next != nullptr)
    {
        temp = temp->next;
    }

    delete temp->next;

    temp->next = nullptr;

    return head;
}

Node* removeK(Node* head, int k)
{
    if(head == nullptr) return nullptr;

    if(k == 1)
    {
        Node* temp = head;

        head = head->next;

        delete temp;

        return head;

    }

    int cnt = 0;

    Node* temp = head;
    Node* prev = nullptr;

    while(temp != nullptr)
    {
        cnt++;
        if(cnt == k)
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



int main()
{
    vector<int> arr = {2 , 5, 8 , 7};

    Node* head = convert2Arr(arr);
    Node* tmp = head;
    while(tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;  
    }
    cout<<"\n";   
    
    // Node*  temp = deleteHead(head);
    Node* temp = removeK(head , 2);
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;  
    }
    cout<<"\n"; 

    
}


