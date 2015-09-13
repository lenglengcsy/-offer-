class Solution {
public:
	vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
		
		sort(input.begin(), input.end());
		auto iter = unique(input.begin(), input.end());

		input.erase(iter, input.end());

		input.shrink_to_fit();

		vector<int> vec;

		if (input.size() < k)
		{
			return vec;
		}
		
		int temp = 0;
		while (temp < k)
		{
			vec.push_back(input[temp]);
			temp++;
		}

		return vec;
	}
};