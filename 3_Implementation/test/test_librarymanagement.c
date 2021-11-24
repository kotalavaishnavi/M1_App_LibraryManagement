#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define IN 1
#define OUT 0

void Addbook(void);
void Searchbook(void);
void Displaybook(void);
void Author(void);
void Titlelist(void);
void Stock(void);
void Issue(void);
void bookret(void);
void Addmembr(void);
void Exit(void);

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
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_add);
  RUN_TEST(test_add_testcase2);
  RUN_TEST(test_subtract);
  RUN_TEST(test_multiply);
  RUN_TEST(test_divide);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_add(void) {
  TEST_ASSERT_EQUAL(30, add(10, 20));
  TEST_ASSERT_EQUAL(-10, add(10, -20));
  TEST_ASSERT_EQUAL(-30, add(-10, -20));
  TEST_ASSERT_EQUAL(10, add(-10, 20));
}
void Addbook(void){
  
/**
 * @brief adding book details
 * 
 */
  
void Displaybook(void);
/**
 * @brief displaybooks
 * 
 */
void Searchbook(void);
/**
 * @brief searching of books
 * 
 */
void Author(void);
/**
 * @brief enter author details
 * 
 */
void Titlelist(void);
/**
 * @brief list of the books with same title
 * 
 */
void Stock(void);
/**
 * @brief cheaking the stock
 * 
 */
void Addmembr(void);
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
void exit();
/**
 * @brief if invalid input
 * 
 */
 Terminal{
 exitCode: Thenable<number>
 }

