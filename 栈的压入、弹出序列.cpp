class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
		vector<int> stack;
		int len = pushV.size();
		for(int i = 0, j = 0; i < len; i++)
		{
			stack.push_back(pushV[i]);
			while(j < popV.size() && stack.back() == popV[j])
			{
				stack.pop();
				j++;
			}
		}
		
		return stack.empty();
		
    }
};