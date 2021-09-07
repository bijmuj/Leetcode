class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *p1, *p2, *temp, *head = new ListNode((l1->val + l2->val) % 10);
        int s, c = (l1->val + l2->val)/10;
        p1 = l1->next;
        p2 = l2->next;
        temp = head;
        while(p1 && p2){
            s = p1->val + p2->val + c;
            c = s/10;
            s -= 10 *(bool)(c);
            temp->next = new ListNode(s);
            temp = temp->next;
            p1 = p1->next;
            p2 = p2->next;
        }
        if (p2)
            p1 = p2;
        while (p1 || c){
            if (p1){
                s =  p1->val + c;
                p1 = p1->next;
            }
            else
                s = c;
            c = s/10;
            s -= 10*(bool)(c);
            temp->next = new ListNode(s);
            temp = temp->next;
            
        }
        return head;
    }
};