#include<stdio.h>

main(){
	int x;
	char i, ans;
	i=' ';
	do {
		system("cls");
		x=0;
		ans='y';
		printf("\nEnter sequence of character :  ");
		do{ 
		i = getchar();
		x++;
		} while (i!='\n');
		i=' ';
		printf("\n Number of characters entered is : %d", --x);
		printf("\nMore sequences (Y/N)?");
		ans=getch();
	} while (ans=='Y'|| ans =='Y');
}
