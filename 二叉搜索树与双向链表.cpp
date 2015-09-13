/*
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
			val(x), left(NULL), right(NULL) {
	}
};*/
class Solution {
public:
    TreeNode* Convert(TreeNode* pRootOfTree)
    {
        
    }
	
	TreeNode* LNR(TreeNode* node);
	{
		LNR(node->left);
		printf(node->val);
		LNR(node->right);
	}
	
	TreeNode *head;
};