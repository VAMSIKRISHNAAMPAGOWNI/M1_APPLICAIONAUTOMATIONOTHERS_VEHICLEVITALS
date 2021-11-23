/**
 * @file vVehicle.h
 * @author vamsi 
 * @brief 
 * @version 0.1
 * @date 24-11-2021
 * 
 * 
 */


#ifndef __VEHICLE_H__
#define __VEHICLE_H__
/**
 * @brief emun to check the status
 * 
 */
typedef enum user{
    SUCCESS = 0,
    NO_DETAILS_EXIST=2,
    NO_VEHICLEACC_EXIST = 8,
    VEHICLEID_DOESNT_EXISTS = 5,
    VEHICLEID_EXIST = 1,
    NO_VEHICLE_EXIST=3

}user;
/**
 * @brief structure for storing of data
 * 
 */
typedef struct info
{
    char Vehiclename[100];
    int Vehicle_id;
    char Description[60];
    struct info *nt;
} info;

/**
 * @brief to add VEHICLE details
 * 
 * @param Vehiclename 
 * @param Vehicle_id 
 * @param Description
 */
user add(info *acc, char *Vehiclename, int Vehicle_id, char *Description);
/**
 * @brief to add a new VEHICLE details
 * 
 * @param acc 
 * @param Vehiclename
 * @param Vehicle_id 
 * @param Description
 
info *newadd(info *acc, char *Vehiclename, int Vehicle_id, char *Description);

/**
 * @brief to check if VEHICLE has entered correct name or not
 * 
 * @param Vehiclename 
 * @return int 
 */
int validname(char *Vehiclename);

//update header


/**
 * @brief to update details of information
 * 
 * @return user 
 */
user update(info *,int,int,int);
/**
 * @brief to search the VEHICLE by Vehicle id
 * 
 * @return user 
 */
user search_by_Vehicleid(info *, int , info *, int *);
/**
 * @brief to check the BU whether it is entered correctly or not
 * 
 * @return int 
 */
int checkDescription(char *);


 
user display(info *VEHICLE);




#endif
