/*
ʹ��STL��ostringstream���ɸ㶨
*/
class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		//��Ҫ #include <sstream>
		ostringstream out;
		for (int i = 1; i <= n; ++i)
		{
			out << i;
		}

		string s = out.str();  //��ȡ�ַ���

		int num = count(s.begin(),s.end(),'1');  //ʹ��count

		return num;
	}
};