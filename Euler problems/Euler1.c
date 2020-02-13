//Euler 1
#include<stdio.h>
#include<math.h>
double Calculate(int  n)
{
	
	int result3=1 ,result5=1,result15=1,result=1;
	result3=3*((n/3)*((n/3)+1)/2);
	result5=5*((n/5)*((n/5)+1)/2);
	result15=15*((n/15)*((n/15)+1)/2);
	if(n%3==0||n%5==0)
	{
		result=result3+result5-result15-n;
	}
	else
	{
		result=result3+result5-result15;
	}
	printf("sonuc=%d, %d  %d   %d ",result,result3,result5,result15);
}
int main()
{
	int n;
	printf("N'e kadar olan 3 veya 5 in katlarini bulmak icin n degerini giriniz");
	scanf("%d",&n);
	Calculate(n);
	
}

