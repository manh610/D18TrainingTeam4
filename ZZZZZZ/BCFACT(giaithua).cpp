#include <stdio.h>
int main()
{
	int n;
	for (int i=1; ; i++)
	{
		scanf ("%d", &n);
		long long s=1;
		if (n==0) break;
		for (int j=1; j<=n; j++)
		{
			s=s*j;
	    }
		printf ("%lld\n",s);
	}
}
