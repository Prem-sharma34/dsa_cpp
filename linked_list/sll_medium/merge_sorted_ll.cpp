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


Node* mergeTwoLists(Node* list1 , Node* list2)
{
    if(list1 == nullptr && list2 == nullptr)
    {
        return nullptr;
    }else if(list1 == nullptr && list2 != nullptr)
    {
        return list2;
    }else if(list1 != nullptr && list2 == nullptr)
    {
        return list1;
    }

    
    Node* head = new Node(-1);

    Node* temp = head;


    while(list1 != nullptr && list2 != nullptr) // using or instead of the and which is correct
    {
        if(list1->data <= list2->data)
        {
            temp->next = list1;
            list1 = list1->next;
        }else
        {
            temp->next = list2;
            list2 = list2->next;
        }

        temp = temp->next;

    }

    while(list1 != nullptr)
    {
        temp->next = list1;
        temp = temp->next;
        list1 = list1->next;
    }

    while(list2 != nullptr)
    {
        temp->next = list2;
        temp = temp->next;
        list2 = list2->next;
    }



    return head->next;

}


 Node* addTwoNumbers(Node* l1, Node* l2)
 {
    if(l1 == nullptr && l2 == nullptr)
    {
        return nullptr;
    }else if(l1 == nullptr && l2 != nullptr)
    {
        return l2;
    }else if(l1 != nullptr && l1 == nullptr)
    {
        return l1;
    }


    int x = 0;
    int y = 0;

    while(l1 != nullptr)
    {
        x = x*10 + l1->data;
        l1 = l1->next;
    }

    while(l2 != nullptr)
    {
        y= y*10 + l2->data;
        l2 = l2->next;
    }

    int n = x + y;

    Node* head = new Node(-1);
    Node* temp = head;
    while(n != 0)
    {
        Node* digit = new Node(n%10);
        temp->next = digit;
        n = n/10;
        temp = temp->next;
    }

    return head->next;

 }

void print(Node* head)
{
    Node* temp = head;

    while(temp != nullptr)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

    cout<<endl;
}



int main()
{
    vector<int> arr = {0};
    vector<int> arr1 = {9,9,9,};

    Node* list1 = convert2Arr(arr);
    Node* list2 = convert2Arr(arr1);
    print(list1);
    print(list2);

    Node* temp = addTwoNumbers(list1 , list2);

    print(temp);
}



