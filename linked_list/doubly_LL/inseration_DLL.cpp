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



Node* insertBeforeHead(Node* head , int val)
{
    Node* newhead = new Node(val,head , nullptr);
    head->back = newhead;

    return newhead;

}



Node* insertBeforeTail(Node* head , int val)
{
    if(head->next == nullptr)
    {
        return insertBeforeHead(head, val);
    }

    Node* tail = head;

    while(tail->next != nullptr)
    {
        tail = tail->next;
    }

    Node* prev = tail->back;

    Node* newnode = new Node(val, tail ,  prev);
    prev->next = newnode;
    tail->back = newnode;

    return head;
}


Node* insertBeforeKthElement(Node * head , int val , int k =1)
{
    if(k == 1)
    {
        return insertBeforeHead(head , val);

    }

    Node* temp = head;

    int cnt = 0;
    while(temp != nullptr)
    {
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }

    Node* prev = temp->back;
    Node* newnode = new Node(val,temp,prev);
    prev->next = newnode;
    temp->back = newnode;

    return head;
}

void inseratBeforeNode(Node* node , int val)
{
    Node* prev = node->back;

    Node* newnode = new Node(val,node,prev);

    prev->next = newnode;
    node->back = newnode;

}


int main()
{
    vector<int> arr = {2 , 5, 8 , 7};

    Node* head = Arr2DLL(arr);
      
    print(head);    

    // Node* temp = insertBeforeKthElement(head,10 , 4);

    inseratBeforeNode(head->next, 88);
    print(head);
}


