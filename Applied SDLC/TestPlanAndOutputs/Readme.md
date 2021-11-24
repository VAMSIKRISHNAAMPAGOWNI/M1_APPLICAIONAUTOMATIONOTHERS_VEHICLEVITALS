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

