class Solution {
public:
	string intToString(const vector<int> &vec)
	{
		ostringstream os;
		for(auto x : vec)  //又是一个神奇的用法
		{
			os << x;
		}

		return os.str();
	}

	string PrintMinNumber(vector<int> numbers) {
		int count = 1;
		if (numbers.empty())
		{
			return string();
		}
		sort(numbers.begin(), numbers.end());
		vector<string> strVec;

		strVec.push_back(intToString(numbers));

		//全排列前要排序，否则输出可能不完整
		while (next_permutation(numbers.begin(), numbers.end()))
		{
			strVec.push_back(intToString(numbers));
			count++;
		}

		sort(strVec.begin(), strVec.end());

		return strVec.front();
	}
};