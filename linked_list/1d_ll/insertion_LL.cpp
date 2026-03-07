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

Node* insertHead(Node* head , int val)
{
    Node* temp = new Node(val , head);
     
    return temp;

}

Node* insertAtEnd(Node*head , int val)
{
    if(head == nullptr) return nullptr;

    Node* temp = head;

    while(temp->next != nullptr)
    {
        temp = temp->next;
    }

    Node* newnode = new Node(val);

    temp->next = newnode;

    return head;
}

Node* insertAtK(Node* head , int el , int k)
{
    if(head == nullptr)
    {
        if(k == 1) return new Node(el);
        else return nullptr;
    }

    if(k == 1)
    {
        Node* temp = new Node(el);
        temp->next = head;

        return temp;
    }

    int cnt = 0;
    Node* temp = head;


    while(temp != nullptr)
    {
        cnt++;
        if(cnt == k-1)
        {
            Node* x = new Node(el);

            x->next = temp->next;
            temp->next = x;

            break;
        }
        temp = temp->next;
    }

    return head;
}

Node* insertbeforeval(Node* head , int el , int val)
{
     if(head == nullptr)
    {
        
        return nullptr;
    }

    if(head->data == val)
    {
        Node* temp = new Node(el);
        temp->next = head;

        return temp;
    }

    int cnt = 0;
    Node* temp = head;


    while(temp->next != nullptr)
    {
      
        if(temp->next->data == val)
        {
            Node* x = new Node(el);

            x->next = temp->next;
            temp->next = x;

            break;
        }
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
   

    Node* temp = insertbeforeval(head, 10 ,7);
    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;  
    }
    cout<<"\n"; 

    
}


