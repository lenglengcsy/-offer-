//���������е�Ԫ��ʱ��ʹ��value_type;
//�º���������Ҫ
struct doSomething1
{
	doSomething1(map<int, int> &hpp) : hp(hpp){}

	map<int, int> &hp;
	void operator() (int x)
	{
		hp[x]++;
		return;
	}
};


class Solution {
public:

	int MoreThanHalfNum_Solution(vector<int> numbers) {

		num = numbers.size();

		for_each(numbers.begin(),numbers.end(),doSomething1(mp));

		for (auto iter = numbers.begin(); iter != numbers.end(); iter++)
		{
			if (mp[*iter] > num / 2)
			{
				return *iter;
			}
		}

		return 0;
	}

	map<int, int> mp;
	int num;
};