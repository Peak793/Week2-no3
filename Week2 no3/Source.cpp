#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void bubblesort(int *p,int n)
{
	for (int i=0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (*(p + j) > * (p + j + 1))
			{
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}
}
int main()
{
	int n,a=0;
	int* p;	
	scanf("%d", &n); 
	if (n < 2 || n>1000)
	{
		printf("Error");
	}
	p = (int*)malloc(n * sizeof(int));
	for (int i = 0; i < n; i++)
	{
		scanf("%d", (p + i));
	}
	bubblesort(p, n);
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) == 0)
		{
			a++;
		}
		else if (*(p + i)) 
		{
			printf("%d", *(p + i));
			goto out;
		}
	}
out :
	for (int i = 0; i < n; i++)
	{
		if (*(p + i) == 0)
		{
			printf("%d", *(p + i));
		}
	}
	for (int i = a + 1; i < n; i++)
	{
		printf("%d", *(p + i));
	}
	return 0;
}