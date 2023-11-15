#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = { 'c=','c-','dz=','d-','lj','nj','s=','z=' };
	char mem[100];
	
	scanf("%s", mem);
	int num;
	int cnt = strlen(mem);
	for (int i = 0; i < strlen(mem); i++)
	{
		if (mem[i] == '=')
		{
			if (mem[i - 1] == 'c')
			{
				cnt--;
			}
			if (mem[i - 1] == 'z')
			{
				if (mem[i - 2] == 'd')
				{
					cnt--;
				}
			}
			if (mem[i - 1] == 's')
			{
				cnt--;
			}
			if (mem[i - 1] == 'z')
			{
				cnt--;
			}
		}
		if (mem[i] == '-')
		{
			if (mem[i - 1] == 'c')
			{
				cnt--;
			}
			if (mem[i - 1] == 'd')
			{
				cnt--;
			}
		}
		if (mem[i] == 'j')
		{
			if (mem[i - 1] == 'l')
			{
				cnt--;
			}
			if (mem[i - 1] == 'n')
			{
				cnt--;
			}
		}
	}
	printf("%d", cnt);


}
	