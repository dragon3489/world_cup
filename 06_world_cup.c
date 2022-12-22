#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
int main()
{
	char arr1[]={"Lionel Messi"};
	char arr2[]={"The king of football!"};
	char arr3[]={"#####################"};
	int a,i,j;
	int mid=0;
	int right,left=0;
	right=strlen(arr3)-1;
	for(;left<=right;left++,right--)
	{
		printf("%s",arr3);
		arr3[left]=arr2[left];
		arr3[right]=arr2[right];
		Sleep(1000);
		system("cls");
	}
	printf("%s",arr3);
	Sleep(2000);
	system("cls");
	a=strlen(arr1)-1;
	right=strlen(arr3)-1;
	left=0;
	mid=(right-a)/2;
	for(i=0;i<mid;i++)
	{
		printf(" ");
	}
	printf("%s",arr1);
	while(1);
	return 0;
}