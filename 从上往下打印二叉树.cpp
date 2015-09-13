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
    vector<int> PrintFromTopToBottom(TreeNode *root) {
		vector<int> vec;
		if(root == NULL)
		{
			return vec;
		}
		
		queue<TreeNode*> t_queue;
		t_queue.push(root);
		while(!t_queue.empty())
		{
			TreeNode* temp;
			temp = t_queue.front();
			t_queue.pop();
			vec.push_back(temp->val);
			
			if(temp->left != NULL)
				t_queue.push(temp->left);
			if(temp->right != NULL)
				t_queue.push(temp->right);
		}
		
		return vec;
    }
};