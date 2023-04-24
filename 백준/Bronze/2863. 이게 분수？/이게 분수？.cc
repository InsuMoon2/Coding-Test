#include<stdio.h>


int main(void)
{
	int A, B, C, D;
	double temp, max = 0;
	int t,ans;
	scanf("%d %d", &A, &B);
	scanf("%d %d", &C, &D);

	double a[4] = { A,B,D,C };

	for (int i = 0; i < 4; i++)
	{

		
		temp = double(a[0] / a[3] + a[1] / a[2]);

		if (temp > max)
		{
			max = temp;
			ans = i;
		}

		t = a[3];
		a[3] = a[2];
		a[2] = a[1];
		a[1] = a[0];
		a[0] = t;


	}
	printf("%d",ans);
}