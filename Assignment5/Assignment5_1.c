#include<stdio.h>

#define MAX(x,y) (x > y ? x : y)
#define SQUARE(x) x*x
static inline int max(int x, int y) { return x > y ? x : y; }
static inline int square(int y) { return y * y; }

int main()
{
	int a = 10, b = 20, c, d;

	c = MAX(a, b);     // this will work 
	printf("%d\n", c);
  
	c = MAX(a++, b++); // this will not give desired result
	printf("%d\n", c);
  
	c = SQUARE(1 + 1); // this will not give desired result
	printf("%d\n", c);
  
	d = max(1+1, 1);     // this will work 
	printf("%d\n", d);
  
	d = max(a++, b++); // this will also work 
	printf("%d\n", d);
  
	d = square(1 + 1); // this will give desired result
	printf("%d\n",d);

	return 0;
}
