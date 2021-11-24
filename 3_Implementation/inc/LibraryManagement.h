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

FILE *librecord;
FILE *membrrecord;
FILE *fp1;
FILE *fp2;
FILE *temp1;
FILE *temp2;
void Addbook();
/**
 * @brief adding book details
 * 
 */
void Displaybook();
/**
 * @brief displaybooks
 * 
 */
void Searchbook();
/**
 * @brief searching of books
 * 
 */
void Author();
/**
 * @brief enter author details
 * 
 */
void Titlelist();
/**
 * @brief list of the books with same title
 * 
 */
void Stock();
/**
 * @brief cheaking the stock
 * 
 */
void Addmembr();
/**
 * @brief adding the mumber
 * 
 */
void Issue();
/**
 * @brief issuing the book
 * 
 * 
 */
void bookret();
/**
 * @brief returning the book
 * 
 */
void exit()
/**
 * @brief if invalid input
 * 
 */
 Terminal{
 exitCode: Thenable<number>
 }
