# Requirements
* Address the needs of Customer & Company on a unified platform by providing a continuous  stream of actionable insights based on analysis of data.
* The data collected includes vital vehicle health parameters like:
   * Engine RPM
   * Coolant temperature
   * Fuel System Status
   * Speed of Vehicle
* This data is analyzed, and insights are generated to enable the stake holders to take well informed decisions and actions.
# 4W AND 1H

## WHY

  * Helps customer experience the `pulse` of their fleet on a real time basis.
  * Also helps the organization to transform the way it conceives, designs, manufactures and sells the products.
  * Gain Deeper insights through Product and Customer insights. 
 
 
## WHAT
  
  * Radically transform fleet operations by addressing the needs of all the stakeholders.
  * Provide unified platform by providing a continuous stream of actionable insights based on analysis of real-time data.
  * The data collected includes vital vehicle health parameters like.
    * Engine RPM
    * Coolant temperature
    * Fuel System Status
    * Speed of Vehicle
  
  
## WHERE
 
  * Fleet manager.
  * Service engineer.
  * Dealer.
  * End User.
  
## WHEN
  
  * Realtime information when vehcile is on Road.
  * Vehicle service. 
  * Targeted Martketing.
  
## HOW
  
  * This an IoT driven Telematics solution, helps in vehicle health tracking and notifies the customer in advance.   

#  High level requirements
  
  
  ### ID  ------------   DESCRIPTION
  * HR01          -----Add Arrival Of Vehicle service.
  * HR02          -----Add Total No. Of Vehicles check.
  * HR03          -----Add Total No. Of Cars.
  * HR04         ------Add Total No. Of service.
  * HR05         ------Add Display Vehicles access.
  * HR06         ------Add Departure Of Vehicle.
# Requirements


## Technologies and Tools Used:
  
  * Development Tool: Github Website
  * Languages Used: C Language
  * Software : Visual studios
# SWOT Analysis

  ### S-> Strength
  
  * It is an automate application method ,travel and service.
    
  ### W-> Weaknes

  * Though it is an Automated process, it is not fully automated.
    
  ### O-> Opportunities
  
  * It will Increase the company efficiency.
  * Requires some less conflits in access etc...
  
  ### T-> Threads

  * By using this automation process, sometimes system might get corrupt.
  * Provide false Information about the Customer.

# Low level requirements
 
 
 #### LR01          ---.Air conditioning system inspection.
 #### LR02          ---Radiator and coolant hose checked.
# Identify the features


  * Add Arrival Of Vehicle Service.
  * Add Total No. Of Vehicles check.
  * Add Total No. Of Cars .
  * Add Total No. Of  service.
  * Add Display Vehicles access.
  * Add Departure Of Vehicle.
  * Vehicle exit.
## Test Plan

## High-Level Test Plan

| Test ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----------- | ------- | ------- | ------------- | ------------ |
| HL_01 | Check Company login | user | SUCCESS | SUCCESS | REQUIREMENT BASED |
| HL_02 | Check vehical information details | pass | SUCCESS | SUCCESS  | REQUIREMENT BASED |
| HL_03 | Check vehical history | click enter  | SUCCESS | login successfully |REQUIREMENT BASED |
| HL_04 | Check Alert notification |  warring notification Of Vehicle vitals | display  notification | SUCCESS | REQUIREMENT BASED |
| HL_05 | Check Vehicle vitals details |  Validate vehicle vitals details  | Display vital information| SUCCESS | REQUIREMENT BASED |
| HL_06 | Check if customer can login and check vehical history | display notification | Display vehicle history| SUCCESS | TECHNICAL |


## Low-Level Test Plan

| Test ID | HL_ID | Description | Exp I/P | Exp O/P | Actual Output | Type of Test |
| ------- | ----- | ----------- | ------- | ------- | ------------- | ------------ |
| LL_01 | HL_01 | Check if the user has entered correct loginId is valid or not | loginID | success | SUCCESS  | REQUIREMENT BASED |
| LL_02 | HL_02 | Check if the user has entered correct password is valid o not | password | success | SUCCESS | REQUIREMENT BASED |
| LL_03 | HL_04, HL_05, HL_06| Check the user can access the vehicel information | vital details| success | SUCCESS (Manual) | REQUIREMENT BASED |
| LL_04 | HL_04 | Check  the user has entered the vehicle | user has notification information | success | SUCCESS (Manual) | REQUIREMENT BASED |




    

