
/*
	
	Title			: Library Management System
	Language		: C
	Author			: vaishnavi kotala
	Date Created	: 22-011-2021

*/


#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


struct library
{
char bk_name[30];
char author[30];
int pages;
float price;
};

int main()
{
    
{
    printf("\t###########################################################################");
	printf("\n\t############              Library management System            ############");
	printf("\n\t############                (UNDER DEVELOPMENT)                ############");
	printf("\n\t###########################################################################");
}
struct library l[100];
char ar_nm[30],bk_nm[30];
int i,j;
i=0;
j=0;
int keepcount;
keepcount = 0;

while(j!=6)
{
printf("\n\n\n\t\t\t\t*** MENU ***");
printf("\n\n1. Add book information\n2. Display book information\n");
printf("3. List all books of given author\n");
printf("4. List the title of specified book\n");
printf("5. List the count of books in the library\n");
printf("6. Exit");

printf ("\n\nEnter one of the above : ");
scanf("%d",&j);

if (j<=6)
{
    

switch (j)
{
/* Add book */

case 1:  

printf ("Enter book name = ");
scanf ("%s",l[i].bk_name);

printf ("Enter author name = ");
scanf ("%s",l[i].author);

printf ("Enter pages = ");
scanf ("%d",&l[i].pages);

printf ("Enter price = ");
scanf ("%f",&l[i].price);
keepcount++;

break;

case 2:
 
 /*display book info*/
 
printf("you have entered the following information\n");

for(i=0; i<keepcount; i++)
{
printf ("book name = %s",l[i].bk_name);

printf ("\t author name = %s",l[i].author);

printf ("\t  pages = %d",l[i].pages);

printf ("\t  price = %f",l[i].price);
}
break;

case 3:

/*list all the books*/

printf ("Enter author name : ");
scanf ("%s",ar_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(ar_nm, l[i].author) == 0)

{
printf ("%s %s %d %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
    
}
break;

case 4:

/*list the title of the books*/

printf ("Enter book name : ");
scanf ("%s",bk_nm);
for (i=0; i<keepcount; i++)
{
if (strcmp(bk_nm, l[i].bk_name) == 0)

{
printf ("%s \t %s \t %d \t %f",l[i].bk_name,l[i].author,l[i].pages,l[i].price);
}
}
break;

case 5:

/*list the count of the books*/
printf("\n No of books in library : %d", keepcount);
break;

case 6:

exit (0); 

}
    
}
else 
{
  printf("\n\t Enter the number in dicimal form which is between 1 to 6 only")  ;
}

}
return 2;

}


