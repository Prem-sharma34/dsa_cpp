#include <iostream>
struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode * addtwoNumber(ListNode * list1, ListNode* list2)
{
      ListNode* l3 = new ListNode(0);

            ListNode* head = l3;

            while(list1 != nullptr && list2 != nullptr)
            {
                if( list1->val <= list2->val)
                {
                    head->next = list1;

                    list1=list1->next;
                }else
                {
                    head->next = list2;

                    list2=list2->next;
                }

                head = head->next;
            }
            if(list1 != nullptr)
            {
                head->next = list1;
            }
            if(list2     != nullptr)
            {
                head->next = list2;
            }

            return l3->next;
}



int main()
{


}