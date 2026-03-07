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

int lengthLL(Node* head)
{
    Node* tmp = head;
    int cnt = 0;
    while(tmp)
    {
        cnt++;
        tmp = tmp->next;
    }

    return cnt;
}

int checkIfPresent(Node* head , int key)
{
    Node* tmp = head;

    while(tmp)
    {
        if(tmp->data == key)
        {
            return true;
        }

        tmp = tmp->next;
    }

    return false;
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
    int count = lengthLL(head);

    cout<<count<<endl;

    checkIfPresent(head,2)?cout<<"True"<<endl: cout<<false<<endl;
    
}


