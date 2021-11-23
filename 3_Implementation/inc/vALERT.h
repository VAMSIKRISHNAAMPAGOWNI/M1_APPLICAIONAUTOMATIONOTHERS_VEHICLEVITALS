/**
 * @file vALERT.h
 * @author vamsi 
 * @brief 
 * @version 0.1
 * @date 24-11-2021
 * 
 * 
 */


#ifndef __ALERT_H__
#define __ALERT_H__
/**
 * @brief emun to check the status
 * 
 */
typedef enum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    NO_ALERTACC_EXIST = 8,
    ALERTID_DOESNT_EXISTS = 5,
    ALERTID_EXIST = 1,
    NO_ALERT_EXIST=3

}user;
/**
 * @brief structure for storing of data
 * 
 */
typedef struct info
{
    char Aleartname[100];
    char VIN[15];
    int Notification;
    int Aleart_id;
    char Aleartinfo1[60];
	char Aleartinfo2[60];
	char Aleartinfo3[60];
	char MalertDesc[60];
	int ReadFlag;
	char CreatedBy[60];
	char LastUpdateBy[60];
	struct info *nt;
} info;

/**
 * @brief to add ALERT details
 * 
 * @param acc 
 * @param Aleartname 
 * @param phone_no 
 * @param mail 
 * @param Aleart_id 
 * @param address 
 */
user add(info *acc, char *Aleartname, char *VIN, char *Notification, int Aleart_id, char *address,char Aleartinfo1[60];char *Aleartinfo2[60], char *Aleartinfo3[60],  char *MalertDesc[60], int *ReadFlag, char *CreatedBy[60], char *LastUpdateBy[60]);
/**
 * @brief to add a new ALERT details
 * 
 * @param acc 
 * @param Aleartname
 * @param phone_no 
 * @param mail 
 * @param Aleart_id 
 * @param address 
 * @return info* 
 */
info *newadd(info *acc, char *Aleartname, char *phone_no, char *mail, int Aleart_id, char *address);

/**
 * @brief to check if ALERT has entered correct name or not
 * 
 * @param Aleartname 
 * @return int 
 */
int validname(char *Aleartname);
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
 * @brief to search the ALERT by ALERT id
 * 
 * @return user 
 */
user search_by_Alertid(info *, int , info *, int *);


/**
 * @brief to check the entered date
 * 
 * @return int 
 */
int checkRole(char *);
/**
 * @brief to search list of ALERT by joining date
 * 
 */
void searchJoiningDate(info *, int, int, int);
/**
 * @brief to search list of ALERT by roles
 * 
 */
void searchRole(info *, char *);

user display(info *ALERT);



#endif
