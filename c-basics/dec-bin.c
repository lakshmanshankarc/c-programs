#include<stdio.h>

int main(){
	char binstr[100];
	printf("Enter a binary String");
	scanf("%s",&binstr);
	int dec=binConvertor(binstr);
	printf("%d",dec);
}

int binConvertor(char arr[]){
	int len=strlen(arr)-1;
	int pCount=0,sum=0;
	
	for(int i=len;i>=0;i--){
		int z=(int)(arr[i])-48;
		sum+=("%d\n",(z*(power(2,pCount))));
		pCount+=1;
	}
	return sum;
}

int power(int a,int b){
	int pow=a;
	if (b==0)
	{
	return 1;
	}
	for(int i=0;i<b-1;i++){
		pow=pow*a;
	}
	return pow;
}