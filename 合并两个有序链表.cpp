/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2)
    {
		int temp;
		ListNode *newListHead , *tempNode, *posNode;
		newListHead = new ListNode(0);
		posNode = newListHead;
		while(pHead1 != NULL && pHead2 != NULL)
		{
			if(pHead1->val < pHead2->val)
			{
				temp = pHead1->val;
				pHead1 = pHead1->next;
			}
			else
			{
				temp = pHead2->val;
				pHead2 = pHead2->next;
			}

			tempNode = new ListNode(temp);
			posNode->next = tempNode;
			posNode = tempNode;
		}
		
		if(pHead1 == NULL)
		{
			while(pHead2 != NULL)
			{
				tempNode = new ListNode(pHead2->val);
				posNode->next = tempNode;
				pHead2 = pHead2->next;
			}
		}
			
		
		if(pHead2 == NULL)
		{
			while(pHead1 != NULL)
			{
				tempNode = new ListNode(pHead1->val);
				posNode->next = tempNode;
				pHead1 = pHead1->next;
			}
		}
			
    }
};