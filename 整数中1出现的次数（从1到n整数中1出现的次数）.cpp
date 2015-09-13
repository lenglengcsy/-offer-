/*
使用STL的ostringstream轻松搞定
*/
class Solution {
public:
	int NumberOf1Between1AndN_Solution(int n)
	{
		//需要 #include <sstream>
		ostringstream out;
		for (int i = 1; i <= n; ++i)
		{
			out << i;
		}

		string s = out.str();  //获取字符流

		int num = count(s.begin(),s.end(),'1');  //使用count

		return num;
	}
};