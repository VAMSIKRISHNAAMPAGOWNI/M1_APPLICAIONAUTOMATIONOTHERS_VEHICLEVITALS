/**
 * @file vCOMPANY.h
 * @author vamsi 
 * @brief 
 * @version 0.1
 * @date 24-11-2021
 * 
 * 
 */


#ifndef __COMPANY_H__
#define __COMPANY_H__
/**
 * @brief emun to check the status
 * 
 */
typedef enum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    NO_COMPANYACC_EXIST = 8,
    COMPANYID_DOESNT_EXISTS = 5,
    COMPANYID_EXIST = 1,
    NO_COMPANY_EXIST=3

}user;
/**
 * @brief structure for storing of data
 * 
 */
typedef struct info
{
    char Companyname[100];
    char phone_no[15];
    char mail[60];
    int User_id;
    char address[60];
    struct info *nt;
} info;

/**
 * @brief to add COMPANY details
 * 
 * @param acc 
 * @param Companyname 
 * @param phone_no 
 * @param mail 
 * @param User_id 
 * @param address 
 */
user add(info *acc, char *Companyname, char *phone_no, char *mail, int User_id, char *address);
/**
 * @brief to add a new COMPANY details
 * 
 * @param acc 
 * @param Companyname
 * @param phone_no 
 * @param mail 
 * @param User_id 
 * @param address 
 * @return info* 
 */
info *newadd(info *acc, char *Companyname, char *phone_no, char *mail, int User_id, char *address);

/**
 * @brief to check if COMPANY has entered correct name or not
 * 
 * @param Companyname 
 * @return int 
 */
int validname(char *Companyname);
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
user update(info *,int,int,int);
/**
 * @brief to search the COMPANY by Company id
 * 
 * @return user 
 */
user search_by_Companyid(info *, int , info *, int *);


/**
 * @brief to check the entered date
 * 
 * @return int 
 */
int checkRole(char *);
/**
 * @brief to search list of COMPANY by roles
 * 
 */
void searchRole(info *, char *);

user display(info *COMPANY);




#endif
