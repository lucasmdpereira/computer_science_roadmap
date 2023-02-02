![](/1_pick_a_language/W3S/pick_a_language.png)

# Sumário

1. [What is C?](#computer-science-roadmap)
  1.1. [myfirstprogram.c](#11-myfirstprogramc)
2. [Syntax](#2-syntax)
3. [Variables](#3-variables)
4. [Output](#4-output)
  4.1. [Format Specifiers](#41-format-specifiers)
5. [Data Types](#5-data-types)  
  5.1. [Basic Data Types](#51-basic-data-types)  
  5.2. [Basic Format Specifiers](#52-basic-format-specifiers)  
  5.3. [Set Decimal Precision](#53-set-decimal-precision)
6. [Type Conversion](#6-type-conversion)  
  6.1. [Implicit Conversion](#61-implicit-conversion)  
  6.2. [Explicit Conversion](#62-explicit-conversion)  
7. [Constants](#7-constants) 
8. [Operators](#8-operators)  
  8.1. [Assignment Operators](#81-assignment-operators)  
  8.2. [Comparison Operators](#82-comparison-operators)  
  8.3. [Logical Operators](#83-logical-operators)  
  8.4. [Sizeof Operator](#84-sizeof-operator)
9. [Booleans](#9-booleans)
10. [Conditions and If Statements](#10-conditions-and-if-statements)  
  10.1. [Short Hand If...Else (Ternary Operator)](#101-short-hand-ifelse-ternary-operator)  
11. [Switch Statement](#11-switch-statement)   
12. [Loops](#12-loops)  
  12.1. [While Loop](#121-while-loop)  
  12.2. [The Do/While Loop](#122-the-dowhile-loop)   
  12.3. [For Loop](#123-for-loop)  
  &nbsp;&nbsp;&nbsp;12.3.1. [Break and Continue in a for loop](#1231-break-and-continue-in-a-for-loop)  
13. [Arrays](#13-arrays)  
  13.1. [Change an Array Element](#131-change-an-array-element)  
  13.2. [Loop Through an Array](#132-loop-through-an-array)  
  13.3. [Set Array Size](#133-set-array-size)  
  13.4. [Multidimensional Arrays](#134-multidimensional-arrays)  
  &nbsp;&nbsp;&nbsp;13.4.1. [Loop Through a 2D Array](#1341-loop-through-a-2d-array)  
14. [Strings](#14-strings)  
  14.1. [Access Strings](#141-access-strings)  
  14.2. [Another Way Of Creating Strings and Differences](#142-another-way-of-creating-strings-and-differences)  
  14.3. [String Functions](#143-string-functions)  
  &nbsp;&nbsp;&nbsp;14.3.1. [String Length](#1431-string-length)  
  &nbsp;&nbsp;&nbsp;14.3.2. [Size of ](#1432-size-of)  
  &nbsp;&nbsp;&nbsp;14.3.3. [Concatenate Strings](#1433-concatenate-strings)  
  &nbsp;&nbsp;&nbsp;14.3.4. [Copy Strings](#1434-copy-strings)  
  &nbsp;&nbsp;&nbsp;14.3.5. [Compare Strings](#1435-compare-strings)  
15. [User Input](#15-user-input)  
  15.1. [Take String Input](#151-take-string-input)  
  15.2. [Read a line of text](#152-read-a-line-of-text)  
16. [Memory Address](#16-memory-address)  
17. [Pointers](#17-pointers)  
  17.1. [Reference - Creating Pointers](#171-reference---creating-pointers)  
  17.2. [Dereference -  get the value of the variable the pointer points to](#172-dereference---get-the-value-of-the-variable-the-pointer-points-to)  
  17.3. [Pointers and Arrays](#173-pointers-and-arrays)  
18. [Functions](#18-functions)  
  18.1. [Create a Function](#181-create-a-function)  
  18.2. [Call a Function](#182-call-a-function)  
  18.3. [Function Parameters](#183-function-parameters)  
  18.4. [Recursion](#184-recursion)  
  18.5. [Math Functions](#185-math-functions)  
19. [Files](#19-files)  
  19.1. [File Handling](#191-file-handling)  
  19.2. [Write To a File](#192-write-to-a-file)  
  19.3. [Append Content To a File](#193-append-content-to-a-file)  
  19.4. [Read a File](#194-read-a-file)  
  19.5. [The fgets() function](#195-the-fgets-function)  
20. [Structures (structs)](#20-structures-structs)  
  20.1. [Acces Structure](#201-acces-structure)  
  20.2. [Strings in Structures](#202-strings-in-structures)  
  20.3. [Simpler Syntax](#203-simpler-syntax)  
  20.4. [Real Life Example](#204-real-life-example)  
21. [Enumeration (enum)](#21-enumeration-enum)  

---

## 1. What is C?

- C is a general-purpose programming language created by Dennis Ritchie at the Bell Laboratories in 1972;
- It is one of the most popular programming language in the world;
- If you know C, you will have no problem learning other popular programming languages such as Java, Python, C++, C#, etc, as the syntax is similar;
- C is very fast, compared to other programming languages, like Java and Python;
- C is very versatile; it can be used in both applications and technologies;
- C++ was developed as an extension of C, and both languages have almost the same syntax;
- The main difference between C and C++ is that C++ support classes and objects, while C does not;

### 1.1. myfirstprogram.c

[🤓 myfirstprogram.c](./code/myfirstprogram.c)

## 2. Syntax

- To insert a new line, you can use the \n character.
- Two \n characters after each other will create a blank line.
- Single-line comments start with two forward slashes (//).
- Multi-line comments start with /* and ends with */.

```c
#include <stdio.h> // header file library that lets us work with input and output functions, such as printf() (used in line 4). Header files add functionality to C programs.

void main(){ // Another thing that always appear in a C program, is main(). This is called a function. Any code inside its curly brackets {} will be executed. 
    printf("Hello World!\n"); // is a function used to output/print text to the screen. In our example it will output "Hello World".
}
```

## 3. Variables

In C, there are different types of variables (defined with different keywords), for example:

- ```int``` => stores integers (whole numbers), without decimals, such as 123 or - 123
- ```float``` => stores floating point numbers, with decimals, such as 19.99 or -19.99
- ```char``` => stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes

To create a variable, specify the type and assign it a value:

```c
int myNum = 15;
```
You can also declare a variable without assigning the value, and assign the value later.

## 4. Output

In many other programming languages (like Python, Java, and C++), you would normally use a print function to display the value of a variable. However, this is not possible in C:

```c
int myNum = 15;
printf(myNum);  // Nothing happens
```

## 4.1. Format Specifiers

It is basically a placeholder for the variable value.

A format specifier starts with a percentage sign ```%```, followed by a character.

For example, to output the value of an int variable, you must use the format specifier ```%d``` or ```%i``` surrounded by double quotes, inside the printf() function.

To print other types, use ```%c``` for char and ```%f``` for float.

```c
// Create variables
#include <stdio.h>

void main(){
    // Create variables
    int myNum = 15;            // Integer (whole number)
    float myFloatNum = 5.99;   // Floating point number
    char myLetter = 'D';       // Character

    // Print variables
    printf("%d\n", myNum);
    printf("%f\n", myFloatNum);
    printf("%c\n", myLetter);

    printf("My number is %d and my letter is %c\n", myNum, myLetter);
}
```

## 5. Data Types

Variable in C must be a specified data type, and you must use a format specifier inside the printf() function to display it.

### 5.1. Basic Data Types

| Data Type | Size | Description |
|-----------|------|-------------|
| ```int``` | 2 or 4 bytes | Stores whole numbers, without decimals |
| ```float``` | 4 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 6-7 decimal digits |
| ```double``` | 8 bytes | Stores fractional numbers, containing one or more decimals. Sufficient for storing 15 decimal digits |
| ```char``` | 1 byte | Stores a single character/letter/number, or ASCII values |

### 5.2. Basic Format Specifiers

| Format Specifier | Data Type |
|------------------|-----------|
| ```%d``` or ```%i``` | ```int``` |
| ```%f``` | ```float``` |
| ```%lf``` | ```double``` |
| ```%c``` | ```char``` |
| ```%s``` | Used for strings (text), which you will learn more about in a later chapter |

### 5.3. Set Decimal Precision

If you print a floating point number, the output will show many digits after the decimal point.

```c
#include <stdio.h>

void main(){
    float myFloatNum = 3.5;
    double myDoubleNum = 19.99;

    printf("%f\n", myFloatNum); // Outputs 3.500000
    printf("%lf\n", myDoubleNum); // Outputs 19.990000

    // If you want to remove the extra zeros (set decimal precision), you can use a dot (.) followed by a number that specifies how many digits that should be shown after the decimal point:

    printf("%f\n", myFloatNum); // Default will show 6 digits after the decimal point
    printf("%.1f\n", myFloatNum); // Only show 1 digit
    printf("%.2f\n", myFloatNum); // Only show 2 digits
    printf("%.4f\n", myFloatNum);   // Only show 4 digits
}
```

## 6. Type Conversion

If you try to divide two integers, 5 by 2, you would expect the result to be 2.5. But since we are working with integers (and not floating-point values), the following example will just output 2. 
```c
#include <stdio.h>

void main(){
    int x = 5;
    int y = 2;
    int sum = 5 / 2;

    printf("%d\n", sum); // Outputs 2
}
```
To get the right result, you need to know how type conversion works.

There are two types of conversion in C:

Implicit Conversion (automatically)
Explicit Conversion (manually)

### 6.1. Implicit Conversion

Implicit conversion is done automatically by the compiler when you assign a value of one type to another.

For example, if you assign an ```int``` value to a ```float``` type:

```c
#include <stdio.h>

void main(){
    // Automatic conversion: int to float
    float myFloat = 9;

    printf("%f\n", myFloat); // 9.000000
}
```
This can be risky, as you might lose control over specific values in certain situations.

Especially if it was the other way around - the following example automatically converts the float value 9.99 to an int value of 9:

```c
#include <stdio.h>

void main(){
    // Automatic conversion: int to float
    float myInt = 9.99;

    printf("%f\n", myInt); // 9
}
```

### 6.2. Explicit Conversion

Explicit conversion is done manually by placing the type in parentheses ```()``` in front of the value.

```c
#include <stdio.h>

void main(){
    // Manual conversion: int to float
    float sum = (float) 5 / 2;

    printf("%.1f\n", sum); // 2.5

    int num1 = 5;
    int num2 = 2;
    float sum2 = (float) num1 / num2;

    printf("%.1f\n", sum2); // 2.5
}
```

## 7. Constants

Use the ```const``` keyword it is considered good practice to declare them with uppercase.

```c
    const int BIRTHYEAR = 1980;
```

## 8. Operators

C divides the operators into the following groups:

- Arithmetic operators
- Assignment operators
- Comparison operators
- Logical operators
- Bitwise operators

|Operator|Name|Description|Example|
|--------|----|-----------|-------|
|```+``` |Addition|Adds together two values|x + y|
|```-``` |Substraction|Subtracts one value from another|x - y|
|```*``` |Multiplication|Multiplies two values|x * y|
|```/``` |Division|Divides one value by another|x / y|
|```%``` |Modulus|Returns the division remainder|x % y|
|```++```|Increment|Increases the value of a variable by 1|++x|
|```--```|Decrement|Decreases the value of a variable by 1|--x|

### 8.1. Assignment Operators

A list of all assignment operators:

|Operator|Example|Same As|
|--------|-------|-------|
|```=``` |```x = 5``` |```x = 5``` |
|```+=``` |```x += 3``` |```x = x + 3``` |
|```-=``` |```x -= 3``` |```x = x - 3``` |
|```*=``` |```x *= 3``` |```x = x * 3``` |
|```/=``` |```x /= 3``` |```x = x / 3``` |
|```%=``` |```x %= 3``` |```x = x % 3``` |
|```&=``` |```x &= 3``` |```x = x & 3``` |
|```\|=```|```x \|= 3```|```x = x \| 3```|
|```^=``` |```x ^= 3``` |```x = x ^ 3``` |
|```>>=```|```x >>= 3```|```x = x >> 3```|
|```<<=```|```x <<= 3```|```x = x << 3```|

### 8.2. Comparison Operators

The return value of a comparison is either ```1``` or ```0```, which means ```true``` (```1```) or ```false``` (```0```).

|Operator|Name|Example|
|--------|-------|-------|
|```==```|Equal to|```x == y```|
|```!=```|Not equal|```x != y```|
|```>```|Greater than|```x > y```|
|```<```|Less than|```x < y```|
|```>=```|Greater than or equal to|```x >= y```|
|```<=```|Less than or equal to|```x <= y```|

### 8.3. Logical Operators

You can also test for true or false values with logical operators.

|Operator|Name|Description|Example|
|--------|----|-----------|-------|
|```&&```|Logical and|Returns true if both statements are true|```x < 5 && x < 10```|
|```\|\|```|Not equal|Returns true if one of the statements is true|```x < 5 \|\| x < 4```|
|```!```|Greater than|Reverse the result, returns false if the result is true|```!(x < 5 && x < 10)```|

### 8.4. Sizeof Operator

The memory size (in bytes) of a data type or a variable can be found with the ```sizeof``` operator. Note that we use the ```%lu``` format specifer to print the result, instead of ```%d```. It is because the compiler expects the sizeof operator to return a long unsigned int (```%lu```), instead of int (```%d```).

```c
#include <stdio.h>

void main(){
    int myInt;
    float myFloat;
    double myDouble;
    char myChar;

    printf("%lu\n", sizeof(myInt));
    printf("%lu\n", sizeof(myFloat));
    printf("%lu\n", sizeof(myDouble));
    printf("%lu\n", sizeof(myChar));
}
```

## 9. Booleans

In C, the bool type is not a built-in data type, like ```int``` or ```char```.

It was introduced in C99, and you must import the following header file to use it.

```c
#include <stdio.h>
#include <stdbool.h>

void main(){
    // Create boolean variables
    bool isProgrammingFun = true;
    bool isFishTasty = false;

    // Return boolean values
    printf("%d\n", isProgrammingFun);   // Returns 1 (true)
    printf("%d\n", isFishTasty);        // Returns 0 (false)
}
```

## 10. Conditions and If Statements

C has the following conditional statements:

- Use ```if``` to specify a block of code to be executed, if a specified condition is ```true```;
- Use ```else``` to specify a block of code to be executed, if the same condition is ```false```;
- Use ```else``` if to specify a new condition to test, if the first condition is ```false```;
- Use ```switch``` to specify many alternative blocks of code to be executed;

```c
#include <stdio.h>

void main(){
    int time = 22;
    if (time < 10) {
    printf("Good morning.");
    } else if (time < 20) {
    printf("Good day.");
    } else {
    printf("Good evening.");
    }
    // Outputs "Good evening."
}
```
## 10.1. Short Hand If...Else (Ternary Operator)

Syntax:
```c
// variable = (condition) ? expressionTrue : expressionFalse;
```

```c
#include <stdio.h>

void main(){
    int time = 20;
    (time < 18) ? printf("Good day.") : printf("Good evening.");
}
```

## 11. Switch Statement

Instead of writing many ```if..else``` statements, you can use the ```switch``` statement.

When C reaches a ```break``` keyword, it breaks out of the switch block. A break can save a lot of execution time because it "ignores" the execution of all the rest of the code in the switch block.

```c
int day = 4;

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;  
  default:
    printf("Invalid day");
}
```

## 12. Loops

### 12.1. While Loop

The ```while``` loop loops through a block of code as long as a specified condition is ```true```:

```c
    int i = 0;

    while (i < 5) {
        printf("%d\n", i);
        i++;
    }
```

### 12.2. The Do/While Loop

The ```do/while``` loop is a variant of the ```while``` loop. This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

```c
    int i = 0;

    do {
        printf("%d\n", i);
        i++;
    }
    while (i < 5);
```

### 12.3. For Loop

When you know exactly how many times you want to loop through a block of code, use the ```for``` loop instead of a ```while``` loop.

```c
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d\n", i);
    }
```

### 12.3.1   Break and Continue in a for loop

You can use ```break``` and ```continue``` inside a ```for``` loop.

```c
for (int i = 0; i < 10; i++) {
    if (i < 9) {
        continue;
    }
    if (i == 9) {
        break;
    }
}
```

## 13. Arrays

To create an array, define the data type (like ```int```) and specify the name of the array followed by **square brackets []**.

```c
#include <stdio.h>

void main(){
    int myNumbers[] = {25, 50, 75, 100};
    printf("%d", myNumbers[0]);
}
```

### 13.1. Change an Array Element

```c
#include <stdio.h>

void main(){
    int myNumbers[] = {25, 50, 75, 100};
    myNumbers[0] = 33;

    printf("%d", myNumbers[0]);
}
```

### 13.2. Loop Through an Array

```c
#include <stdio.h>

void main(){
    int myNumbers[] = {25, 50, 75, 100};
    int i;

    for (i = 0; i < 4; i++) {
        printf("%d\n", myNumbers[i]);
    }
}
```

### 13.3. Set Array Size

```c
#include <stdio.h>

void main(){
    // Declare an array of four integers:
    int myNumbers[4];

    // Add elements
    myNumbers[0] = 25;
    myNumbers[1] = 50;
    myNumbers[2] = 75;
    myNumbers[3] = 100;
}
```

### 13.4 Multidimensional Arrays

A multidimensional array is basically a matrix, an array of arrays.

```c
#include <stdio.h>

void main(){
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };
    
    printf("%d", matrix[0][2]);  // Outputs 2
}
```

#### 13.4.1. Loop Through a 2D Array

```c
#include <stdio.h>

void main(){
    int matrix[2][3] = { {1, 4, 2}, {3, 6, 8} };

    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\n", matrix[i][j]);
        }
    }
}
```

## 14. Strings

Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the ```char``` type and create an array of characters to make a string in C:

```c
#include <stdio.h>

void main(){
    char greetings[] = "Hello World!";
    
    printf("%s", greetings);
}
```

### 14.1. Access Strings

Since strings are actually arrays in C, you can access a string by referring to its index number inside square brackets ```[]```.

```c
#include <stdio.h>

void main(){
    char greetings[] = "Hello World!";
    
    printf("%c", greetings[0]);
}
```

### 14.2. Another Way Of Creating Strings and Differences

You should also note that you can create a string with a set of characters. This example will produce the same result as the example above.

**Why do we include the ```\0``` character at the end? This is known as the "null terminating character", and must be included when creating strings using this method. It tells C that this is the end of the string.**

```c
#include <stdio.h>

void main(){
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    char greetings2[] = "Hello World!";

    printf("%lu\n", sizeof(greetings));   // Outputs 13
    printf("%lu\n", sizeof(greetings2));  // Outputs 13
}
```

### 14.3. String Functions

To use them, you must include the ```<string.h>``` header file in your program.

#### 14.3.1. String Length

```c
#include <stdio.h>
#include <string.h>

void main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%lu", strlen(alphabet));
}
```

#### 14.3.2. Size of 

We used sizeof to get the size of a string/array. Note that ```sizeof``` and ```strlen``` behaves differently, as sizeof also includes the ```\0``` character when counting:

```c
#include <stdio.h>
#include <string.h>

void main(){
    char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d", strlen(alphabet));   // 26
    printf("%d", sizeof(alphabet));   // 50
}
```

#### 14.3.3. Concatenate Strings

Use the strcat() function:

```c
char str1[20] = "Hello ";
char str2[] = "World!";

// Concatenate str2 to str1 (result is stored in str1)
strcat(str1, str2);

// Print str1
printf("%s", str1);
```

#### 14.3.4. Copy Strings

Use the strcpy() function:

```c
char str1[20] = "Hello World!";
char str2[20];

// Copy str1 to str2
strcpy(str2, str1);

// Print str2
printf("%s", str2);
```

#### 14.3.5. Compare Strings

Use the ```strcmp()``` function:

```c
char str1[] = "Hello";
char str2[] = "Hello";
char str3[] = "Hi";

// Compare str1 and str2, and print the result
printf("%d\n", strcmp(str1, str2));  // Returns 0 (the strings are equal)

// Compare str1 and str3, and print the result
printf("%d\n", strcmp(str1, str3));  // Returns -4 (the strings are not equal)
```

### 15. User Input

To get user input, you can use the ```scanf()``` function.

The ```scanf()``` function takes two arguments: the format specifier of the variable (```%d``` in the example above) and the reference operator (```&myNum```), which stores the memory address of the variable.

```c
#include <stdio.h>

void main(){
    // Create an integer variable that will store the number we get from the user
    int myNum;

    // Ask the user to type a number
    printf("Type a number: \n");

    // Get and save the number the user types
    scanf("%d", &myNum);

    // Output the number the user typed
    printf("Your number is: %d\n", myNum);
}
```

### 15.1. Take String Input

The ```scanf()``` function has some limitations: it considers space (whitespace, tabs, etc) as a terminating character, which means that it can only display a single word (even if you type many words).

```c
#include <stdio.h>

void main(){
    // Create a string
    char firstName[30];

    // Ask the user to input some text
    printf("Enter your first name: \n");

    // Get and save the text
    scanf("%s", firstName);

    // Output the text
    printf("Hello %s\n", firstName);
}
```

### 15.2. Read a line of text

```c
#include <stdio.h>

void main(){
    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);

    // Type your full name: John Doe
    // Hello John Doe
}
```

## 16. Memory Address

When a variable is created in C, a memory address is assigned to the variable.To access it, use the reference operator (```&```), and the result represents where the variable is stored:

```c
#include <stdio.h>

void main(){
    int myAge = 43;
    printf("%p\n", &myAge); // Outputs 0x7ffe5367e044
}
```

You should also note that ```&myAge``` is often called a "pointer". A pointer basically stores the memory address of a variable as its value. To print pointer values, we use the ```%p``` format specifier.

## 17. Pointers

We can get the memory address of a variable with the reference operator ```&```.

### 17.1. Reference - Creating Pointers

A pointer is a variable that stores the memory address of another variable as its value. A pointer variable points to a data type (like ```S```) of the same type, and is created with the ```*``` operator.

The address of the variable you are working with is assigned to the pointer:

```c
#include <stdio.h>

void main(){
    int myAge = 43;     // An int variable
    int* ptr = &myAge;  // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("%d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("%p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);
}
```

### 17.2. Dereference -  get the value of the variable the pointer points to

In the example above, we used the pointer variable to get the memory address of a variable (used together with the ```&``` reference operator).

You can also get the value of the variable the pointer points to, by using the ```*``` operator (the dereference operator):

```c
#include <stdio.h>

void main(){
    int myAge = 43;     // Variable declaration
    int* ptr = &myAge;  // Pointer declaration

    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);
}
```

## 17.3. Pointers and Arrays

You can also use pointers to access arrays.
The memory address of the first element is the same as the name of the array:

```c
#include <stdio.h>

void main(){
    int myNumbers[4] = {25, 50, 75, 100};

    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers); // 0x7ffe70f9d8f0

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]); // 0x7ffe70f9d8f0
}
```

myNumbers is a pointer to the first element in myNumbers, you can use the * operator to access it, or loop through it:

```c
#include <stdio.h>

void main(){
    int myNumbers[4] = {25, 50, 75, 100};
    int *ptr = myNumbers;
    int i;

    for (i = 0; i < 4; i++) {
    printf("%d\n", *(ptr + i));
    // 25
    // 50
    // 75
    // 100
    }
}
```

## 18. Functions

### 18.1 Create a Function

To create (often referred to as declare) your own function, specify the name of the function, followed by parentheses ```()``` and curly brackets ```{}```:

```c
void myFunction() {
  // code to be executed
}
```

```void``` means that the function does not have a return value. You will learn more about return values later in the next chapter

### 18.2 Call a Function

To call a function, write the function's name followed by two parentheses ```()``` and a semicolon ```;```

```c
// Create a function
void myFunction() {
  printf("I just got executed!");
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"
```

### 18.3. Function Parameters

Information can be passed to functions as a parameter. Parameters act as variables inside the function.
Inside the function, you can add as many parameters as you want:

```c
void myFunction(char name[], int age) {
  printf("Hello %s. You are %d years old.\n", name, age);
}

int main() {
  myFunction("Liam", 3);
  myFunction("Jenny", 14);
  myFunction("Anja", 30);
  return 0;
}

// Hello Liam. You are 3 years old.
// Hello Jenny. You are 14 years old.
// Hello Anja. You are 30 years old.
```

### 18.4. Recursion

Recursion is the technique of making a function call itself. This technique provides a way to break complicated problems down into simple problems which are easier to solve.

```c
int sum(int k);

int main() {
  int result = sum(10);
  printf("%d", result);
  return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}
```

The developer should be very careful with recursion as it can be quite easy to slip into writing a function which never terminates, or one that uses excess amounts of memory or processor power. However, when written correctly recursion can be a very efficient and mathematically-elegant approach to programming.


### 18.5 Math Functions

```c
#include <math.h>
```

|Function|Description|
|--------|-----------|
|```abs```|Returns the absolute value of x|
|```acos(x)```|Returns the arccosine of x|
|```asin(x)```|Returns the arcsine of x|
|```atan(x)```|Returns the arctangent of x|
|```cbrt(x)```|Returns the cube root of x|
|```cos(x)```|Returns the cosine of x|
|```exp(x)```|Returns the value of Ex|
|```sin(x)```|Returns the sine of x (x is in radians)|
|```tan(x)```|Returns the tangent of an angle|

## 19. Files

### 19.1. File Handling

In C, you can create, open, read, and write to files by declaring a pointer of type ```FILE```, and use the ```fopen()``` function:

```c
FILE *fptr
fptr = fopen(filename, mode);
```

```FILE``` is basically a data type, and we need to create a pointer variable to work with it (fptr). For now, this line is not important. It's just something you need when working with files.

To actually open a file, use the ```fopen()``` function, which takes two parameters:
|Parameter|Description|
|---|---|
|filename|The name of the actual file you want to open (or create), like ```filename.txt```|
|mode|	A single character, which represents what you want to do with the file (read, write or append): ```w``` - Writes to a file; ```a``` - Appends new data to a file; ```r``` - Reads from a file|

```c
#include <stdio.h>

void main(){
    FILE *fptr;

    // Create a file
    fptr = fopen("filename.txt", "w");

    // Close the file
    fclose(fptr);
}
```

### 19.2. Write To a File

Let's use the ```w``` mode from the previous chapter again, and write something to the file we just created.

The ```w``` mode means that the file is opened for writing. To insert content to it, you can use the ```fprint()``` function and add the pointer variable (```fptr``` in our example) and some text:

```c
FILE *fptr;

// Open a file in writing mode
fptr = fopen("filename.txt", "w");

// Write some text to the file
fprintf(fptr, "Some text");

// Close the file
fclose(fptr);
```

**Note: If you write to a file that already exists, the old content is deleted, and the new content is inserted. This is important to know, as you might accidentally erase existing content.**

### 19.3. Append Content To a File

If you want to add content to a file without deleting the old content, you can use the ```a``` mode.

```c
FILE *fptr;

// Open a file in append mode
fptr = fopen("filename.txt", "a");

// Append some text to the file
fprintf(fptr, "\nHi everybody!");

// Close the file
fclose(fptr);
```

**Note: Just like with the w mode; if the file does not exist, the a mode will create a new file with the "appended" content.**

### 19.4. Read a File

To read from a file, you can use the ```r``` mode:

```c
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");
```

This will make the filename.txt opened for reading.

### 19.5. The fgets() function

In order to read the content of filename.txt, we can use the ```fgets()``` function.

The ```fgets()``` function takes three parameters:

1. The first parameter specifies where to store the file content.
2. The second parameter specifies the maximum size of data to read, which should match the size of myString (100).
3. The third parameter requires a file pointer that is used to read the file (fptr in our example).

**Note: The fgets function only reads the first line of the file. If you remember, there were two lines of text in filename.txt.**

To read every line of the file, you can use a ```while``` loop:
```c
FILE *fptr;

// Open a file in read mode
fptr = fopen("filename.txt", "r");

// Store the content of the file
char myString[100];

// Read the content and print it
while(fgets(myString, 100, fptr)) {
  printf("%s", myString);
}

// Close the file
fclose(fptr);
```

## 20. Structures (structs)

Unlike an array, a structure can contain many different data types (int, float, char, etc.).

```c
struct MyStructure {   // Structure declaration
  int myNum;           // Member (int variable)
  char myLetter;       // Member (char variable)
}; // End the structure with a semicolon
fclose
```

### 20.1. Acces Structure

```c
#include <stdio.h>

// Create a structure called myStructure
struct myStructure {
  int myNum;
  char myLetter;
};

int main() {
  // Create a structure variable of myStructure called s1
  struct myStructure s1;

  // Assign values to members of s1
  s1.myNum = 13;
  s1.myLetter = 'B';

  // Print values
  printf("My number: %d\n", s1.myNum);
  printf("My letter: %c\n", s1.myLetter);

  return 0;
}
```

### 20.2. Strings in Structures

 You can use the ```strcpy()``` function and assign the value to s1.myString, like this:

 ```c
#include <stdio.h>

struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Some text");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}
```

### 20.3. Simpler Syntax

You can also assign values to members of a structure variable at declaration time, in a single line.

Just insert the values in a comma-separated list inside curly braces ```{}```. Note that you don't have to use the ```strcpy()``` function for string values with this technique:

 ```c
#include <stdio.h>

// Create a structure
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30];
};

int main() {
  // Create a structure variable and assign values to it
  struct myStructure s1 = {13, 'B', "Some text"};

  // Print values
  printf("%d %c %s", s1.myNum, s1.myLetter, s1.myString);

  return 0;
}
```

### 20.4. Real Life Example

 ```c
#include <stdio.h>

struct Car {
  char brand[50];
  char model[50];
  int year;
};

int main() {
  struct Car car1 = {"BMW", "X5", 1999};
  struct Car car2 = {"Ford", "Mustang", 1969};
  struct Car car3 = {"Toyota", "Corolla", 2011};

  printf("%s %s %d\n", car1.brand, car1.model, car1.year);
  printf("%s %s %d\n", car2.brand, car2.model, car2.year);
  printf("%s %s %d\n", car3.brand, car3.model, car3.year);

  return 0;
}
```

![](/1_pick_a_language/W3S/all_C_exercises.png)

## 21. Enumeration (enum)

An enum is a special type that represents a group of constants (unchangeable values).

```c
enum Level {
  LOW,
  MEDIUM,
  HIGH
};
```
**It is not required to use uppercase, but often considered as good practice.  
Enum is short for "enumerations", which means "specifically listed".**

To access the enum, you must create a variable of it.

Inside the ```main()``` method, specify the ```enum``` keyword, followed by the name of the enum (```Level```) and then the name of the enum variable (```myVar``` in this example). The assigned value must be one of the items inside the enum (```LOW```, ```MEDIUM``` or ```HIGH```):

```c
enum Level myVar = MEDIUM;
```

![](/1_pick_a_language/W3S/w3cquiz.png)

---
