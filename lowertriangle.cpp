// lower triangle
#include <stdio.h>
int main()
{
	int a;
	printf ("Enter any value:");
	scanf("%d",&a);
	for(int i=a;i>=1;i--)
	{ for (int j=1;j<=i;j++)
	{
	printf ("*");
	 }
	 printf ("\n");
	}
	return 0;
	
}
