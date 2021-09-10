# TEST PLAN:

##  High level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       |Check if the User selections an option from the available choices, and if not print an "INVALID" message|User's choice, an integer | SUCCESS| SUCCESS|Requirement based |
|  H_02       |Check if the array size and the array elements are matched|  Array size and Elements of the Array|SUCCESS|SUCCESS|Boundary based   |
|  H_03       |Check if the selected option triggers the respective function|User's choice, an integer|SUCCESS|SUCCESS|Required based  |
|  H_04       |Check if the output is displayed properly|User's choice, Array size and Elements of the Array|Sorted Array elements|Sorted Array elements|Required based  |
| H_05        |Check if the system asks the user for repeating the process and exits the system when choosed|User's choice|SUCCESS|SUCCESS|Scenario based  |


## Low level test plan

| **Test ID** | **Description**                                              | **Expected Input** | **Expected Output** | **Actual Output** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       |When choosing from the options, check if the input is valid or invalid|  User's Choice|Invalid Message/ Invoke the process|SUCCESS|Scenario based |
|  L_02       |Check that the array size is not negative|Size of the array| Invalid Message|Invalid Message|Scenario based    |
|  L_03       |Check that the array size is not zero| Size of the array|Empty Array Message|Empty Array Message|Scenario based    |
|  L_04       |Check that the array elements are more than the size of the array| Array Elements|Array out of bounds Message|Array  out of Message|Boundary based    |
