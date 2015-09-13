class Solution 
{
public:
	int FindGreatestSumOfSubArray(vector<int> array) 
	{
		//���⿪ͷ�ͱ��δ�����
		if (array.empty())
		{
			return 0;
		}

		int mx = 0x80000000;  //���˱��˵Ĵ��룬��֪�����˸�max
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