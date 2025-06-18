# Employee-Record-Manager
A C++ program that manages employee details, allowing users to input and display information for multiple employees. The program stores employee data, including ID, name, post, work experience, package, email, and contact number, and provides a simple and efficient way to manage employee records.

Working:
1. Class Definition: The program defines a class employee to store employee details, including:
    - id
    - name
    - post
    - experience (in months)
    - package
    - Mob (mobile number)
    - email_id
2. Input Function: The get_input() function is used to input employee details from the user.
3. Output Function: The get_output() function is used to display employee details.
4. Main Function: The main() function is the entry point of the program, where:
    - The user is prompted to enter the number of employees.
    - An array of employee objects is created to store the details of each employee.
    - A loop is used to input details for each employee using the get_input() function.
    - Another loop is used to display the details of each employee using the get_output() function.

Key Features:
1. Employee Details: The program stores and displays employee details, including ID, name, post, work experience, package, email, and contact number.
2. Multiple Employees: The program allows users to input and display details for multiple employees.
3. Simple and Efficient: The program provides a simple and efficient way to manage employee records.

Necessary Points:
1. Data Types: The program uses appropriate data types to store employee details, such as int for ID, string for name and post, float for experience, long long for package and mobile number.
2. Input Validation: Although not implemented in this program, input validation is essential to ensure that user input is valid and consistent.
3. Error Handling: Although not implemented in this program, error handling is essential to handle any errors that may occur during input or output operations.

Use Cases:
1. HR Management: The program can be used by HR departments to manage employee records and track employee details.
2. Employee Database: The program can be used to create a database of employee details, which can be useful for various purposes, such as payroll management, performance evaluation, and employee development.
