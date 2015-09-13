class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) 
	{
		if(sequence.empty())
		{
			return true;
		}

		vector<int>::iterator root = sequence.end();
		root--;
		vector<int>::iterator flag1 = sequence.begin() , flag;
		while((*flag1) < (*root))
			flag1++;
		
		flag = flag1;
		
		while(flag1 != root)
		{
			if(*flag1 < *root)
				return false;
			flag1++;
		}
		
		vector<int> left(sequence.begin(), flag);
		vector<int> right(flag, root);
		
		return VerifySquenceOfBST(left) && VerifySquenceOfBST(right);
    }
};