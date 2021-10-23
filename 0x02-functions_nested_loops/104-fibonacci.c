#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int i;
	long int n = 98;
	long int t1 = 0, t2 = 1;
	long int nextTerm = t1 + t2;

	printf("%ld, %ld, ", t1, t2);

	for (i = 3; i <= n; ++i) 
  	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	return (0);
}


