#include "../inc/vCUSTOMER.h"
//#include "../inc/calculatorhead.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
#include <stdlib.h>

/*char Custname[100];
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
*/
info *(*fp1)(info *, char *, char *, char *, int, char *, char *, char *, char *, char *, char *, float, int, int, int, char *, char *, float, char *, int, int, int, int, char *, int, int) = newadd;
user (*fp2)(info *, int, int, int) = update;
user (*fp3)(info *, int, info *, int *) = search_by_Custid;
int (*fp4)(int) = newatt;
int (*fp5)(int) = newlea;
user (*fp6)(info *) = display;

int main()
{
    info *Cust = NULL;
    info temp = {0};
    int see;
    int ch;
    while (1)
    {
        printf("******Vehicle vitals******\n");
        printf("***********WELCOME*************\n");
        printf("1: Add/Remove CUSTOMER information \n");
        printf("2: Update CUSTOMER Information\n");
        printf("3: Search CUSTOMER List\n");
        printf("4: Attendance and Leave\n");
        printf("5: CUSTOMER Calculator\n");
        printf("6: Display CUSTOMER Information\n");
        scanf("%d", &ch);
        switch (ch)
        {
            int e_id;
            char Custname[100];
            char phone_no[15];
            char mail[60];
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
        case 1:
            printf("1: Add new CUSTOMER details.\n 2: Add experienced CUSTOMER details. \n 3: Delete CUSTOMER details.\n");
            printf("Enter the choice: \n");
            int option;
            scanf("%d", &option);
            switch (option)
            {
            case 1:
            {
                printf("Enter CUSTOMER id: \n");
                scanf("%d", &e_id);
                printf("Enter CUSTOMER name: \n");
                scanf("%99s", Custname);
                if (validname(Custname) == 0)
                {
                    printf("INCORRECT NAME \n");
                    break;
                }
                printf("Enter CUSTOMER Phone Number: \n");
                scanf("%14s", phone_no);
                if (validphno(phone_no) == 0)
                {
                    printf("INCORRECT PHONE NUMBER \n");
                    break;
                }
                printf("Enter CUSTOMER mail ID: \n");
                scanf("%59s", mail);
                if (validmail(mail) == 0)
                {
                    printf("INCORRECT MAIL ID \n");
                    break;
                }
                printf("Enter CUSTOMER BU: \n");
                scanf("%59s", BU);
                if (checkBU(BU) == 0)
                {
                    printf("INCORRECT BU");
                    break;
                }
                printf("Enter CUSTOMER Role: \n");
                scanf("%59s", role);
                if (checkRole(role) == 0)
                {
                    printf("INCORRECT ROLE");
                    break;
                }
                printf("Enter CUSTOMER permanent address: \n");
                scanf("%59s", address);
                printf("Enter CUSTOMER citizenship: \n");
                scanf("%14s", citizenship);
                printf("Enter CUSTOMER Adhaar Number: \n");
                scanf("%49s", adhaar);
                if (validadhaar(adhaar) == 0)
                {
                    printf("INCORRECT ADHAAR NUMBER \n");
                    break;
                }
                printf("Enter CUSTOMER PAN : \n");
                scanf("%19s", pan);
                printf("Enter CUSTOMER CTC: \n");
                scanf("%f", &ctc);
                printf("Enter CUSTOMER joining date: \n");
                scanf("%d", &day);
                printf("Enter CUSTOMER joining month: \n");
                scanf("%d", &month);
                printf("Enter CUSTOMER joining year: \n");
                scanf("%d", &year);
                printf("Enter CUSTOMER Graduation CGPA: \n");
                scanf("%f", &cgpa);
                printf("Enter CUSTOMER Graduation college: \n");
                scanf("%39s", gradclg);
                expyrs = 0;
                strcpy(prevorg,"NULL");
                printf("****FRESHER CUSTOMER DETAILS ADDED****\n");
                Cust = (*fp1)(Cust, Custname, phone_no, mail, e_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
                break;
            }
            case 2:
            {
                printf("Enter CUSTOMER id: \n");
                scanf("%d", &e_id);
                printf("Enter CUSTOMER name: \n");
                scanf("%99s", Custname);
                if (validname(Custname) == 0)
                {
                    printf("INCORRECT NAME \n");
                    break;
                }
                printf("Enter CUSTOMER Phone Number: \n");
                scanf("%14s", phone_no);
                if (validphno(phone_no) == 0)
                {
                    printf("INCORRECT PHONE NUMBER \n");
                    break;
                }
                printf("Enter CUSTOMER mail ID: \n");
                scanf("%59s", mail);
                if (validmail(mail) == 0)
                {
                    printf("INCORRECT MAIL ID \n");
                    break;
                }
                printf("Enter CUSTOMER BU: \n");
                scanf("%59s", BU);
                if (checkBU(BU) == 0)
                {
                    printf("INCORRECT BU");
                    break;
                }
                printf("Enter CUSTOMER Role: \n");
                scanf("%59s", role);
                if (checkRole(role) == 0)
                {
                    printf("INCORRECT ROLE");
                    break;
                }
                printf("Enter CUSTOMER permanent address: \n");
                scanf("%59s", address);
                printf("Enter CUSTOMER citizenship: \n");
                scanf("%14s", citizenship);
                printf("Enter CUSTOMER Adhaar Number: \n");
                scanf("%49s", adhaar);
                if (validadhaar(adhaar) == 0)
                {
                    printf("INCORRECT ADHAAR NUMBER \n");
                    break;
                }
                printf("Enter CUSTOMER PAN : \n");
                scanf("%19s", pan);
                printf("Enter CUSTOMER CTC: \n");
                scanf("%f", &ctc);
                printf("Enter CUSTOMER joining date: \n");
                scanf("%d %d %d", &day, &month, &year);
                printf("Enter CUSTOMER Graduation CGPA: \n");
                scanf("%f", &cgpa);
                printf("Enter CUSTOMER Graduation college: \n");
                scanf("%39s", gradclg);
                printf("Enter number of companies worked: \n");
                scanf("%d", &compworked);
                printf("Enter years of experience: \n");
                scanf("%d", &expyrs);
                printf("Enter previously worked organisation: \n");
                scanf("%39s", prevorg);
                printf("****EXPERIENCED CUSTOMER DETAILS ADDED****\n");
                Cust = (*fp1)(Cust, Custname, phone_no, mail, e_id, BU, role, address, citizenship, adhaar, pan, ctc, month, day, year, marital_status, gradclg, cgpa, prevorg, expyrs, compworked, salary, leave, personal_mail_id, noofdatt, noofleaves);
                break;
            }

            case 3:
            {
                int em_id;
                printf("Enter CUSTOMER id to be deleted: \n");
                scanf("%d", &em_id);
                user id = (*fp3)(Cust, em_id, &tCust, &see);
                printf("CUSTOMER details is successfully deleted \n");
            }
            default:
                printf("Exit\n");

                break;
            }
            break;

        case 2:
            printf("1.Update CUSTOMER Details.\n");
            printf("Press 0 to exit.\n");
            printf("Enter the choice: \n");
            int op;
            scanf("%d", &op);
            switch (op)
            {
            case 1:
            {
                printf("Enter CUSTOMER ID:\n");
                scanf("%d", &e_id);
                user id1 = (*fp3)(Cust, e_id, &tCust, &see);
                if (id1 == CustID_DOESNT_EXISTS)
                {
                    printf("CUSTOMER ID doesnot exsist\n\n");
                    break;
                }
                if (see = 1)
                {
                    int choice;
                    printf("Choose any of the below options you want to update: ");
                    printf("1. Update Name; \n");
                    printf("2. Update Salary: \n");
                    printf("3. Update Leaves: \n");
                    printf("4. Update Address: \n");
                    printf("5. Update Personal MailID: \n");
                    printf("6. Update Phone number: \n");
                    printf("7. Update Marital Status: \n");
                    printf("8. Update BU: \n");
                    printf("9. Update Role: \n");
                    scanf("%d", &choice);
                    user id;
                    switch (choice)
                    {
                    case 1:
                        printf("Enter the name: \n");
                        //scanf("%99s", Custname);
                        id = (*fp2)(Cust, e_id, choice, 0);
                        if (validname(Custname) == 0)
                        {
                            printf("INCORRECT NAME \n");
                            break;
                        }
                        break;
                    case 2:
                        printf("Enter the salary: \n");
                        id = (*fp2)(Cust, e_id, choice, 0);
                        //scanf("%d", &salary);
                        break;
                    case 3:
                        printf("Enter the leave: \n");
                        //scanf("%d", &leave);
                        id = (*fp2)(Cust, e_id, choice, 0);
                        break;
                    case 4:
                        printf("Enter the address: \n");
                        //scanf("%99s", address);
                        id = (*fp2)(Cust, e_id, choice, 0);
                        break;
                    case 5:
                        printf("Enter the personal mail id: \n");
                        //scanf("%14s", personal_mail_id);
                        /*if (validmail(personal_mail_id) == 0)
                        {
                            printf("INCORRECT MAIL ID \n");
                            break;
                        }*/
                        id = (*fp2)(Cust, e_id, choice, 0);
                        break;
                    case 6:
                        printf("Enter the phone number: \n");
                        //scanf("%s", phone_no);
                        /*if (validphno(phone_no) == 0)
                        {
                            printf("INCORRECT PHONE NUMBER \n");
                            break;
                        }*/
                        id = (*fp2)(Cust, e_id, choice, 0);
                        break;
                    case 7:
                        printf("Enter the marital status: \n");
                        //scanf("%50s", marital_status);
                        id = (*fp2)(Cust, e_id, choice, 0);
                        break;
                    case 8:
                        printf("Enter the BU: \n");
                        //scanf("%50s", BU);
                        /*if (checkBU(BU) == 0)
                        {
                            printf("INCORRECT BU");
                            break;
                        }*/
                        id = (*fp2)(Cust, e_id, choice, 0);
                        break;
                    case 9:
                        printf("Enter the role: \n");
                        //scanf("%30s", role);
                        if (checkRole(role) == 0)
                        {
                            printf("INCORRECT ROLE");
                            break;
                        }
                        id = (*fp2)(Cust, e_id, choice, 0);

                        break;
                    }
                    //user id = (*fp2)(Cust, e_id, choice, 0);
                    printf("\n\n***DETAILS UPDATED \n\n");
                    break;
                }
                else
                {
                    printf("\n\n NO RECORD FOUND \n\n");
                    break;
                }
            }
            }
            break;

        
            default:
                printf("exit\n");
                break;
            }
            break;
       
        /* default:
        {
            break;
        }*/
        printf("\n1 to continue\n");
        printf("0 to stop");
        int enter;
        scanf("%d", &enter);
        if (enter == 0)
        {
            break;
        }
    }
    return 0;
}


