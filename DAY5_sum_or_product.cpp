#include <bits/stdc++.h> 
long long int sumOrProduct(long long int n, long long int q)
{   	
	// Write your code here.
	long long sum = 1;
          if (q == 1) {
            return n*(n+1)/2;
          }
		  else{
			  for(int i = 1; i<=n; i++){
			  sum = (sum * i) % 1000000007;
		  }
	return sum;
}
}