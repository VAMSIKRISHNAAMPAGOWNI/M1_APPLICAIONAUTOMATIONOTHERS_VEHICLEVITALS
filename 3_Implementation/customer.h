/**
 * @file customer.h
 * @author vamsi 
 * @brief 
 * @version 0.1
 * @date 24-11-2021
 * 
 * 
 */


#ifndef __CUST_H__
#define __CUST_H__
/**
 * @brief emun to check the status
 * 
 */
typedef enum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    NO_EMPACC_EXIST = 8,
    EMPID_DOESNT_EXISTS = 5,
    EMPID_EXIST = 1,
    NO_EMPLOYEE_EXIST=3

}user;
/**
 * @brief structure for storing of data
 * 
 */
typedef struct info
{
    char empname[100];
    char phone_no[15];
    char mail[60];
    int e_id;
    char BU[60];
    char role[60];
    char address[60];
    char citizenship[15];
    char adhaar[50];
    char pan[20];
    float ctc;
    int month;
    int day;
    int year;
    char marital_status[20];
    char gradclg[40];
    float cgpa;
    char prevorg[40];
    int expyrs;
    int compworked;
    int salary;
    int leave;
    char personal_mail_id[15];
    int noofdatt;
    int noofleaves;
    struct info *nt;
} info;

/**
 * @brief to add employee details
 * 
 * @param acc 
 * @param empname 
 * @param phone_no 
 * @param mail 
 * @param em_id 
 * @param BU 
 * @param role 
 * @param address 
 * @param citizenship 
 * @param adhaar 
 * @param pan 
 * @param ctc 
 * @param month 
 * @param day 
 * @param year 
 * @param marital_status 
 * @param gradclg 
 * @param cgpa 
 * @param prevorg 
 * @param expyrs 
 * @param compworked 
 * @param salary 
 * @param leave 
 * @param personal_mail_id 
 * @param noofdatt 
 * @param noofleaves 
 * @return user 
 */
user add(info *acc, char *empname, char *phone_no, char *mail, int em_id, char *BU, char *role, char *address, char *citizenship, char *adhaar, char *pan, float ctc, int month, int day, int year, char *marital_status, char *gradclg, float cgpa, char *prevorg, int expyrs, int compworked, int salary, int leave, char *personal_mail_id, int noofdatt,int noofleaves);
/**
 * @brief to add a new employee details
 * 
 * @param acc 
 * @param empname 
 * @param phone_no 
 * @param mail 
 * @param em_id 
 * @param BU 
 * @param role 
 * @param address 
 * @param citizenship 
 * @param adhaar 
 * @param pan 
 * @param ctc 
 * @param month 
 * @param day 
 * @param year 
 * @param marital_status 
 * @param gradclg 
 * @param cgpa 
 * @param prevorg 
 * @param expyrs 
 * @param compworked 
 * @param salary 
 * @param leave 
 * @param personal_mail_id 
 * @param noofdatt 
 * @param noofleaves 
 * @return info* 
 */
info *newadd(info *acc, char *empname, char *phone_no, char *mail, int em_id, char *BU, char *role, char *address, char *citizenship, char *adhaar, char *pan, float ctc, int month, int day, int year, char *marital_status, char *gradclg, float cgpa, char *prevorg, int expyrs, int compworked, int salary, int leave, char *personal_mail_id, int noofdatt,int noofleaves);

/**
 * @brief to check if employee has entered correct name or not
 * 
 * @param empname 
 * @return int 
 */
int validname(char *empname);
/**
 * @brief to check phone no
 * 
 * @param phone_no 
 * @return int 
 */
int validphno(char *phone_no);
/**
 * @brief to check the mail id
 * 
 * @param mail 
 * @return int 
 */
int validmail(char *mail);
/**
 * @brief to check the aadhar number
 * 
 * @param adhaar 
 * @return int 
 */
int validadhaar(char *adhaar);

//update header


/**
 * @brief to update details of information
 * 
 * @return user 
 */
user update(info *,int,int,int);
/**
 * @brief to search the employee by employee id
 * 
 * @return user 
 */
user search_by_empid(info *, int , info *, int *);


/**
 * @brief to check the entered date
 * 
 * @return int 
 */
int checkDate(int, int , int );
/**
 * @brief to check the BU whether it is entered correctly or not
 * 
 * @return int 
 */
int checkBU(char *);
/**
 * @brief to check the role whether it is entered correctly or not
 * 
 * @return int 
 */
int checkRole(char *);
/**
 * @brief to search list of employees by joining date
 * 
 */
void searchJoiningDate(info *, int, int, int);
/**
 * @brief to search list of employees by roles
 * 
 */
void searchRole(info *, char *);
/**
 * @brief to search list of employees by BU
 * 
 */
void searchBU(info *, char *);

/**
 * @brief to calculate attendance percentage
 * 
 * @return int 
 */
int newatt(int );
/**
 * @brief to check how many leaves are left
 * 
 * @return int 
 */
int newlea(int );

/**
 * @brief to display an employee information by entering employee id 
 * 
 * @param emp 
 * @return user 
 */
user display(info *emp);

/**
 * @brief to calculate PF
 * 
 * @param s_p_m 
 * @return float 
 */
float pf_Cal(long int s_p_m);
/**
 * @brief to calculate tax
 * 
 * @param s_p_m 
 * @return int 
 */
int Tax_Cal(long int s_p_m);
/**
 * @brief to calculate Gratutity
 * 
 * @param d_m_s 
 * @param n_y 
 * @return int 
 */
int Grat_Cal(long int d_m_s, int n_y);
/**
 * @brief to calculate per month salary
 * 
 * @param n_d_a 
 * @param s_p_d 
 * @return int 
 */
int Sal_Cal(int n_d_a, int s_p_d);


#endif
