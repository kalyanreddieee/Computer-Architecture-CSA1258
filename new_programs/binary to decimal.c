#include<stdio.h>
#include<stdlib.h>
int main(){
	int num,binnum,rem,base=1,dec_num=0;
	printf("Enter the binary num: ");
	scanf("%d",&num);
	binnum=num;
	while(num>0)
	{
		rem=num%10;
		dec_num=dec_num+ rem*base;
		num=num/10;
		base=base*2;
	}
	printf("the bin num is: %d",binnum);
	printf("\nThe dec num is: %d",dec_num);
	return 0;
}
