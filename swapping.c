#include <stdio.h>
main()
{
	int a,b,temp; /* declaring the variables*/
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number:"); /*taking the values from user*/
	scanf("%d",&b);
	printf("before swapping a=%d,b=%d",a,b);
    temp=a; /*assaining a variable value to temp variable*/
	a=b;  /*assaining b variable value to a variable*/
	b=temp;  /*assaining temp variable value to the b variable*/
	printf("after swapping the value of a is %d and the value of b is %d",a,b); /*printing the values after swapping two numbers*/
	return 0;
}
