///UVa 10405: Longest common subsequence.

#include <cstdio>
#include <iostream>
#include <string>

using namespace std; 

int LCS(string X, int m, string Y, int n)
{
	int L[m+1][n+1]; 

	for(int i=0; i<m+1; i++)
	{
		for(int j=0; j<n+1; j++)
		{
			if(i==0 || j==0)
				L[i][j] = 0; 
			else if(X[i-1] == Y[j-1])
				L[i][j] = L[i-1][j-1] + 1; 
			else 
				L[i][j] = max(L[i-1][j], L[i][j-1]); 
		}
	}
	return L[m][n]; 
}

int main()
{
	string str1, str2; 
	int len1, len2;  

	while(getline(cin, str1))
	{
		getline(cin, str2); 

		int len1 = str1.size(); 
		int len2 = str2.size(); 

		int lcs = LCS(str1, len1, str2, len2); 

		printf("%d\n", lcs); 
	}
	return 0; 
}