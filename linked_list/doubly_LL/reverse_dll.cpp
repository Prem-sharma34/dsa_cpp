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


Node* reverseDLL(Node* head)
{
    if(head == nullptr) return nullptr;


    Node* temp = head;

    Node* last = head;

    while(last->next != nullptr)
    {
        last = last->next;
    }

    while(temp <= last)
    {
        int val = temp->data;

        temp->data = last->data;
        last->data = val;


        temp = temp->next;
        last = last->back;
    }

    return head;
}






int main()
{
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,18};

    Node* head = Arr2DLL(arr);
      
    print(head);    

    Node* temp = reverseDLL(head);

    print(head);
}


