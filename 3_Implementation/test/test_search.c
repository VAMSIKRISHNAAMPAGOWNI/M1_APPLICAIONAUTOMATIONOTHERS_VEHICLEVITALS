#include "unity.h"
#include "test_search.h"
#include "../inc/Employee.h"
#include <stdlib.h>
#include <string.h>
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}
info *att = NULL;
info *emp = NULL;


void test_search_by_empid(void)
{
  info temp = {0};
  int e_id;
  int see;
  e_id = 2;
  see = 0;
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, search_by_empid(emp, e_id, &temp, &see));
  TEST_ASSERT_EQUAL(0, see);
}

void test_update(void)
{
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 1, 1));
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 2, 1));
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 3, 1));
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 4, 1));
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 8, 1));
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 6, 1));
  TEST_ASSERT_EQUAL(NO_EMPACC_EXIST, update(emp, 2, 7, 1));
}

void test_checkDate(void)
{
  TEST_ASSERT_EQUAL(1, checkDate(10, 10, 2010));
  TEST_ASSERT_EQUAL(0, checkDate(111, 12, 2020));
}

void test_checkBU(void)
{
  TEST_ASSERT_EQUAL(1, checkBU("ICP"));
  TEST_ASSERT_EQUAL(1, checkBU("Embedded"));
  TEST_ASSERT_EQUAL(1, checkBU("Medical"));
  TEST_ASSERT_EQUAL(1, checkBU("Transportation"));
  TEST_ASSERT_EQUAL(0, checkBU("Embedde  d"));
}

void test_checkRole(void)
{
  TEST_ASSERT_EQUAL(1, checkRole("Intern"));
  TEST_ASSERT_EQUAL(1, checkRole("Associate Engineer"));
  TEST_ASSERT_EQUAL(1, checkRole("Lead"));
  TEST_ASSERT_EQUAL(1, checkRole("Program Manager"));
  TEST_ASSERT_EQUAL(0, checkRole("Intern s"));
}

void test_newatt(void)
{
  TEST_ASSERT_EQUAL_INT(84, newatt(22));
  TEST_ASSERT_EQUAL_INT(46, newatt(12));
  TEST_ASSERT_EQUAL_INT(0, newatt(123));
  TEST_ASSERT_EQUAL_INT(0, newatt(1234));
}
void test_newlea(void)
{
  TEST_ASSERT_EQUAL_INT(12, newlea(12));
  TEST_ASSERT_EQUAL_INT(2, newlea(22));
  TEST_ASSERT_EQUAL_INT(0, newlea(123));
}

void test_salary(void)
{
  TEST_ASSERT_EQUAL_INT(9100, Sal_Cal(26, 350));
  TEST_ASSERT_EQUAL_INT(8100, Sal_Cal(18,450));
  TEST_ASSERT_EQUAL_INT(0, Sal_Cal(27,1500));
  TEST_ASSERT_EQUAL_INT(57600, Sal_Cal(24,2400));
}

void test_gratcal(void)
{
  TEST_ASSERT_EQUAL_INT(38460, Grat_Cal(100000,10));
  TEST_ASSERT_EQUAL_INT(5769, Grat_Cal(50000,3));
  TEST_ASSERT_EQUAL_INT(1153, Grat_Cal(30000,1));
  TEST_ASSERT_EQUAL_INT(1152, Grat_Cal(15000,2));
  TEST_ASSERT_EQUAL_INT(192300, Grat_Cal(250000,20));
}

void test_taxCal(void)
{
  TEST_ASSERT_EQUAL_INT(0, Tax_Cal(30000));
  TEST_ASSERT_EQUAL_INT(6000, Tax_Cal(50000));
  TEST_ASSERT_EQUAL_INT(8400, Tax_Cal(70000));
  TEST_ASSERT_EQUAL_INT(12000, Tax_Cal(100000));
}

void test_pfCal(void)
{
  TEST_ASSERT_EQUAL_FLOAT(1500, pf_Cal(30000));
  TEST_ASSERT_EQUAL_FLOAT(7500, pf_Cal(150000));
  TEST_ASSERT_EQUAL_FLOAT(500, pf_Cal(10000));
  TEST_ASSERT_EQUAL_FLOAT(0, pf_Cal(0));
}

int test_main(void)
{
  UNITY_BEGIN();

  //RUN_TEST(test_newadd);

  RUN_TEST(test_update);
  RUN_TEST(test_search_by_empid);

  RUN_TEST(test_checkDate);
  RUN_TEST(test_checkBU);
  RUN_TEST(test_checkRole);

  RUN_TEST(test_newatt);
  RUN_TEST(test_newlea);

  RUN_TEST(test_salary);
  RUN_TEST(test_gratcal);
  RUN_TEST(test_taxCal);
  RUN_TEST(test_pfCal);


  return UNITY_END();
}
