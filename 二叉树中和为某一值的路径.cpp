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
    vector<vector<int> > FindPath(TreeNode* root,int expectNumber) 
	{
		if(root == NULL)
		{
			return res;
		}
		
		FindPath(root->left, expectNumber - root->val);
    }
	
	vector<int> Find(TreeNode* root,int expectNumber)
	{
		if(root == NULL)
		{
			return res;
		}
	}
	
	vector<vector<int>> res;
};