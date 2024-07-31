#include<stdio.h>
#include<conio.h>
main()
{
	int A,B,C,D,E,F,INPUT;
	clrscr();
	printf("enter your grade : ");
	scanf("%d",&INPUT);
	if (INPUT>90){
	printf("Your Grade is A.Excellent work!");
	}
	else if (INPUT>70){
	printf("Your Grade is B.well done");
	}
	else if (INPUT>60){
	printf("Your grade is c.Good job ");
	}
	else if (INPUT>40){
	printf("Your grade id D.You passed");
	}

	else {
	printf("Your grade is f.Sorry,You failed");
	}
	getch();


  }


