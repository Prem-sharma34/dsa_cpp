#include<iostream>
#include<vector>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node* back;



    // contructors

    public:
    Node(int data1 , Node* next1 , Node* back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

Node* Arr2DLL(vector<int>&arr)
{
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1 ; i < arr.size() ; i++)
    {
        Node* temp = new Node(arr[i], nullptr , prev);
        prev->next = temp;
        prev = temp;
        
    }

    return head;
}





void print(Node* head)
{
    Node* tmp = head;
    while(tmp != nullptr)
    {
        cout<<tmp->data<<" ";
        tmp = tmp->next;  
    }
    cout<<"\n"; 
}


Node* deleteHead(Node* head)
{
    if(head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node* prev = head;

    head = head->next;

    head->back = nullptr;

    prev->next = nullptr;

    delete prev;

    return head;
}

Node* deleteTail(Node* head)
{
     if(head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }

    Node* tail = head;

    while(tail->next != nullptr)
    {
        tail = tail->next;
    }

    Node * newtail = tail->back;

    newtail->next = nullptr;

    tail->back = nullptr;

    delete tail;

    return head;
}

Node* kthNode(Node* head, int k)
{
    if(head == nullptr)
    {
        return nullptr;
    }
    int cnt = 0;

    Node* temp = head;

    while(temp != nullptr)
    {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }

    Node * prev = temp->back;
    Node * front = temp->next;

    if(prev == nullptr && front == nullptr)
    {   
        delete temp;
        return nullptr;
    }else if(prev == nullptr)
    {
        return deleteHead(head);
    }else if(front == nullptr)
    {
        return deleteTail(head);
    }

    prev->next = front;
    front->back = prev;

    temp->next = nullptr;
    temp->back = nullptr;

    delete temp;

    return head;
    
}

void deleteNode(Node* node)
{
    Node* prev = node->back;
    Node* front = node->next;


    if(front == nullptr)
    {
        prev->next = nullptr;

        front->back = nullptr;

        delete front;

        return;
        
    }

    prev->next = front;
    front->back = prev;
    node->back = nullptr;
    node->next = nullptr;
    delete node;


}



int main()
{
    vector<int> arr = {2 , 5, 8 , 7};

    Node* head = Arr2DLL(arr);
      
    print(head);    

    deleteNode(head->next->next);
    print(head);
    
}


