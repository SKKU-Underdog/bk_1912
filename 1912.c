#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,max=-100000000;
	scanf("%d",&n);
	int *num=(int*)malloc(sizeof(int)*n);
	int *result=(int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	result[0]=num[0];
	for(int i=1;i<n;i++){
		if(result[i-1]>=0)
			result[i]=result[i-1]+num[i];
		else
			result[i]=num[i];
	}
	for(int i=0;i<n;i++){
		if(result[i]>max)
			max=result[i];
	}
	printf("%d\n",max);
}
