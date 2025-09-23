class Solution {
public:
    int size(ListNode *head){
        int cnt=0; while(head!=NULL){
            cnt++; head=head->next;
        }return cnt;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        int sz=size(head); auto first=head,second=head; int k1=sz-k; 
        while(--k){first=first->next;} while(k1--){
            second=second->next;
        }swap(first->val,second->val); return head;
    }
};
