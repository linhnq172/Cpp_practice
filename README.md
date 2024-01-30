## C++ Programming Practice Exercises
> [List of exercises](https://shareprogramming.net/tong-hop-bai-tap-lap-trinh-huong-doi-tuong-trong-java/) is in Java but C++ is used to solve these problems. 👌

### 1. Exercise 1: 

A production unit consists of staff who are workers, engineers, and employees. Each staff member needs to manage the data: name, age, gender (male, female, other), address.
   + The workers have their own attribute: Level (1 to 10).
   + The engineers have their own attribute: Major.
   + The employees have their own attribute: Role.

Requirement 1: Build the classes *Worker*, *Engineer*, *Employee* inheriting from the class *Staff*.
Requirement 2: Build the class *Staff Management* implementing the methods to perform the following functions:
   1. Add new staff.
   2. Search by name.
   3. Display information about the list of staff.
   4. Exit the program.
  
### 2. Exercise 2:

### 3. Exercise 3:

### 4. Exercise 4:

### 5. Exercise 5:

Manage the customers who rent rooms in a hotel, each rent room needs the following information: *Number of days rented*, *room type* and *personal information*.

   + Knowing that room type A costs 500, type B costs 300 and room type C costs 100.  
   + For each individual, the following information needs to be managed: *Full name*, *age*, *identity card number*.

Requirement 1: Build the class Person to manage the personal information of the renters.  
Requirement 2: Build the class Hotel to manage the information about the rooms in the hotel.  
Requirement 3: Build the methods to add and delete customers by identity card number. Calculate the room rent for customers (identify customers by identity card number) based on the formula:  
> *Total cost = number of days rented * price of room type*.

### 13. Exercise 13:

The company’s employee management software is described as follows:

Each ***Employee*** in company is divided into 3 types: ***Experience***, ***Fresher***, ***Intern***.  
***Employee*** have the following attributes: *ID*, *fullName*, *birthday*, *phone*, *email*, *employeeType*, *employeeCount* and method *showInfo* to display information of that employee on the console screen.

In which:  
   + *EmployeeType* has corresponding values of **0: experience**, **1: fresher**, **2: intern**.  
   + *EmployeeCount* is used for users to count the number of employees in a batch of users entering new employees into the database. (each time the user adds a new employee, the *employeeCount* attribute of the Employee class will increase by 1).

In addition:  
   + For ***Experience***, there are additional attributes: number of years of experience (*expInYear*), professional skills (*proSkill*).  
   + For ***Fresher***, there are additional attributes: graduation time (*graduationDate*), graduation rank (*graduationRank*), graduation school (*education*).  
   + For ***Intern***, there are additional attributes: major (*major*), semester (*semester*), school name (*universityName*).

> Note: Depending on each type of employee, the *showInfo* method will be supplemented with the attributes of that type of employee.  

In addition, each employee must submit a professional certificate when they start working, the recruitment department needs to manage these certificates. An employee can have multiple certificates (***Certificate***).  
For each ***Certificate***, there are information such as: *certificatedID*, *certificateName*, *certificateRank*, *certificatedDate*.

Requirement:

1. Design and write code for the program above so that it follows the OOP model you learned, applying all 4 properties: encapsulation, inheritance, polymorphism, abstraction.

2. Define and write code constructor for all classes.

3. Define and write code for abstract methods, abstract classes, override/overload methods, static fields. 

4. Determine **Is A**, **Has A** relationship in the code design written above.

5. Use and explain the meaning of 2 keywords: super, this in the code design above (in **Java**).

6. **Downcast** an ***Employee*** object into ***Experience***, ***Fresher*** or ***Intern*** object. 

7. Write a function that allows adding, editing (Enter ID to identify an employee, if it exists, allow the user to edit the employee’s information), deleting (delete by ID) employees.

8.  Write functions to check the validity of the date of birth, email, name and phone number of the employee. Apply these functions to function number 7.

9. Write a program to find all intern employees.

10. Write a program to find all experience employees.

11. Write a program to find all fresher employees.

12. Create ***BirthdayException***, ***PhoneException***, ***EmailException***, ***FullNameException*** to throw exceptions in case the birthday, email, and phone the user enters are invalid.

### 15. Exercise 15:

