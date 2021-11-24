/**
 * @file LibraryManagement
 * @author vaishnavi.kotala
 
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define IN 1
#define OUT 0

void Addbook();
void Searchbook();
void Displaybook();
void Author();
void Titlelist();
void Stock();
void Issue();
void bookret();
void Addmembr();
void Exit();

char info[500];

struct
{
  int bid;
  char bname[25] ;
  char author[25];
  int nooftitles;
  char titles[500];
  int status;
}book;
struct
{
  int mid;
  char mname[25] ;
  char department[25];
  int availibcard;
  int phno;

}membr;

//initializing the files used in the program
