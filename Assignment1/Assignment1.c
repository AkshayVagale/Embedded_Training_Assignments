//
#include<stdio.h>

int main()
{
  // the block of code inside the #if 0 _____ #endif wont compile
#if 0 
  int i;
  char c;
  f= i+c;
#endif
  
  /*This is comment
    /*This is nested comment*/
  */
 // This will give error because the multiline comment will end with the first "*/" and next "*/" will through error     
    
    char ch1, ch2, ch3;
	ch1 = 65;
	ch2 = 'b';
	ch3 = '3';                   //  Output
	printf("ch1 = %c\n",ch1);    //   'A'
	printf("ch1 = %c\n", ch2);   //   'b' 
	printf("ch1 = %c\n", ch3);   //   '3'
	printf("ch1 = %d\n", ch1);   //   65
	printf("ch1 = %d\n", ch2);   //   98
	printf("ch1 = %d\n", ch3);   //   51
	return 0;

}
