class Solution 
{
public:
	int FindGreatestSumOfSubArray(vector<int> array) 
	{
		//避免开头就被段错误了
		if (array.empty())
		{
			return 0;
		}

		int mx = 0x80000000;  //看了别人的代码，才知道加了个max
		int sum = array[0];
		
		for(auto iter = array.begin() + 1; iter != array.end(); ++iter)
		{
			if (sum > 0)
			{
				sum = sum + *iter;
			}
			else
			{
				sum = *iter;
			}

			mx = max(sum, mx);
		}
		
		return mx;
	}

};