struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};

class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) 
	{
		if(pListHead == NULL)
			return NULL;
		ListNode* flag = pListHead;
		int temp_k = k - 1; 
		while(temp_k--)
		{
			if(flag == NULL)
				return NULL;
			flag = flag->next;
		}
		
		while(flag->next != NULL)
		{
			flag = flag->next;
			pListHead = pListHead->next;
		}
		
		return pListHead;
    }
};