#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * addtwoNumber(ListNode * l1 , ListNode* l2)
{
    ListNode * l3 = new ListNode(0);
    ListNode * head = l3;


    int carry = 0;


    while(l1 != nullptr || l2 != nullptr)   
    {
        int sum = 0 + carry;


        if(l1 != nullptr)
        {
            sum += l1->val;

            l1 = l1->next;
        }

        if(l2 != nullptr)
        {
            sum += l2->val;
            l2 = l2->next;
        }

        carry = sum / 10;
        sum = sum%10;

        head = new ListNode(sum);
        head = head ->next;

    }
    if(carry == 1)
    {
        head = new ListNode(1);
    }


    return l3->next;
}



int main()
{


}