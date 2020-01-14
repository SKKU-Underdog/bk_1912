#include<stdio.h>

int main()
{
	int sum[1000001][2]={0};
	int n;
	int num;

	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%d",&num);

		if(i == 0){
			sum[1][0] = num;
			if(num > 0)
				sum[1][1] = num;
			else
				sum[1][1] = 0;
			continue;
		}

		if(sum[i][0] <= sum[i][1]+num){
			sum[i+1][0] = sum[i][1]+num;
			if(sum[i][1]+num < 0)
				sum[i+1][1] = 0;
			else
				sum[i+1][1] = sum[i][1]+num;
		}
		else{
			sum[i+1][0] = sum[i][0];
			if(0 <= sum[i][1]+num)
				sum[i+1][1] = sum[i][1]+num;
			else
				sum[i+1][1] = 0;
		}
	}

	printf("%d\n",sum[n][0]);

	return 0;
}
