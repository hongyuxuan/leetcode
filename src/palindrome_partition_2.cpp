#include <iostream>
using namespace std;

class Solution1 
{
public:
    int minCut(string s) 
	{
		int n = s.length();
		int dp[n];
		for(int i=0; i<n; i++)
			dp[i] = 0;
		for(int i=1; i<n; i++)
		{
			if(isPalindrome(s, 0, i))
				dp[i] = 0;
			else
			{
				int min = i;
				for(int k=1; k<=i; k++)
				{
					int min1, min2;
					if(isPalindrome(s, k, i))
						min1 = dp[k-1] + 1;
					else
						min2 = dp[k] + i- k;
					if(min1 < min) min = min1;
					if(min2 < min) min = min2;
				}
				dp[i] = min;
			}
		}
		return dp[n-1];
	}
	
	bool isPalindrome(string s, int begin, int end)
	{
		for(int i=begin,j=end; i<=j; i++,j--)
		{
			if(s[i] != s[j]) return false;
		}
		return true;
	}
};

class Solution2
{
public:
    int minCut(string s) 
	{
		int n = s.length();
		int dp[n];
		for(int i=0; i<n; i++)
			dp[i] = 0;
		for(int i=1; i<n; i++)
		{
			if(isPalindrome(s, 0, i))
				dp[i] = 0;
			else
			{
				int min = i;
				for(int k=1; k<=i; k++)
				{
					int min1, min2;
					if(isPalindrome(s, k, i))
						min1 = dp[k-1] + 1;
					else
						min2 = dp[k] + i- k;
					if(min1 < min) min = min1;
					if(min2 < min) min = min2;
				}
				dp[i] = min;
			}
		}
		return dp[n-1];
	}
	
	bool isPalindrome(string s, int begin, int end)
	{
		for(int i=begin,j=end; i<=j; i++,j--)
		{
			if(s[i] != s[j]) return false;
		}
		return true;
	}
};


int main()
{
	Solution1 s;
//	string str = "eebeeadbbdadd";
	string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	cout << s.minCut(str) << endl;
//	cout << s.isPalindrome(str, 0, str.length()-1) << endl;
}
