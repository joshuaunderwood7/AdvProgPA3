CSCI 3320

Program Assignment 3

Spring 2013

Due Date:
Monday, April 1, 2013
Delivery
This is a multiple file program that must be archived using the tar command. Deliver a
single file named pa3.tar (all lowercase) as an attachment to an email that you send to the
class account 3320@orion.ucdenver.edu. Put PA3 in the subject field, and your name in
the body of the email.
Here is a tar command for this assignment.
tar –cvf pa3.tar pa3.cpp pa3functions.h pa3functions.cpp list.h list.tem
Program objectives
The objectives of this assignment are as follows.
An ability to use current techniques, skills, and tools necessary for computing practice
(ABET i).

Value
This program is worth 15 points. The distribution of points will be as follows.
Criterion                               Value
---------------------------------------------
Iterator                                1
List implementation                     4
Operators new and delete                1
Program style (see below)               2
Correct output with annotation          5
Error checking                          1
Greeting                                1

Problem
Create two integer linked lists using the template-enabled class list in the list.h header
file. The first linked list will contain the squares of the first 10 integers in order, starting
with 1. The second linked list will contain the values 2 and 4, in order. Concatenate the
second list onto the end of the first list, using the overloaded += operator from the class.
Next, the resulting combined list will be modified. And finally, the program output will
be various statistics and displays of the combined list, as described below.
Using the list class methods, perform these modifications to the list:
1. Remove the number 49 from the list.
2. Remove the first number from the list.
3. Push the number 6 on the front of the list.

Input
There is no input. The program creates the data in the list, as described under Problem.
Output
1. Output the number of items in the list.
2. Compute and output the sum of the numbers in the list.
3. Compute and output the average of the numbers in the list.
4. Using an iterator, output the contents of the list.
5. Using the << insertion operator, out the contents of the list.

Class requirements
Write a general template and a specialization for a list class, based on list.h. Your list
classes must be based on dynamic arrays that are allocated using operator new. In
addition, your classes must support all the methods declared in the list.h header. Be sure
your class frees up the allocated memory via the list class destructor.

Program requirements
1. Your main() function should allocate the needed classes and call functions to do the
needed operations. Have the list-modification operations in one function and the
output operations in another function.
2. Create the C++ implementation for all methods declared in list.h.
3. Present the user with a greeting.
4. Instantiate the two linked lists with the required data.
5. Make the required listed modifications to the list.
6. Produce the results as described previously under Output.

Sample output
greetings user!
number of elements in combined list: 11
sum of elements in combined list: <number>
average of elements in combined list: <number>
and so on…




