#include<stdio.h>

extern int add(int num1,int num2);
extern int sub(int num1,int num2);
extern int divi(int num1,int num2);
extern int multi(int num1,int num2);


int main()
{
	int num1,num2;
	printf("Provide two numbers num1 & num2\n");
	scanf("%d %d",&num1,&num2);

	int choice,result;
	printf("choose any one:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1: result = add(num1,num2);
			break;

		case 2: result = sub(num1,num2);
			break;

		case 3: result = multi(num1,num2);
			break;

		case 4: if(num2 == 0)
			{
				printf("Division by zero error\n");
				return 1;
			}
			result = divi(num1,num2);
			break;

		default : printf("Invalid choice\n");
			  return 1;
	}

	printf("Result = %d\n",result);

	return 0;
}
			
