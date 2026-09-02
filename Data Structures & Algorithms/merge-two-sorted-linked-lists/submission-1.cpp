/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       vector<int>ans1;
       vector<int>ans2;
       ListNode*curr1= list1;
       ListNode*curr2=list2;
       while(curr1){
        ans1.push_back(curr1->val);
            curr1=curr1->next;
        }
        while(curr2){
            ans2.push_back(curr2->val);
                curr2=curr2->next;
            }
            vector<int>ans3;
            int m= ans1.size();
            int n= ans2.size();
            for(int i=0;i<m;i++){
                ans3.push_back(ans1[i]);
            }
            for(int i=0;i<n;i++){
                ans3.push_back(ans2[i]);
            }
            sort(ans3.begin(),ans3.end());
            if(ans3.size()==0){
                return nullptr;
            }
            ListNode*newhead= new ListNode(ans3[0]);
            ListNode*temp= newhead;
            for(int i=1;i<ans3.size();i++){
                ListNode*node=new ListNode(ans3[i]);
               temp->next= node;
         temp=temp->next;
            }
        return newhead;
    }
};
