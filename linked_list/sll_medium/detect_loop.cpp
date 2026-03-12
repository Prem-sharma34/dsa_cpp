#include<iostream>
#include<vector>
#include<unordered_map>

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

bool detect_loop(Node* head)
{
    // unordered_map<Node*,int>mp;
    // while(head != nullptr)
    // {
    //     if(mp.find(head) != mp.end())return true;

    //     mp[head] = 1;
    // }

    // return false;

    // we will use tortoise and hare method of fast and slow pointer 
    // by these two pointer will be able to find a LL have a loop or not , because they are bound to coincide each if there is a loop.

    Node* slow = head;
    Node* fast = head;

    while(fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next;

        if(slow == fast) return true;

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
    
    
}

