/**
 * @file vCUSTOMER.h
 * @author vamsi 
 * @brief 
 * @version 0.1
 * @date 24-11-2021
 * 
 * 
 */


#ifndef __CUSTOMER_H__
#define __CUSTOMER_H__
/**
 * @brief emun to check the status
 * 
 */
typedef enum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    NO_CUSTOMERACC_EXIST = 8,
    CUSTOMERID_DOESNT_EXISTS = 5,
    CUSTOMERID_EXIST = 1,
    NO_CUSTOMER_EXIST=3

}user;
/**
 * @brief structure for storing of data
 * 
 */
typedef struct info
{
    char Ownername[100];
    char phone_no[15];
    char mail[60];
    int Owner_id;
    char address1[60];
	char address2[60];
	struct info *nt;
} info;

/**
 * @brief to add CUSTOMER details
 * 
 * @param acc 
 * @param Ownername 
 * @param phone_no 
 * @param mail 
 * @param Owner_id 
 * @param address 
 */
user add(info *acc, char *Ownername, char *phone_no, char *mail, int Owner_id, char *address);
/**
 * @brief to add a new CUSTOMER details
 * 
 * @param acc 
 * @param Ownername
 * @param phone_no 
 * @param mail 
 * @param Owner_id 
 * @param address 
 * @return info* 
 */
info *newadd(info *acc, char *Ownername, char *phone_no, char *mail, int Owner_id, char *address);

/**
 * @brief to check if CUSTOMER has entered correct name or not
 * 
 * @param Ownername 
 * @return int 
 */
int validname(char *Ownername);
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
 * @brief to search the CUSTOMER by CUSTOMER id
 * 
 * @return user 
 */
user search_by_Customerid(info *, int , info *, int *);


/**
 * @brief to check the entered date
 * 
 * @return int 
 */
int checkRole(char *);
/**
 * @brief to search list of CUSTOMER by joining date
 * 
 */
void searchJoiningDate(info *, int, int, int);
/**
 * @brief to search list of CUSTOMER by roles
 * 
 */
void searchRole(info *, char *);

user display(info *CUSTOMER);



#endif
