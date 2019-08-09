		  //PROGRAM TO SHOW USER COMBINE NAME

#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
 {
  char fname[20],lname[20];
  clrscr();
  printf("\n Enter Your first name=");
  scanf("%s",&fname);
  printf("Enter your last name=");
  scanf("%s",&lname);
  strcat(fname,lname);
  printf("\n You have said that %s ", fname);
  getch();
  }