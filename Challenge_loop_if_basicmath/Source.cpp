#include<stdio.h>
#include<math.h>

int main() {
	int num1, num2;
	double a,sum = 0,sum2 = 0, c = 0,num3;
	scanf("%d %d",&num1,&num2);
	if (num1 < num2)
	{
		for (int i = num1; i <= num2; i++)
		{
			c++;
			sum += i;
			sum2 += pow(i, 2);
			printf("%d ",i);
		}
		a = sum / c;
		
		printf("\nAverage = %.1lf\n",a);
		printf("SD = %.2lf ", sqrt(((sum2*c) -pow(sum,2))/(c*(c-1))) );


	}
	if (num1 > num2)
	{
		for (int i = num1; i >= num2; i--)
		{
			c++;
			sum += i;
			sum2 += pow(i, 2);
			printf("%d ", i);
		}
		a = sum / c;
		printf("\nAverage = %.1lf\n",a);
		printf("SD = %.2lf ", sqrt(((sum2 * c) - pow(sum, 2)) / (c * (c - 1))));

		
	}
	

}