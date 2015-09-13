class Solution {
public:
	string intToString(const vector<int> &vec)
	{
		ostringstream os;
		for(auto x : vec)  //����һ��������÷�
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

		//ȫ����ǰҪ���򣬷���������ܲ�����
		while (next_permutation(numbers.begin(), numbers.end()))
		{
			strVec.push_back(intToString(numbers));
			count++;
		}

		sort(strVec.begin(), strVec.end());

		return strVec.front();
	}
};