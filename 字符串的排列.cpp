class Solution {
public:
	vector<string> Permutation(string str) 
	{
		vector<string> strArr;
		strArr.push_back(str);
		
		//�ؼ�����next_permutation
		while (next_permutation(str.begin(), str.end()))
		{
			strArr.push_back(str);
		}

		sort(strArr.begin(), strArr.end());

		if (str.size() == 0)
		{
			strArr.clear();
		}
		return strArr;
	}
};