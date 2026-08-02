Appraoch 1-
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode* curr= head;
        while(curr!=NULL){
            st.push(curr->val);
            curr= curr->next;
        }

        curr=head;
        while(curr && curr->val == st.top()){
            st.pop();
            curr=curr->next;
        }
        return curr==NULL;
    }
};


Approach 2-
class Solution {
public:
    ListNode* reverse(ListNode* head){
        ListNode* prev= NULL;
        ListNode* curr=head;
        while(curr!=NULL){
            ListNode* next= curr->next;
            curr->next= prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }

    bool isPalindrome(ListNode* head) {
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast != NULL && fast->next != NULL){
        slow= slow->next;
        fast= fast->next->next;
       }
       ListNode* rev = reverse(slow);
       while(rev!= NULL){
        if(head->val != rev->val){
            return false;
        }
            head= head->next;
            rev= rev->next;
       }
    return true;
    }
};