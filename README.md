# Some-C-Exercises
A repo to store all of my C++ exercises. The beginner exercises are at the top of the list and they increase in difficulty as the list continues. 
Feel free to use this repo to practice for yourself! 

## Table of Contents
* [Basic Intro](#basic-intro)
    * [HelloWorld](#helloworld)
    * [MilesPerGallon](#milespergallon)
    * [WeightConversion](#weightconversion)
    * [Enhancedmpg](#enhancedmpg)
    * [IfElseRand](#ifelserand)
    * [AmpsCalculation](#ampscalculation)
    * [Currency](#currency)
    * [Salary](#salary)
    * [Whileloop](#whileloop)
    * [MathTutor](#mathtutor)
    * [GeometryCalculator](#geometrycalculator)
    * [ModuloTeam](#moduloteam)
* [Using Files](#using-files)
    * [WritingToFile](#writingtofile)
    * [ReadingToFile](#readingtofile)
    * [WriteAndRead](#writeandread)
* [Structures](#structures)
    * [StructureIntro](#structureintro)

## [Basic Intro](./Basics)
This goes over the basic intro to C++ as exercises I've done. Most of the activities include basic math, learning about int/float/double/etc, validation, conversion, random numbers, switch statements,while loops, if... else if, and modulus.

### [HelloWorld](./Basics/HelloWorld.cpp)
This program prints a simple message to the user.  
Output: 
```
Hello World
I haven't written in C++ in over a year
So this 	 is me trying to 	 write some basic  	 code from what I remember
```
### [MilesPerGallon](./Basics/MilesPerGallon.cpp)
This program calculates of much miles per gallon a vehicle gets.  
Output: 
```
The car drove 400 miles on 20 gallons of gas.
It got 20 miles per gallon.
```
### [WeightConversion](./Basics/WeightConversion.cpp)
This program prompts the user for a weight in pounds and converts the weight to kilograms.  
Output:
```
Enter the weight in pounds: 140
140 pounds is 63.3484 in kilograms.
```
### [Enhancedmpg](./Basics/Enhancedmpg.cpp)
This program calculates how many miles per gallon a vehicle gets by using rand() and stores the first and last name of the driver.  
Output:
```
Enter the driver's first name: Belisarius
Enter the driver's last name: Arius
Enter gas tank capacity in gallons: 30

Belisarius Arius drove 132.00 miles on 30.00 gallons of gas.
The car got 4.40 miles per gallon.
```
### [IfElseRand](./Basics/IfElseRand.cpp)
This program determines ticket price based on age by using a if... else if statements to check the user's age and what price they will pay.

Output 1:
```
Movie Ticket Calculator
What is your age? 4
Enter the ticket price: 9

You get in for free kiddo!
Your ticket price is 0.00
```
Output 2:
```
Movie Ticket Calculator
What is your age? 18
Enter the ticket price: 7

You pay half price.
Your ticket price is 3.50
```
Output 3:
```
Movie Ticket Calculator
What is your age? 24
Enter the ticket price: 13.65

You pay full price.
Your ticket price is 13.65
```
### [AmpsCalculation](./Basics/AmpsCalculation.cpp)
This program prompts the user for two double variables, thevoltage (V) and resistence (R) which will then calculate and display the current amps (I) and the power dissipation in watts (P).  
Output:
```
Enter the voltage: 120
Enter the resistance: 9.29
Given a voltage of: 120 and resistance of: 9.29
The amps are: 12.92
The power is: 1550.05
```
### [Currency](./Basics/Currency.cpp)
This program will convert U.S. dollar amounts to Japanese yen and to Euros.  
Output:
```
Enter amount in dollars($): 167.92

$167.92 = 18699.57 Yen
$167.92 = 154.49 Euros
```
### [Salary](./Basics/Salary.cpp)
Computes the raise and new salary for an employee. The input to the program includes the current annual salary for the employee and a number indicating the performance rating (1=excellent, 2=good, and 3=poor). An employee with a rating of 1 will receive a 6% raise, an employee with a rating of 2 will receive a 4% raise, and one with a rating of 3 will receive a 1.5% raise. All other ratings are invalid and the raise will be set to 0 and a message of whether you are promoted will be displayed.  
Output:
```
Enter the current annual salary: 87391
Enter the performance rating: 
1=excellent, 2=good, and 3=poor.  
Rating is : 2
Amount of your current salary:	$ 87391.00
Amount of your raise: 		$  3495.64
Your new expected salary: 	$ 90886.64
You are getting promoted!
```
### [WhileLoop](./Basics/WhileLoop.cpp)
This program uses a while loop to print a message as many times as the limit is set to.  
Output:
```
How many times would you like to tell the people of Citadel that this is your favorite store? 5
1 My name is commander shepard and this is my favorite store on the Citadel! odd
2 My name is commander shepard and this is my favorite store on the Citadel! even
3 My name is commander shepard and this is my favorite store on the Citadel! odd
4 My name is commander shepard and this is my favorite store on the Citadel! even
5 My name is commander shepard and this is my favorite store on the Citadel! odd
You told the people of Citadel 5 times.
The sum of the numbers from 1 to 5 is 15
```
### [MathTutor](./Basics/MathTutor.cpp)
This program generates two random integer numbers between 10 and 49 that are displayed as an addition problem. The program waits for the user's input and displays a message is it is correct. If the input is incorrect it notifies the user as well as displaying the correct answer.  
Output 1:  
```
Math Flash Card
---------------

    12
+
    26
  ----
    38
Congrats! That is correct!
```  
Output 2:    
```
Math Flash Card
---------------

    28
+
    27
  ----
    56
Sorry, the correct answer is 55
```
### [GeometryCalculator](./Basics/GeometryCalculator.cpp)
This program prompts the user to enter a menu choice. Then based on the user's choice use a switch statement to display the information. Users will be able to calculate the area of a circle/rectangle/triangle or be able to quit. This exercise covers validation to check if the user inputs a number outside the choices in the menu as well as checking if the user is inputing a positive number for the value.  
Output 1:  
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 1

Enter the circle's radius: -2
Please only enter a positive value for the radius. 
Thank you for using my Geometry Calculator!
```
> Rerun code 
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 1

Enter the circle's radius: 10
The area of the circle is 314.159
Thank you for using my Geometry Calculator!
```  
Output 2:  
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 2

Enter the rectangle's length: 20
Enter the rectangle's width: 10
The area of the rectangle is 200
Thank you for using my Geometry Calculator!
```
> Rerun code
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 2

Enter the rectangle's length: 10
Enter the rectangle's width: -2
Please only enter a positive value for the length and width. 
Thank you for using my Geometry Calculator!
```  
Output 3:  
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 3

Enter the length of the base: -2
Enter the triangle's height: -4
Please only enter a positve value for the base and height. 
Thank you for using my Geometry Calculator!
```
> Rerun code
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 3

Enter the length of the base: 2
Enter the triangle's height: 4
The area of the triangle is 4.14778e-317
Thank you for using my Geometry Calculator!
```  
Output 4:  
```
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 4

Quiting the program now!
Thank you for using my Geometry Calculator!
```  
Ouput 5:  
``` 
***Geometry Calculator***
1. Calculate the area of a circle
2. Calculate the area of a rectangle
3. Calculate the area of a triangle
4. Quit
Enter your choice (1-4): 5

You can only enter 1, 2, 3, or 4. 
Thank you for using my Geometry Calculator!
```  
### [ModuloTeam](./Basics/ModuloTeam.cpp)
This program calculates the number of people a team will create with the number of leftover players. This is to show how a modulus works as well as data validation.  
Output:  
```
How many players do you want on your team? 
Enter a value between 9 - 19: 8
Players must be between 9 - 19.
Please re-enter the amount of players you want on your team: 20
Players must be between 9 - 19.
Please re-enter the amount of players you want on your team: 10
How many players are available? 15

There will be 1 teams with 5 players left over. 
```
## [Using Files](./Files)

### [WritingToFile](./Files/WritingToFile.cpp)  
This program writes 5 floating-point numbers to a file. You cpp file should be in the Resource folder of your project. Once built and debugged open the file of your project in your file explorer and navigate to the newly created txt document with the numbers that were entered.  
Output:  
```
Enter five numbers, separated by blanks
33 29 17 45 62
Your numbers have been written to the randomNumbers.txt file.
Goodbye
Press any key to continue . . .
```
### [ReadingToFile](./Files/ReadingToFile.cpp)  
This program reads 5 numbers from the previous file we made in the last activity with a bonus of giving us the average as well.  
Output:  
```
Output: 
The following numbers have been read in
from the data file called randomNumbers.txt:
33
29
17
45
92
The average of the values is : 43.20
Goodbye
Press any key to continue . . .
```
### [WriteAndRead](./Files/WriteAndRead.cpp)
This program takes the previous two file activities and combines them into one where we will also include a while loop to check if the file was correctly opened or not. We should start out with a premade file called "scores.txt" which stores:  
```
Garrus Vakarian 98 89 92 95 99.9
Tali Zorah 87 89 96 88 82
Liara T'Soni 100 100 99.98 99 98
Mordin Solus 100 100 100 100 99.9
Thane Krios 98 89 97 87 93
``` 
Then when the code runs it should create a new file called "specialReport.txt" that displays the names of the crew and their average scores.  

Output:  
```
SSV Normandy Crew Test
-----------------------------------
Garrus Vakarian has an average of 94.78
Tali Zorah has an average of 88.4
Liara T'Soni has an average of 99.4
Mordin Solus has an average of 99.98
Thane Krios has an average of 92.8

There were 5 squad members in the file.

 Garrus Vakarian: A turian who was responsible for the investigation in Saren Arterius and eventually joins Commander Shepard's team to help defeat Saren and the geth.
 Tali Zorah: A quarian who Commander Shepard meets when on her pilgrimage and eventually becomes the mechanical genius on Shepards crew.
 Liara T'Soni: A asari researcher who has studied Prothean technology and culture giving her great insight as well as a user of biotics on Shepard's team.
 Mordin Solus: A salarian geneticist/professor/operative who participated in the genophage. He is recruited by Shepard to assist in missions against the Collectors.
 Thane Krios: A drell assassin and biotic user, considered one of the best assassins in the galaxy, who joins Shepard's suicide mission against the Collectors due to his Kepral's Syndrome.

All files are closed and your report is written. Goodbye!
Press any key to continue . . .

```
## [Structures](./Structures)  

### [StructureIntro](./Structures/StructIntro.cpp)  
This activity shows us how to use a struct declaration and the basic example of how these are used.  
Output:  
```
Javik is a Prothean who is 50000 years old which is 25 in human years.
Nerevarine is a Dunmer who is 25 years old.
They are the same age in human years!
Press any key to continue . . .
```