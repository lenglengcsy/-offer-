class Solution
{
public:
  //Insert one char from stringstream
    void Insert(char ch)
    {
         vec.push_back(ch);
		 mp[ch]++;
    }
  //return the first appearence once char in current stringstream
    char FirstAppearingOnce()
    {
		for(int i = 0; i < vec.size(); i++)
		{
			if(mp[vec[i]] == 1)
			{
				return vec[i];
			}
		}
		
		return '#';
    }
	std::vector<char> vec;
	std::map<char,int> mp;
};