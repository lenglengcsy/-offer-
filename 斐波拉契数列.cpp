class Solution {
public:
    int Fibonacci(int n) {
		if(0 == n)
			return 0;
		if(1 == n)
			return 1;
		int temp1 = 0;
		int temp2 = 1;
		int sum = 1;
		for(int i = 1; i < n; i++)
		{
			sum = temp1 + temp2;
			temp2 = temp1;
			temp1 = sum;
		}
		
		return sum;
    }
};