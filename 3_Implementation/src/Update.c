/**
 * @file update.c
 * @author vamsi
 * @brief 
 * @version 0.1
 * @date 24-11-2021
 * 
 * 
 */
#include<stdio.h>
#include<string.h>
#include"../inc/customer.h"
/**
 * @brief It is the search function to search an employee ID to update his/her details.
 * 
 * @param acc 
 * @param e_id 
 * @param temp 
 * @param see 
 * @return user 
 */
user search_by_empid(info *acc, int em_id, info *temp,int *see)
{
    info *p;
    p=acc;
    if(acc==NULL)
    {
        return NO_EMPACC_EXIST;
    }
    else
    {
        int flag=0;
        while(p!=NULL)
        {
            if(p->e_id == em_id)
            {
                flag=1;
                break;
            }
            p=p->nt;
        }
        if(flag==1)
        {
            *see=1;
            return SUCCESS;
            //printf("Employee ID exists %d \n:",acc->empid);
        }
        else
        {
            *see=0;
            return EMPID_DOESNT_EXISTS;
        }
        return SUCCESS;
    }
}
/**
 * @brief Update function to check and executed the option pressed for updating the details.
 * 
 * @param acc 
 * @param e_id 
 * @param check 
 * @param get 
 * @return user 
 */
user update(info *acc,int em_id,int check,int get)
{
    info *p;
    p=acc;
    if(acc==NULL)
    {
        return NO_EMPACC_EXIST;
    }
    else
    {
        int flag=0;
        while(p!=NULL)
        {
            if (p->e_id== em_id)
            {
               flag=1;
               break;
            }
            p=p->nt;
        }
        if(flag==1 && get == 0)
        {
            if(check == 1){
                char empname[100];
                scanf("%99s",empname);
                strcpy(p->empname,empname);
            }
            if(check == 2)
            {
                int salary;
                scanf("%d",&salary);
                p->salary=salary;
            }
            if(check == 3)
            {
                int leave;
                scanf("%d",&leave);
                p->leave=leave;
            }
            if(check == 4)
            {
                char address[100];
                scanf("%99s",address);
               strcpy(p->address,address);
            }
            if(check == 5)
            {
                char personal_mail_id[15];
                scanf("%14s",personal_mail_id);
               strcpy(p->personal_mail_id,personal_mail_id);
            }
            if(check == 6)
            {
                char phone_no[15];
                scanf("%14s",phone_no);
                strcpy(p->phone_no,phone_no);
            }
            if(check == 7)
            {
                char marital_status[11];
                scanf("%10s",marital_status);
               strcpy(p->marital_status,marital_status);
            }
            if(check == 8)
            {
                char BU[51];
                scanf("%50s",BU);
                strcpy(p->BU,BU);
            }
            if(check == 9)
            {
                char role[31];
                scanf("%30s",role);
                strcpy(p->role,role);
            }          
        }
        if(flag==1 && get == 1)
        {
            if(check == 1){
                char empname[100]="user1";
                scanf("%99s",empname);
                strcpy(p->empname,empname);
            }
            if(check == 2)
            {
                int salary=25000;
                scanf("%d",&salary);
                p->salary=salary;
            }
            if(check == 3)
            {
                int leave=8;
                scanf("%d",&leave);
                p->leave=leave;
            }
            if(check == 4)
            {
                char address[100]="pune";
                scanf("%99s",address);
               strcpy(p->address,address);
            }
            if(check == 5)
            {
                char personal_mail_id[15]="user@gmail";
                scanf("%14s",personal_mail_id);
               strcpy(p->personal_mail_id,personal_mail_id);
            }
            if(check == 6)
            {
                char phone_no[15]="66431536";
                scanf("%14s",phone_no);
                strcpy(p->phone_no,phone_no);

            }
            if(check == 7)
            {
                char marital_status[11]="M";
                scanf("%10s",marital_status);
               strcpy(p->marital_status,marital_status);
            }
            if(check == 8)
            {
                char BU[51]="ICP";
                scanf("%50s",BU);
                strcpy(p->BU,BU);
            }
            if(check == 9)
            {
                char role[31]="Lead";
                scanf("%30s",role);
                strcpy(p->role,role);
            }          
        }
        return SUCCESS;
    }
}
