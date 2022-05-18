#include <stdio.h>
int main()
{
	//char* c[] = { "enter","new", "point","first" };
	//char** cp[] = { c + 3,c,c + 1,c + 2 };
	//char*** cpp = cp;
	//printf("%s\n",**++cpp);
	/*printf("%s\n", *--*++cpp+3);
	printf("%s\n", *cpp[-2]+3);
	printf("%s\n", cpp[-1][2]+1);*/

	int a[5][5];
	int(*p)[4];
	p = a;
	printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
	return 0;
}