class Solution 
{
public:
    double Power(double base, int exponent) {
		if(exponent == 0 || base == 0)
			return 1;
		
		base = exponent > 0 ? base : 1 / base;
		exponent = exponent > 0 ? exponent : -exponent;
		double res = 1;
		while(exponent--)
		{
			res = base * res;
		}
		
		return res;
    }
};