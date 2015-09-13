class Solution {
public:
	void reOrderArray(vector<int> &array) {
		vector<int> vec1;
		vector<int> vec2;

		for (int i = 0; i < array.size(); i++)
		{
			array[i] % 2 == 0 ? vec2.push_back(array[i]) : vec1.push_back(array[i]);
		}

		vec2.insert(vec2.begin(), vec1.begin(), vec1.end());
		array.clear();
		array.insert(array.begin(), vec2.begin(), vec2.end());
	}
};