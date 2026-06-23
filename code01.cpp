// C++ NOTES BY LOVE BABBAR:-
// int main() {
// } //this int main()is when program starts 

// include <iostream>  // it is a file where cout and cin funtions are defined, hence we can use cout and cin in our program.

// using namespace std;  // it is used to avoid writing std:: before every cout and cin
// ans also its is like a container jisme cout and cin defined hai....and there are many other things also defined in it...and there are many other containers also like std ::math , std::string etc... all these containers are defined in the iostream file....

// after some cout , we can use \n:-
// cout << "hello world" << "\n";
// cout << \"n"; //to go in next line 

// semi-colon; is to end line....so we have to end the line 
 
// char a = 'v'; // char data type stores only single character and it is enclosed in single quotes
// this above line means we have created a container of char datatype and assigned it value v until we have not wrote int a=123;

#include<bits/stdc++.h>   //- this include all the library in c++, it takes a lil long time but its okay
using namespace std;
// int < long < long long 
// float, double,
// a string take/picks only the character before some space ;

// inorder to get the whole line instead of 1 word in the variable; we use :-
// int main() {
//     string s;
//     getline(cin, s);
//     cout << s;
//     // for single character we use char cuz it takes less space as compare to string
//     // for string we use "  ", but for char we use = ' '
// } 


// int main() {
    // cout << "hello world";

    // double pi = 3.14; 
    // // sizeof operator:-
    // int size = sizeof(pi); // sizeof is a operator which tells us the size of the datatype in bytes
    // cout << "\nsize of pi: " << size << " bytes" << endl; 

    // implicit/explicit conversion:- type casting
// char a  = 123;
// char a = 'v';
// cout << "character is: " << a << endl;


// int a = 'v';;;;; // implicit type conversion from char to int
// cout << a << endl; // out = 118 // ascii value of v is 118

// char a = 'v'; // char to char no conversion???
// cout << a << endl; // out = v

// char ch = 98; // implicit type conversion from int to char
// but if u write char ch = "123456"; // it will give error cuz char can store only single character not integer value more than 255 cuz it cannot convert into ascii value....
// cout << ch << endl; // out = b // ascii value of 98 is b
// }
// for storing character value as binary in memory we first have to convert it into ascii value and then store it in binary form in memory....


// how to identify  -ve/+ve no :-
// first bit of +ve no. is always 0
// fist bit of -ve no. is always 1


// to take user input including spces, tabs, and enter, we use cin.get() function:-
// a = cin.get(); // it will take single character input including spaces, tabs, and enter
// instead of cin>>a; // it will not take spaces, tabs, and enter as input

// assign a=3;
// check whether a==3;

// while loop:-
// jab tak ye condition true hai tab tak ye kaam karo


// notes: 
// jo baar baar repeat hoo rha hai wha hum loop lagate hai...
// btw we can multiple semi-colon also like int a=10;;;;; // it will not give any error
// i need to learn type-casting more properly....


// C++ BASICS LOGIC NOTES BY SHRADHA MAM:
// compiler : it takes input as a coding language (c,c++,python) and then converts it into binary format(0,1) for computer to understand.
// pseudocode: set of instruction given to computer to run the program.////general logic of solution for coders/developers....
// pseudocode is actually a logic before writing a code in any language to make the programers understand the logic of the code.
// it is written in steps 1, 2, 3, ....
// floacharts: a diagram of solutions
// Debugging :- process of identifying and removing errors from computer hardware or software:
// dry run :- analyse solution using example.

// .cpp is the extension for c++
// components: all these compononets/charts are connected with arrows (-->) 
// ovale shape --> start or exit
// parrelogram --> print"hi"/input
// rectangle/process block --> variable 
// diamond shape: decision or condition: Ex: is sum <=0 or >=0  its a condition
// dont forget to use semicolon and return 0; at the end of code

// c++ is case - sensitive language (things which are in lower case should be in lower case like variable name)
// ; semi-colon is called terminater 
// we write g++ [file name] in terminal to invoke the compiler, after that filename.exe file will be made and to run it we write ./filename.exe
// g++ code.cpp && ./a.out
// to delete all the comands from terminal write "clear command"
// to undo the old command press upwards key in key board.


// #include <iostream> is called pre-processer directive 
// we write using namespace std to tell the compiler to use or execute specific cout or cin line in the code.

// instead of endl; we can write "\n";
    // cout<< "hi, my name is:\nAryan Raj";
    // out = hi, my name is:
//           Aryan Raj


// print an statement/to end any statement in single line/ 

// #include <iostream>
// using namespace std; //if u don't want to write std everytime use this line.
// int main() {  //this is the function in which
//     cout << "Hello World";  //this line is to print the output like print("hello") in consoule
//     cout << "hello World" << endl; 
//     //out = Hello Worldhello World // to print every sentence in different line end it with endl;
//     cout<< "hi, my name is:\nAryan Raj";
//     // example:-
//     cout << "this";
//     cout << " is ";
//     cout << "my ";
//     cout << "house." <<endl; //final output = this is my house.
//     // cout = console out
//     cout << "enter any number: " << endl;
//     return 0; //may be we can or cannot write this cuz it dosent give any error 
// }

// upto functions lecture u dont have to write notes: shradha mam:

// how to solve a problem:
// understand --> input --> solution --> code


// without using namespace std;

// #include <iostream>

// int main() {
//     std::cout << "hello baby";
//     return 0;
// }

// VARIABLES: containers to store data....also called identifier 
// start variables with a-z, A-Z or _underscore 
// #include <iostream>
// using namespace std;

// int main() {
    // cout<<"hi "<<"my "<<"name "<<"is "<<"Harry."; // output = hi my name is Harry.
    // even without return 0; also the output has been print


    // date types: short < int < long < long long ()  and float < double < long double

    // each data type take different bite for different architecture (32/64 bit )
    // int a,b,c; //we have created a container for a, b, c
    // short sa=9; //we have specified the variable sa as short data-type
    // short Sa=9; //in cpp variables are case-sensitive.
    // // variables can start from letters or underscore
    // short _sa=8; //is also valid variable 
    // // short 1_sa=7; //incorrect variable. cannot start with number
    // short s2345r = 6; //correct
    // short s23=10; // correct
    // cout<<s23; //out = 9 // we have print the date stored in variable sa.
    // short S = 98;
    // cout<<S; //correct, can be capital.
    // short Ssa = 11;
    // cout<<Ssa; // correct, variable first name can be in capital
    // int a = 1;
    // long a = 10
    // long long a = 12;
    // float a = 1.3;
    // double a = 12334;
    // long double a = 123.123;
    // cout<<a; //out = 1.3


// we can change the value to the variable :-
    // int a = 23;
    // a = 43; //we changed the value assigned to the variable a // we can only change by (a = 43) not by (int a = 43)
    // we dont have to put data type of the variable to change the variable
    // cout<<a;

    // float b = 22.33;
    // b = 99.99; //out= 99.99
    // cout<<b; 

    // const :-
    // float const score = 45.39; //if u don't want to change the value assigned to the variable use const
    // score = 89.33; // this line of code will give error because we have already put const score = 45.39
    // cout<<score;


//camelCase Notation
    // int marksInMath= 89;
// cout<<marksInMath;//we can use mim to instantly/fastly call the variable if the variable name is long
    // cout<<"u have scored: "<<marksInMath; // out = u have scored: 89
    // cout<<"u have scored: "<<marksInMath<< "in maths"; //OUT = u have scored: 89in maths
    //  cout<<"u have scored: "<<marksInMath << "in maths ";
// }


// to take the user input:-

// #include <iostream>
// using namespace std;

// int main() {
//     int a, b; //make a container a and b for user to store input 
//     // cout<<"enter first number: "; // out = enter first number: 12 //user will enter input
//     cout<<"enter first number: "<<endl; //to tell the user to enter 1st no. 
//     cin>>a; // to store the user input no. in variable/container a with datatype int
//     cout<<a; // to print the output that user has inputed for entering the 1st no.

    // cout<<"enter second number: "<<endl;
    // cin>>b;
    // cout<<b;// out = 12enter second number: 123
    // ///123
//     return 0;
// }



// this is called boilerplate code:
// #include <iostream>
// using namespace std;

// int main() {
//     float PI = 3.14; //the compiler will take it as a double 
//     float Q = 3.14f // or 3.14F // the compiler will take it as a float we have to mention f or F at the end 
//     bool isSafe = true;
//     double price = 100.99;
//     return 0;
// }


// primitive(basic) data type:
// int - 4 byte(o to 4,294,967,295) , max value int can store formula = 2^32 -1 ....(cuz it has 4 byte and 1 byte = 8 bit so total 32 bit)
// char - 1 byte(-128 to +127) and (o to 255) max value char can store formula = 2^8 -1 ....(cuz it has 1 byte and 1 byte = 8 bit so total 8 bit), min value = 0 
// bool - 1 byte
// short - 2 byte(0 to 65,535) and (-32,768 to +32,767
// float - 4 byte
// double - 8 byte
// long - 4 byte(same as int)
// long long - 8 byte
// 1 byte = 8 bit

// TYPE CASTING:-
// converting data from one type to another.
// two types:- conversion(implicit) and casting.


// implicit conversion is the conversion which computer attomatically converts.Generally used in small to big data ytpe conversion. Ex- float to double, char to int

// int main() {
//     char grade = 'A'; //ascii value of A is 65.

//     int value = grade; // in this the value of right side will get stored in left. 
//     cout << value << endl; //out = 65 // we are changing the datatype from char to int.
//     return 0;
// }
// explicit - programers manually do this.generally used in big to small data type conversion.
// int main() {
//     double price = 100.99;

//     int newPrice = (int)price;
//     cout << newPrice << endl; // out = 100
// }



// input in c++:

// int main() {
//     int age; // this means we have created a integer variable datatype but we have not assigned the value of it.
//     // if we print try to just print the value of age right now it will print either 0 or any random value.
//     cout << "Enter your age: ";
//     cin>>age;
//     cout << "your age is: " << age; 
//     // return 0;
// }

// OPERATERS:

// arithematic: +,-,*(asterisk),/(divide), %(modulo or remainder operator)
// relational: 
// logical: 



// ARITHEMATIC OPREATORS:
// int main() {
    // int a = 5, b = 10, c = 12, d = 124; // we can assign multible values to diff datatype using in same line.
    // int sum = a + b + c + d;
    // // cout << "sum is: "<< (a+b+c+d); // or 
    // cout << sum << endl;
    // return 0;

    // cout << (5/2);  // out = 2 not 2.5 // cuz the division is in integer by integer
    // if we want to get it in decimal we have to devide it in float by float or float by integer.
    // Ex:
    // cout<<(5.0/2)<<endl; //float/int
    // cout<<(5/2.0)<<endl; //int/float
    // cout<<(5.00/2)<<endl; //double/int
    // cout<<(5/2.00)<<endl; //int/double
    // output for all = 2.5

    // another way: typecasting
    // cout<<(5/(double)2) << endl; //or cout<<(5/(float(2)))<<endl; or cout<<(5/float(2))<<endl;
    // cout<<(10/(float)2) << endl; ****** //why does output neglected the zero //out=10 not 10.0 
    // another way:
    // int ans = (5/float(2));
    // cout << ans; //out = 2
    // another way:
    // int a = 5;
    // double b = 2; //or 2.00//by adding more 0 after decimal points dosent give output in 2.5000
    // float c = 2.0;
    // cout<<(a/b)<<endl<<(a/c);
    // out = 2.5
    //       2.5
    
// }

// RELATIONAL OPERATORS: <, >, <=, >=, ==, !=, 

// int main() {
//     cout << (3<5) << endl; // true // out = 1  so true = 1
//     cout << (3>5) << endl; // false // out = 0 so false = 0
// }

// logical operators: OR ||, AND &&, NOT !
// int main() {
    // cout<< !(3<1)<<endl; //out = 1 // not operator
    // cout<< ( (3<1) || (3>1) ) << endl; //out = 1 // or operator
    // cout<< ( (3<1) && (3>1) ) << endl; //out = 0 // and operator
// }


// Q1. sum of 2 numbers

// int main() {
//     int a, b; //first we have to make a container for storing input:
//     cout<< "Enter first no: " << endl;  //by writing endl we are living a line and that looks not attractive
//     cin>>a;

//     cout<< "Enter second no: " << endl;
//     cin>>b;

//     int sum = a + b;
//     cout << "sum is:" << sum <<endl;
//     return 0;
// }

// BINARY OPERATORS: WHICH REQUIRE 2 VARIABLES TO WORK like a+b, a*b, a/b, a>b, etc.
// UNARY OPERATORS: WHICH REQUIRE ONLY A OPERATORS TO WOK LIKE IN LOOPS a=a+1 or a++ or a--
// a++ //kaam then update
// ++a //update  then kaam

// int main() {
//     int a = 10;
//     int b = a++; //kaam(assign) then update // called post-increment operator

//     cout<< "b = " << b << endl;
//     cout<< "a = " << a << endl;  
//     // out = b = 10
//         //   a = 11
// }

// int main() {
    // int a = 8;
    // int b = ++a; //update then kaam(assign) // called pre-increment operator

    // cout << a << endl;
    // cout << b << endl;
    // out = b = 9
    //       a = 9
// }

// int  main() {

//     int a = 0;
//     cout << a++ << endl;
//     return 0;
// }


// LEC - 03(CONDITIONAL STATEMENTS AND LOOPS):-

// IF-ELSE STATEMENTS :-

// first we will write the boiler plate code:- 
// #include <iostream>  //by the way this line means we have included input/output library so we can use cin/cout
// using namespace std;  // this line helps u skip writing std::cout and std::cin everytime 

// int main() { // entry point - this is where ur programs starts
//     int n = -10;

//     if(n>=0) {
//         cout<<" n is +ve no. "<<endl; //in this code there is probably no need for writing endl at the end of the code
//     } else {   //we can write else statement in the next line, the code will run but there are some rules to follow
//     cout << "n is -ve no. "<<endl; //in this code there is probably no need for writing endl at the end of the code
//     }

//     return 0;
// }

// int main() {
//     int n = -99;

//     if(n>=0) {
//         cout<<" n is +ve no. ";
//     }  
// }  // in this code there will be no output cuz we have not mentioned what to do if the no is -ve

// vote question:-

// int main() {
//     int age;
//     cout << "enter user age: " << endl;
//     cin >> age;

//     if (age>=18) {
//         cout<<"user is eligible to vote."<<endl;
//     } else {
//         cout << "user is not eligible to vote.";
//     }
//     return 0;
// }

// odd/even question:-

// int main() {
//     int num;
//     cout << "enter a number: ";
//     cin>>num;

//     if (num%2 == 0) {  //even if we remove the curly bracates which is also called blocks program will run.
//         cout<<"number is even";
//     } else if (num%2 != 0) {
//         cout<<"number is odd";
//     }
//     return 0;
// }


// if we use :-
// if ()
// if()
// if()
// if()...many if's statement, then it will take a lot of time...

// instead what we can do is:-
// we can use 
// if ()
// else if () //we can write unlimited else if
// else if () 
// else if ()
// else

// grade question:-

// int main() {
//     int marks;
//     cout<<"enter student marks: ";
//     cin>>marks;

//     if (marks>=90 and marks<=100) {
//         cout<<" A ";

//     }else if (marks>100 or marks<0) { //remember to use or operator 
//         cout<<"invalid marks";

//     }else if (marks>=80 && marks<90) {  //only if both condition is && operator will be executed
//         cout<<"B";

// when we are writting else-if statement then we would not write (marks >90 and marks < 90)...it already know that the before else statement was wrong.

//     }else if (marks>=70 and marks<80) {
//         cout<<"C";

//     }else if (marks > 0) {
//         cout<<"D";  //what if input is 108// it will still print D grade.
//     }
//     return 0;
// }
// solved example:-

// int main() {
//     int age ;
//     cin>> age;

//     if (age<18) {
//         cout << "not eligible for job" ;
//     }else if (age <= 54) { 
//             cout << "eligible for job" ;  
// // or we can write thorugh nested loops: 
//         // else if (age<=57) {
//         //     cout << "eligible for job" ;
//         //     if ( age >=55) {
//         //         cout << "but retirement soon";
//         //     }
//         // }
//     }else if ( age >=55 and age <=57) {
//         cout << "eligible for job, but retirement soon";


//     }else if (age<=57) {
//         cout << "retirement time";

//     }
// }

// SWITCH:-

// ques :- user will enter the number and it will print the day for the month:
// int main() {
//     int day;
//     cout << "enter the number: ";
//     cin>>day;

//     switch(day) {
//         case 1:
//         cout << "Monday";
//         break;
//         case 2:
//         cout << "tuesday";
//         break;
//         case 3:
//         cout << "wednesday";
//         break;
//         case 4:
//         cout << "thursday";
//         break;
//         case 5:
//         cout << "friday";
//         break;
//         case 6:
//         cout << "saturday";
//         break;
//         case 7:
//         cout << "sunday";
//         break;

//         // if non of the above cases are excuted then user must have entered the wrong user input.
//         // in those cases we can use : default:
//         default:
//         cout << " invalid input, check within the numbers from 1 to 7 ";
//     }
//         return 0;
// }

        // if we don't write break statement at the end of every case statement it will print all the cases after the selected input
        // like if u enter 5 as input it will print fridaySaturdaySunday
        // so we need to write break statement at the end of every case statement.


// ques:-
// find character is lowercase or uppercase:- decent ques:
// int main() {
//     char ch;  //char ch;
//     cout << "enter the character: "; 
//     cin>>ch;

//     if (ch>='a' && ch<='z') {   //by the way this is implicit type conversion(compiler converts these no. on its own)
//         //another way:- if (ch>='65' && ch<='90') {
//         cout<< "character is lowercase";
//         // we can write endl in cout<< "caracter is lowercase\n";

//     }else if (ch>='A' && ch<='Z') {
//         // another way:- }else if (ch>='97' && ch<='122') {
//         cout<<"character is uppercase";
//     }
//     return 0;
// }

// Ternary Statments:-
//if a condition(if-else statement is very small or simple like find that the no is +ve) in that case we use ternary statements
// SYNTAX:-
// condition ? statement 1 : statement 2 ;
// if the condition is true print statemnt 1 else print statement 2

// int main() {
//     int n = -45;
    
//     cout << (n>=0 ? "no is +ve" : "no. is -ve") << endl; //by the way we have used () in cout line.

//     return 0;
// }




// LOOPS:-
// 3 types of loops :- for, while, do while.
 
// while loop :-
// syntax : while (condition is true) {
//                  cout this statement;
//                 }

// Q1.print numbers 1 to 5:
// int main() {
//     int count = 1;

//     while (count <= 5) {
//         cout << count << " " ; // or endl;
//         count += 1; // or count ++ // count = count + 1;
//     }
//     return 0;
// }

// int main() {
//     int n;
//     cout << "enter the value of n: ";
//     cin>>n;

//     int a = 1; // I forget to initialize "a" //initialisation statement 
//     while (a<=n) { //condition statement 
//         cout << a << endl;
//         a++; // updatation statement 
//         // if we want to increase i by 2 we can write a+2; or a = a+2;
//     }
//     return 0;
// } 


// prime no: using while loop:-
// int main() {
//     int n;
//     cout << "enter a number: ";
//     cin>>n;
//     int i = 2;

//     while (i<=n-1) {
//         if (n%i == 0) {
//         cout << "number is not prime";
//         break;
//     }else {
//         cout << "number is prime";
//         break;
//     }i=i+1;
// }}
// for loops:-

// SYNTAX:-
 
// for (initialisation; condition; updation) {
    // work //cout // print
// }

// Ex:-

// int main() {
//     int n = 10;
//     for(int i=1; i<=n; i++) {
//         // if we want multiple variable:  for(int i=1, j=3; i<=n; i++) {
//         // if we want multiple statements: for(int i=1, j=3; i<=n && j<=n; i++) {
//         cout << i << " "; //or endl; 
//     } return 0;
// }

// initialisation occurs only once
// condition -> work/cout -> updation

// Q.1) sum of numbers from 1 to n:

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin>>n;

//     int a = 0; /// u could have made an easy variable name like: int sum = 0;
//     for (int i=1; i<=n; i++) {
//         a +=i; // or a = a + i;
//         // cout << a << endl; // if we had written here our print statement the output will look like
//         // 1 3 6 10 15  
//     }
//         cout << "sum of numbers from 1 to n is: " << a << endl; 
// }

// break:

// if we want to get out of loop we use break keyword:
// EX-
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin>>n;

//     int a = 0;
//     for (int i=1; i<=n; i++) {
//         a +=i;
//         if (i==5) {
//             break;  
// //output = 15 cuz we have ended the loop when i == 5 and just printed cout which was outside the loop
//         }
//     }
//         cout << "TOTAL SUM: " << a << endl; 
// }


// Q.2) print sum of all odd numbers from 1 to n using for loop:
 
// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin>>n;

//     int a = 0; 
//     for (int i=1; i<=n; i=i+2) {
//         a +=i;
//     }
// // other way to do is by:
// for (int i=1; i<=n; i=i+2) {
//         if (i%2 != 0) {
//         a +=i; }
//     } 
//         cout << "TOTAL SUM: " << a << endl; 
// }


// Q.3) print sum of all odd numbers from 1 to n using while loop:   //good question:
//got stuck for 2hours for this ques:
// int main() {
//     int n;
//     cout << "enter the value of n: ";
//     cin>>n;
    
//     int i = 1;
//     int a = 0;
//     while (i<=n) {
//         a = a + i;
//         i+=2; // by the way i+2 is wrong //i=i+2 or i+=2 is right way.
//     } cout << "TOTAL:" << a;
// }

// random question :-
// int main() {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin>>n;

//     int a = 0;
//     int i = 1; // in while loops initialisation start before while loop
//     while ((i<=n) && (i%2 != 0)) { // while (condition) {} //wrong
//         // if (i%2 == 0) {
//             a += i;
//             i++;
//         }
//         cout << a;
//     }

// wrong code :-
// int main() {
//     int n;
//     cout << "Enter the value of n: " << endl;
//     cin>>n;

//     int a = 0;
//     int i = 1;
//     while (i<=n) {
//         if (i%2 != 0) {
//             a = a+i;
//             i++;
//         }else {
//                 break;
//             }
//         }
//     }


// in while loop, if the first condition is false the whole loop will not work like :
// while (3>5) {  //this is the condition
//     cout << "hello";
// } 


// do while loops:-

// SYNTAX:-
// do {
//     work or print or cout 
// } while (condition);

// in while loop, if the first condition is false the whole loop will not work but in do while loops even if the condition of while loop is wrong the program will work only one time.
// EX:-
// int main() {
//     do {
//         cout << "hello";
//     }while (3>5); /// out = hello
// }


// Q.)print numbers from 1 to n using do-while loop.

// int main() {
//     int n=5;
//     int i = 1;
//     do {
//         cout << i << " "; // out = 1 2 3 4 5 
//         i++;
//     }
//     while(i<=n); //dont forget to write ; at the end
// }

// random while loop ques
// int main() {
//     int n;
//     cout << "enter a number: " ;
//     cin>>n;

//         int i = 1; //we can give gaps it dosent effect the output 
//     while (i<=n) {
//     cout << i << endl; //first cout statement will come so that it start from 1 2 3 4 not 2 3 4 5 
//     i++; // if we write i++ before cout << i << endl; //then it will complile the i++ first then cout statement.
//     }



// few lessons learned doing this ques:-
// Q.) check if a number is prime or not.

// code using if-else statement : correct 
// my approach :- wrong program to find out wheteher a no is prime or not.
// int main() {
//     int n;
//     cout << "enter a number: " ;
//     cin>>n;

//     int i = 1;
//     i++; //i is jsut incremented to 2 for once only

//     if (n%i != 0) { //this line will only check if n is divisible by 2 not 3,4,5,6,7,....n.
//         cout << "n is prime";

//     }else {
//         cout << "n is not prime";
//     }
//     return 0;
// }
// slight teacher help :- use of break statement and if-else in for loop
// int main() {
//     int n ;  //how to take not take certain inputs like 0 and 1 or -ve no. 
//     cout << " enter the value of n: " ;
//     cin>>n;

//     for ( int i = 2; i<=n-1; i++) {
//         if ( n%i != 0) {
//             cout<< "n is prime.\n" ;
//             break;
//         }else {
//             cout << "n is not prime.\n";
//             break;
//         }
//     }
// }

// teacher solution:-
// int main() {
//     int n = 0;
//     bool isPrime = true;

//     for ( int i = 2; i<=n-1; i++) {
//         if ( n%i == 0) {  // if the no. is non-prime
//             isPrime = false;
//             break;
//         }
//     }
//     if(isPrime == true) {
//         cout << "prime no.\n" ;
//     }else {
//         cout << "non-prime no.\n";
//     }
//     return 0;
// } //this code is wrong for input 1 and 0
//what if the user type 0 or -ve value as input???  ans :-

// defination of prime:- a natural number greater than 1 that has exactly two distinct positive divisors
//by the way prime no. cannot be -ve numbers acc to maths
// and 0 is not prime number cuz 0 x 1 = 0, 0 x 2 = 0, 0 x 3 = 0, and so on
// 0 and 1 are not prime 
// why 1 is not prime - because it has only 1 factor which is  itself not other factor like 7 has 1 and 7, 13 has 1 and 13.



// so to find whether a no. is prime or not....all the above solution was a lengthy solution:-
// shorter solution could be to take i between (2 to root n):

// int main() {
//     int n = 7;
//     bool isPrime = true;

//     for ( int i = 2; i*i <= n; i++) {
//         if ( n%i == 0) {  // if the no. is non-prime
//             isPrime = false;
//             break;
//         }}
//     if(isPrime == true) {
//         cout << "prime no.\n" ;
//     }else {
//         cout << "non-prime no.\n";
//     }
//}
// another way:- can it be done using for loop??
// solved using for loop: pause
// int main() {
//     int n;
//     cout << "enter a number: " ;
//     cin>>n;

//     for (int i = 1; i<=n; i++) {  

//         //in this code the cout will continusly repeat cuz its for loop
//         //do something that it will give output only once.
//         //understand how the compiler works in this code or what goes behind this code.
//         if (n%i != 0) {
//             cout << "n is prime"<<endl;
//         }else {
//             cout << "n is not prime"<<endl;
//         }
//     }
// }

// NESTED LOOPS:
// loops inside loop
// sample question:-
// int main () {
//     int n = 2;
//     int x = 9;
     
//     for ( int i = 1; i<=n; i++ ) { // whats 1 iteration of this ?? ans in next line
//         cout << endl;
        // if we didn't give above endl line the output will look like :- 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 
//         for ( int i = 1; i<=x; i++ ) { // this full for loop will run x times and that will be 1 iteration of above for loop
//             cout << i << " "; ///even if we name another initialisation in place of i we will get the same output.
//         }
//     }
// }

// Q.) print this
// *****
// *****
// *****
// *****
// *****

// int main() {
//     for ( int i = 1; i<=5; i++) {
//     cout << "*****" << endl; 
//     }return 0;
// }

// Q.) if i have to print m no. of times the star in every line then:-

// int main() {
//     int n = 10
//     ; // we can write ; in next line also 

//     int m = 2
//     ;

//     for (int i = 1; i<=n; i++) { 
//         cout << i << endl;
//         for (int i = 1; i<=m; i++) { // can we take a different variable rather // yes we can take...but its better to take another variable 
//             cout << "small ***" ; 
//         }
//     }
// }

// out = 
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***
// small ***small ***

 
// we can write various things on the above in next line also

// Q.) random self made question:-
// int main() {
//     int x, y, z, p, q;
//     cout << "enter no of star in 1st line: " << endl;
//     cin>>x;
//     cout << "enter no of star in 2nd line: " << endl;
//     cin>>y;
//     cout << "enter no of star in 3rd line: " << endl;
//     cin>>z;
//     cout << "enter no of star in 4th line: " << endl;
//     cin>>p;
//     cout << "enter no of star in 5th line: " << endl;
//     cin>>q;

//     for (int i = 1; i<=x; i++) {
//         cout << "*";
//     }cout << endl;

//     for (int i = 1; i<=y; i++) {
//         cout << "*";
//     }cout << endl;

//     for (int i = 1; i<=z; i++) {
//         cout << "*";
//     }cout << endl;

//     for (int i = 1; i<=p; i++) {
//         cout << "*";
//     }cout << endl;

//     for (int i = 1; i<=q; i++) {
//         cout << "*";
//     }cout << endl;

//     return 0;
// }
// by the way the no. of times the loop runs it is called iteration.
// if loop runs once it is 1 iteration.
// the no. of times the loop runs is called its iteration.

// practice questions :-
// Q.) sum of all the no. from 1 to n which are divisible by 3.

// int main() {
//     int n;
//     cout << "enter value of n: \n" ;
//     cin>>n;

//     int sum = 0;
        // this loop is outer loop :-
//     for ( int i = 1; i<=n; i++ ) { // why and && (i%3 == 0) operator is not working in this for line
//         if ( i%3 == 0 ) { //this loop is called inner loop 
//             sum = sum + i;
                // we don't have to always write else
                // we also can just write else {}
//         }
//     }
//     cout << sum;
// return 0;
// }

// Q.) print the factorial of a number N. 

// int main() {
//     int n;
//     cout << "enter the value of n: " << endl;
//     cin>>n;

//     int m = 1;  // got wrong
//     for ( int i = 1; i<=n; i++) {
//         m =  m * i; //got wrong 
//     }
//     cout << m;
// }   

// LEC 4 : PATTERNS :-

// SQUARE PATTERNS:-

// n = number of lines

// rows - 1 2 3 4 5 horizontal   ( inner loops) most of the time 
// columns - 1  vertical         ( outer loops) most of the time 
//           2
//           3
//           4

// inner loop tells what to print in horizontal lines
// outer loop tells what to do in vertical line 

// int main() {
//     int n = 4;
//     // int m = 4;
//     for (int i = 1; i<=n; i++ ) { //outer loop 

//         for (int i = 1; i<=n; i++ ) { //inner loop 
//             cout << "* ";
//         }cout << endl;
//     }
// }

// if we start initialisation from i = 0 then ending value will be n
// if we start initialisation from i = 1 then ending value will be n-1 

// EX- same output diff code 
// int main() {
//     int n = 4;
//     // int m = 4;
    
//     for (int i = 0; i<=n-1; i++ ) {  // i<n;

        // for (int i = 0; i<=n-1; i++ ) { // or i<n;
//             cout << "* ";
//         }cout << endl;
//     }
// }

// Q.) print A B C D till Z  vertically 4 times.

// my solution :- sometimes compiler automatically converts data type sometimes we have to convert manually datatypes...
// when we have to convert datatype manually.learn that 
// int main() {
//     for (int i = 1; i<=4; i++) {
//         char m = 'A';
//         for ( char m = 'A'; m<=90; m++) { // for ( char m = 65; m<='Z'; m++) {
//             cout << m;
//         }cout << endl;
//     }
// }
// out = A TO Z 4 TIMES VERTICALLY

// ANOTHER APPROACH:-
// int main() {
//     int n=4;
//     for (int i = 0; i<n; i++) {
//         char ch = 'A';
// //why not char ch = "A"; // it didnt store it within " " or even char ch = A
// // it was stored in char ch = 'A'; ....why?
//         for (int i = 0; i<n; i++) {
//             cout << ch;
//             ch = ch + 1 ;
//         } cout << endl;}}

// learning :- 
// int main () {
//     int n = 17;
//     int m = 9;

//     int sum = 0;
    // for (int i = 0; i<n && i%3 == 0; i+=3){  //if for loop get once incorrect it dosent print next iteration
    //     cout<<i<<endl;
    //     }
    // }

    // for (int i=1; i<=n; i=i+3) {

    //     for ( int j = 1; j<=m; j++) {
    //         cout << j << " ";
    //     }cout << endl;}}


// quess:- tough question  // it took 6 hours and still can't solve this 
// print pattern
// 123
// 456
// 789

// wrong trial code :-
// int main() {
//     int n = 3;
//     int m = 9;
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     int j = 1;

//     for (int i = 1; i<=1; i++) {
        
//         for (int j = 1; j <= 9; j++) {  //how to make initialisation value the last value stored like int j;
//             cout << j << j+1 << j+2;
//             break;


//             cout << j; // here j = 1
//             a=j+1;  // here j = 2
//             cout <<a;
//             b=j+2; // here j = 3
//             cout << b; 
//             c=j+3; // here j = 4
//             cout << c; 
//             break;
//         }
//         cout << endl;
//     }
// }


// newlearn:-
// int main() {
//     char m = 'A';
//     for (int i = 0; i<2; i++) { //outer for loop means inner for loops will be divide in 2 parts 
//         for ( int j = 1; j<=4; j++ && m++) {// for (char m = 'A'; m<=n; m++) {
//         //inner for loop means how will the first iteration will look like it will be printed n time if the condion is correct.
//             cout << m;
//             cout << endl;
//     }
// }}
// out = 
// A
// B
// C
// D
// E
// F
// G
// H

// int main() {
//     char m = 'A';

//     for (int i = 0; i<2; i++) { 
//         for ( int j = 1; j<=4; j++ && m++) 
//             cout << m;
//             cout << endl;
//     }
// }
// out = 

// ques:-
// print
// ABCD
// EFGH
// IJKL
// MNOP


// int main() {
//     char m = 'A';
//     for (int i = 0; i<4; i++) {
//         for (int j = 0; j<4; j++) {
//             cout << m;
//             m++;
//         }
//         cout <<endl;
//     }}

// value of m is the last value of m....thats the problem in this code 
// // out = 
// ABCD
// EFGH
// IJKL
// MNOP

// correct code done by me after 1 hr.
// int main() {
//     char m = 'A';
//     for (int i = 0; i<4; i++) {
//         // char m = 'A'; //this was missing 
//         // if u want to reset the value of m the after outer loop mention char m = 'A';
//         for (int j = 0; j<4; j++) { 
//             //for first time the initialisation is checked and then it takes the last value 
//             cout << m;
//             m++;
//         }
//         cout <<endl;
//     }
// }

// again solved by me 
// int main() {
//     char m = 'A';
//     for ( int i = 1; i<= 4; i++) {
//         for ( int j = 1; j<= 4; j++ and m++) {
//             cout << m;
//         }cout << endl;
//     }
// }


// Q.)
// print :-
// 123
// 456
// 789
// correct code solved by me after fucking 5 hours of overthinking of wrong solutions
// int main() {
//     int n= 1;
//     for (int i = 1; i<=3; i++) {
//         for (int j = 1; j<=3; j++ && n++) { //we can add updatation of n++ also 
//             cout << n;
//             // n++; //we can do this also
//         }
//         cout << endl;
//     }
// }

// print this :-
// 123
// 456
// 789
// another way solved by me after 30 mins :-
// int main() {
//     int j = 1;
//     for (int i = 1; i<=1; i++) {
//         for (int i = 1; i<=3; i++) {
//             // cout << j << j+1 << j+2<<;
//             cout << j; //1
//             j= j+1;//2
//             cout << j;//2
//             j = j+1;//3
//             cout << j;//3
//             j++;//4
//             cout << endl;
//         } 
//     }
// }
// why after inner loop's all iteration is completed the outer loop runs 


// mam solutions :- 
// int main() {
//     int n = 3;  //n can be 4, 5, 6....
//     int num = 1;

//     for (int i = 0; i<n ; i++) {
//         for ( int j = 0; j<n; j++) {
//             cout << num;
//             num++;
//         }
//         cout << endl;
//     }
// }

// there is no automatic line change while inner loop is completed we have to manually write cout << end at the end of {}
// if u have to reset the variable u have to write it in between outer and inner loop

// print :--
// ABC
// DEF
// GHI
// int main() {
//     char m = 'A';
//     int n = 3;

//     for ( int i = 0; i<n; i++) {
//         for ( int j = 0; j<n; j++) {
//             cout << m;
//             m++;
//         }
//         cout << endl;
//     }
// }

// print this :-
// *
// **
// ***
// ****
// int main() {
//     int n = 4;
//     string c = "*";
//     for ( int i = 0; i<n; i++) {
//         for ( int j = 0; j<n; j++) {
//             cout << c;
//         }
//     }
// }

// ARRAYS BY TAKE U FORWARD:-
// IF WE WANT TO CREATE VERY LARGE AMOUNT OF VARIABLE OF SAME DATA TYPE WE USE ARRAYS: 
// datatype should be similar.
// if u store any other datatype to the allocated datatype then it will change it to the allocated datatype.
// arrays are stored in any memory address....but after the first memory address the other arrays are stored in consecutive memory address...
// like the address of first index of the array is "x" then the 2nd index will be x+1, 3rd will be X+2, ....



// int main() {
// INSTEAD OF :
//     int a, b, c, d, e;
//     cin>>a>>b>>c>>d>>e;
// }
// we can use:
// #include<bits/stdc++.h>
// using namespace std;
// int main() {
//     int arr[5];
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ;
//     cout << arr[3]<<endl;

//     // we can modify it also:
//     arr[3] += 10; //we can add
//     arr[3] = 16; //we can replace the value of the array at index 3rd.

//     cout << arr[3];
//     return 0;
// }
// the above arrays were 1D arrays....

// 2D arrays 
// int main() {
    // int arr[5]; // this means 5 boxes vertically or 1 row of 5 boxes...
    // int arr[3][5]; // this means 3 rows of 5 boxes
    //we can take any variable name of an array...not just arr[]
    // arr[1][3] = 13;
    // cout << arr[1][3]; // out = 13
// if u don't assign the value of any index it will print garbage value basically any random big values
// }

// new learning:-
// int main() {
//     string s = "striver";
//     cout << s[1] << endl;  // out = t

//     //how to find length of the function;
//     int len = s.size();
//     cout << s[len-1] << endl;  // out = r
//     s[len-1] = 'x';  // to change the string.
//     // why we cannot use double " " for string in the above case....may be they are character thats why
//     cout << s; //strivex

// }


// for loops :-
// new learning :-------------------------
// int main() {
//     for ( int i = 1;i<=5; i++) {
//         cout << i << endl;
//     }
// // cout << i<< endl;//this LOC will give error cuz we have not defined i before for loop...it was just for the for loop.
// }

// int main() {
//     int i;
//     for ( int i = 1;i<=5; i++) {
//         cout << i << endl;
//     }
// cout << i<< endl;  //in this LOC value of i will be any random no. cuz we have not defined the value of i before for loop,
// // we have only allot a space for i, not assign any value for i.
// }

// int main() {
//     int i =9;
//     for ( int i = 1;i<=5; i++) {
//         cout << i << endl;
//     }
// cout << i << endl; // out = 9 cuz after for loop the value of i will be same i guess. 
// }



// FUNCTIONS : -
// THIS ARE SET OF CODES THAT PERFORMS FOR YOU.
// IT IS USED TO MODULARISE CODE. IT IS USED TO INCREASE READIBILITY
// FUNCTIONS ARE USED TO USE SAME CODE MULTIPLE OF TIMES... 

// THERE ARE MANY TYPES OF FUNCTIONS :- SOME OF THEM ARE:- 
// void , return, parameterised, non- parameterised 


// void - this fn is used to do something but did not give/return any output.

// void printnames() {  // here void is function/keyword i guess and printnames is variable 
//     cout << "striver";
// } // the bracket of function should end seperately. 
// int main() {
//     printnames(); /// out striver.
//     return 0;
// }


// but

// re-run the code after permutaion and combination 

// void printName(int age) {
//     cout << "hey " << age;
// }
// int main() {
//     string name;
//     int age;
//     cout << "enter name:";
//     cin >> name;
//     cout << "enter age:";
//     cin >> age;

//     printName(age); //this is the right method to call a function:
//     return 0;
// }


// EX:- done by me.
// void printname(string name, string name2) { //we can have multiple data type in this printname function.
//     cout << "hey your name is - "<< name << " and " <<  name2<< endl;
// }
// void printage(int age, int age2) {
//     cout << "hey your age is - " << age << " and " << age2 << endl;
// }
// int main() {
//     string name, name2;
//     cout << "enter the name of the person 1: "<< endl;
//     cin>>name >> name2;
//     int age, age2;
//     cout << "enter the age of the person 1:" << endl;
//     cin>>age>>age2;


//     printname(name, name2);
//     printage(age, age2);
// }


// function for adding two numbers:-
// my code:-
// int sum(int num1, int num2) {
//     int num3 = num1 + num2;
//     cout << num3;
// }

// int main () {
//     int num1, num2;
//     cout << "enter num1 and num2: " << endl;
//     cin>>num1 >> num2;

//     sum(num1, num2);
// }

// sir code:-

// int sum(int num1, int num2) { //we could have done void function
//     int num3 = num1 + num2;
//     return num3; //this will give the value of num3
// }
// int main () {
//     int num1, num2;
//     cin>>num1 >> num2;

//     int res = sum(num1, num2);
//     cout << res;
// }

// there are some inbuilt function...like max(num1, num2), min(num1, num2)....for these we don't have to write any void or int function 
// Ex:-
// int maxx( int num1, int num2) {
//     if (num1>=num2) return num1;
//     else return num2;
// }


// without specific function:-
// int main() {
//     int num1, num2;
//     cin >> num1 >> num2;
//     int maxx = max(num1, num2); //this is the way to write inbuilt function
//     int minn = min(num1, num2);
//     cout << maxx << endl;
//     cout << minn;
// }


// pass by value :- takes the copy of the value whether it is integer or string or anyother datatype...and do xyz but returns the original value not the updated value 

// void doSomething(int num) {
//     cout << num << endl;
//     num +=5; 
//     cout << num << endl;
//     num +=5;
//     cout << num << endl;
// } 
// int main() {
//     int num; 
//     cin>>num;
//     doSomething(num);
//     cout << num << endl;  ///here the value came back to where it started i.e = 10
//     return 0;
// }


// pass by refrence  :- takes the original memory address and change it the the updated memory address...

// void doSomething(string &s) {  // just attach the &  sign to pass by refrence
//     s[0] = 't';
//     cout  << s << endl;
    
// }
// int main() {
//     string s; 
//     cin>>s;
//     doSomething(s);
//     cout << s << endl;  ///here the value came back to where it started i.e = 10
//     return 0;
// }


// instead of taking input one by one we can do :-

// int main() {
//     int arr[5];
//     // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     for ( int i = 0; i<=4; i++) {
//         cin >> arr[i];
//     }
//     // instead of printing output one by one we can do :-
//     for ( int i = 0; i<=4; i++) {
//         cout << arr[i] << " ";
//     }
// }


// HOW TO SOLVE PROBLEMS APPROACH:-
// understand the question 
// given values :- input, output, time and space complexity, test cases,....but before this try to make question click in ur mind...it
// should click...u should understand the problem and visualise it in ur mind only..
// approach
// program
// floachart/pseudocode


// #include <iostream>
// using namespace std;

// int main() {
//     int arr[] = {1,2,3,4,5};
//     cout << &arr[0] << endl;
//     cout << &arr[1] << endl;
//     cout << &arr[2] << endl;
//     cout << &arr[3] << endl;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int arr[5] = {1, 2, 3, 4, 5};

//     for(int i = 0; i < 5; i++) {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }




// ------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------

//LOVE BABBER PATTERN QUESTIONS:-

// ------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------


// Q.) print this :- 
// ****
// ****
// ****
// ****

// for square pattern (r=c)
// int main() {
//     int r,c;
//     cout << "enter the the rows and columns: " << endl;
//     cin>> r >> c;

//     int i = 1;
//     int j = 1;

//     while (j<=r){
//         int i = 1;
//         while (i<=c) {
//         cout << "*" << " ";
//           i++;
//         }cout << endl;
//         j++;
//     }
// }
// ------------------------------------------------------------------------------------------------------------------
// Q.) print this :-
// 111
// 222
// 333

// wrong code :-
// int main() {
//     int r,c;
//     cout << "enter the value of rows and columns: " << endl;
//     cin>> r,c ;

//     int i = 1;
//     int j = 1;

//     while (j<=r) {
//         int i=1;
//         while (i<=c) {
//             cout << j << " ";
//             i++;
//         }
//     cout << endl;
//     j++;
//     }
// }

// correct code :-
// int main() {
//     int r,c;
//     cout << "enter the rows and columns: " << endl;
//     cin>> r >> c;

//     int i = 1;
//     int j = 1;
//     int k = 1;

//     while (i<=r){
//         int j = 1;
//         while (j<=c) {
//         cout << k << " ";
//           j++;
//         }cout << endl;
//         i++;
//         k++;
//     }
// }
// ------------------------------------------------------------------------------------------------------------------
// print
// 1234
// 1234
// 1234
// 1234

// int main() {
//     int r, c;
//     cout << "enter rows and columns: " << endl;
//     cin >> r >> c;

//         for (int i= 1; i<=r; i++) {
//         int j=1;
//         for (j=1; j<=r; j++) {
//             cout << j ;
            
//         }
//         cout << endl;
//     }
// }

// ------------------------------------------------------------------------------------------------------------------
// print:-
// 123
// 456
// 789
// #include <iostream>
// using namespace std;
// int main(){
//     int r;
//     cout<<"Enter rows: ";
//     cin>>r;
//     int x =1;

//     for (int i= 1; i<=r; i++) {
//         int j=1;
//         for (j=1; j<=r; j++) {
//             cout << x ;
//             x++;
//         }
//         cout << endl;
//     }
// }
// or
//     int num=0;
//      for (int i=1;i<=r;i++) { // this means if this statement is true the the next lines will run
//         for (int j=1;j<=r;j++) {
//             num = num + 1;
//             cout<<num<<" ";
//         }
//         cout<<endl;
//     }
// }
// ------------------------------------------------------------------------------------------------------------------
// print:-
// *
// **
// ***
// ****
// mycode:- again solve after days took 30-45 mins
// int main() {
//     int r,c ;
//     cout << "enter rows and columns:- " <<endl;
//     cin >> r >> c;

    // for (int i= 1; i<=r; i++) {
    //     int j=1;
    //     for (j=1; j<=r; j++) {
    //         if (i>=j) {
    //             cout << "*";

    //         } 
    //         else{
    //             cout << " ";
    //         }}
    //     cout << endl;   }}

// another approach done by my past self//
//     int a = 1;
//     for (int i = 1; i<=c; i++) {
//         int j = 1;
//         for (int j = 1; j<=a; j++){
//             cout << "*";
//         }a++;
//         cout<<endl;
//     }
// } 

// by while loop:- when is updatation used;
// int main() {
//     int rows;
//     cout <<"enter rows:"<< endl;
//     cin >> rows;

//     int i=1;
//     int n=1;

//     while (i<=rows) {
//             int i=1;
//                 while (i<=n) {
//                     cout << "*" << " ";
//                     i++; //is this i++ is placed after {} or in bracket. 
//                 }
//     cout << endl;
//     n++;
//             }
// }
// ------------------------------------------------------------------------------------------------------------------
// solve 
// 123456
// 123456
// 123456
// 123456
// 123456
// 123456
// int main() {
//     int n;
//     cout << "enter n: " << endl;
//     cin >> n;

//     for(int i =1; i<=n; i++) {
//         int j= 1;
//         for (int j =1; j<=n; j++) {
//             cout << j << " ";
//     }cout << endl;
// }}
// ------------------------------------------------------------------------------------------------------------------
// solve:-
// 654321
// 654321
// 654321
// 654321
// 654321
// 654321
// int main() {
//     int n;
//     cout << "enter n: " << endl;
//     cin >> n;

//     for(int i=1; i<=n; i++) {
//         int j=n;
//         // for (int j =n; j<=n && j!=0; j=j-1) {
//         // for (int j =n; j!=0; j=j-1) {
//         cout << j << " ";      
//     }cout << endl;
//     // int j=n; ////probably we can start value of j from here also.
// }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:-
// *
// **
// ***
// ****
// int main() {
//     int c, r ;
//     cout << "enter r and c: " << endl;
//     cin  >> c >>r;
//     for(int i =1; i<=c; i++) {
//         int j=1;
//         for (int j =1; j<=r; j++) {
//             if ( i>=j) {
//                 cout << "*";
//             }
//             else {
//                 cout << "-";
//             }}
// cout << endl;
// }}
//                  OR
// the first time i solved this problem by this approach
// int main() {
//     int c;
//     cout << "enter c: " << endl;
//     cin  >> c;
//     int r = 1;
//     for(int i =1; i<=c; i++) {
//         int j=1;
//         for (int j =1; j<=r; j++) {
//             cout << "*";
//     }cout << endl;
//     r++;
// }}
// ------------------------------------------------------------------------------------------------------------------
// see the 1st iteration/loop/case then mid the last and then infinite and then maybe fixed ele and no updatation and then may be any exceptions like 0,1
// solve:-
// ****
// ***
// **
// *
// SOLVED BY ME AFTER 40-60MIN OF INTENSE FOCUS.and also a very different approach.
// int main() {
//     int c, r ;
//     cout << "enter r and c: " << endl;
//     cin  >> c >> r;
//     int s = r;
//     int k = 0;
//     for(int i =0; i<r; i++) {
//         if (r-k==s) {
//             int w = 0;
//             for (int w = 0; w<s; w++) {
//                 cout << "*";
//             }}
//         else {
//             int x = 0;
//             for (int x = 0; x<k; x++) {
//                 cout << "-";
//             }} 
// cout << endl;
// k++;
// s=s-1;
// }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVED THIS:- solved again after 15-20 mins of focus.
//  ****
//   ***
//    **
//     *
// int main() {
//     int r,c;
//     cout << "Enter rows and columns:- "<< endl;
//     cin >> r >> c;

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//     for (int j = 1; j<=r; j++) {
//         if (i <= j ) {
//             cout << "*";
//         }else{
//             cout << "-";}}
//     cout << endl; }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:-
// ****
// ***
// **
// *
// int main() {
//     int c;
//     cout << "enter r and c: " << endl;
//     cin  >> c;
//     int r = c;//
//     for(int i =1; i<=c; i++) {
//         int j=1;
//         for (int j =1; j<=r; j++) {
//             cout << "*";
//     }cout << endl;
//     r=r-1;
// }}
// ------------------------------------------------------------------------------------------------------------------


// solve:-
// **
// ****
// ******
// ********
// **********
// int main() {
//     int c;
//     cout << "enter columns: " << endl;
//     cin  >> c;

//     int r = 1;
//     // int start = 2;
//     for(int i =1; i<=c; i++) {
//         int j=1;
//             for (int j =1; j<=r; j++) {
//                 cout << "**";
//         }
//         cout << endl;
//         r++;
//     }
//  OR 
// int main() {
//     int c;
//     cout << "enter columns: " << endl;
//     cin  >> c;
//     for(int i =1; i<=c; i++) {
//         int j=1;
//             for (int j =1; j<=c; j++) {
//                 if (i>=j) {
//                 cout << "**";
//                 }else {
//                     cout << " ";
//                 }}cout << endl;}}
// ------------------------------------------------------------------------------------------------------------------
// solve :-
// 1
// 22
// 333
// 4444
// int main() {
//     int r;
//     cout << "enter rows: " << endl;
//     cin  >> r;
//     int k=1;
//     for (int i=1; i<=r; i++) {
//         for (int j=1; j<=k; j++) {
//             cout << i;
//         }
//         cout << endl;
//         k++;
//     }
// }
// ------------------------------------------------------------------------------------------------------------------
// solve :-
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// int main() {
//     int r,c ;
//     cout << "enter rows and column: " << endl;
//     cin  >> r >> c ;

//     // int k=1;
//     int s=1;
//     for (int i=1; i<=r; i++) {
//         int j =1;//with or without this the answer is comming same ???? why???
//         for (int j=1 ; j<=i; j++) {
//             cout << s;
//             s++;
//         }
//         cout << endl;
//         // k++;
// }}
// ------------------------------------------------------------------------------------------------------------------
// solve:-
// 1
// 23
// 345
// 4567
// int main() {
//     int r,c ;
//     cout << "enter rows and column: " << endl;
//     cin >> r;
//     // int k;
//     int s;
//         for (int i=1; i<=r; i++) {
//         int j =1;
//         // k=i;
//         s=i;
//         for (int j=1 ; j<=i; j++) {
//             cout << s;
//             s++;}
//         cout << endl;
//         s=i;

// or or or or or or 

    // int k=1;
    // int x;
    // for (int i=1; i<=r; i++) {
    //     int j =1;
    //     x=k;
    //     for (int j=1; j<=k; j++) {
    //         cout << x ;
    //         x++;
    //     }
    //     cout << endl;
    //     k++;
// }}
// ------------------------------------------------------------------------------------------------------------------
// solve :-
// 1
// 21
// 321
// 4321
// int main() {
//     int r,c ;
//     cout << "enter rows and column: " << endl;
//     cin  >> r >> c;

//     int k=1;
//     int x;
//     for (int i=1; i<=r; i++) {
//         int j=1;
//         x=k;
//         for (int j=1; j<=k; j++) {
//             cout << x;
//             x = x-1;///we just cannot write x-1 we have to write x = x-1.
//         }
//         k++;
//         cout <<endl;
//     }
// }
// solve :-
// AAA
// BBB
// CCC
// int main() {    
//     char t;
//     int r;
//     cout << "enter the character and rows: "<< endl;
//     cin >> t >> r;

//     for (int i=1; i<=r; i++) {
//         for (int j=1 ; j<=r; j++) {
//             cout << t;
//         }
//         t++;
//         cout << endl;
//     }
// }

// sir approach through while loop:-
// int main() {
// int n;
// cin >>n;  //enter 3 in terminal.

// int row =1;
// while (row<= n){
//     int col =1;

//     while (col<=n) {
//         char ch = 'A' + row-1;
//         cout << ch;
//         col = col +1;
//     }
//     cout << endl;
//     row++;      }}
// ----------------------------------------------------------------------------------------------
// solve :-
// ABC
// ABC
// ABC
// int main() {
//     char ch;
//     cout << "ENTER CHAR VALUE:" << endl;
//     cin >> ch;

//     int r;
//     cout << "enter rows " << endl;
//     cin  >> r;

//     char reset_ch;
//     reset_ch = ch;

//     for (int i=1; i<=r; i++) {
//         int j=1;
//         ch = reset_ch;
//         for (int j=1 ; j<=r; j++) {
//             cout << ch<< " ";
//             ch++;
//         }
//         cout <<endl;
//     }
// }

// SOLVE :-
// ABC
// DEF
// GHI
// int main() {
//     int r ;
//     cout << "enter rows: " << endl;
//     cin  >> r ;

//     char ch;
//     cout << "ENTER CHAR VALUE:" << endl;
//     cin >> ch;

//     for (int i=1; i<=r; i++) {
//         for (int j=1 ; j<=r; j++) {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
// }

// SOLVE:-
// A
// BB
// CCC
// DDDD
// int main() {
//     int r ;
//     cout << "enter rows: " << endl;
//     cin  >> r ;

//     char ch;
//     cout << "ENTER CHAR VALUE:" << endl;
//     cin >> ch;
//     int q =1;

//     for (int i=1; i<=r; i++) {
//         for (int j=1 ; j<=q &&( q!=(r+1) || q<=r) ; j++) {
//             // OR 
//         // for (int j=1; j <= (r-(r-q)) && j<=r ;j++) {
               // OR
//         for (int j=1; j<=q && q<=r; j++) {
//             // jab tak :- 
//             cout << ch;
//         }
//         cout << endl;
//         ch++;
//         q++;
//}}

// SOLVE:-
// A
// BC
// DEF
// GHIJ
// int main() {
//     int r ;
//     cout << "enter rows: " << endl;
//     cin  >> r ;

//     char ch;
//     cout << "ENTER CHAR VALUE:" << endl;
//     cin >> ch;
//     int q = 1;

//     for (int i=1; i<=r; i++) {
//             for (int j=1; j<=q && j<=(r+1); j++) {
//                 cout << ch;
//                 ch++;
//         }
//         cout << endl;
//         q++;
// }}

// SOLVE:-
// A
// BC
// CDE
// DEFG
// EFGHI
// FGHIJK
// GHIJKLM
// int main() {
//     int r ;
//     cout << "enter rows: " << endl;
//     cin  >> r ;

//     char ch;
//     cout << "ENTER CHAR VALUE: " << endl;
//     cin >> ch;
//     int q = 1;
//     char resetch;
//     resetch = ch;
 
//     for (int i=1; i<=r; i++) {
//             int j=1;
//             for (int j=1;j<=q && j<=(r+1);j++) {
//                 cout << ch;
//                 ch++;
//             }
//         resetch++;
//         ch = resetch;
//         cout << endl;
//         q++;
// }}

// SOLVE:-
// D
// CD
// BCD
// ABCD
// int main() {
//     int r, c;
//     cout << "enter rows and columns: " <<endl;
//     cin >> r >> c;
//     char ch, a;
//     cout << " enter character: " << endl;
//     cin >> ch;
//         for (int i=1; i<=r; i++) {
//         int j= 1;
//         a=ch;
//         for (int j=1; j<=i; j++) {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//         a=a-1;
//         ch=a;}}
//                          OR 
// int main() {
//     int r ;
//     cout << "enter rows: " << endl;
//     cin  >> r ;
//     char ch;
//     cout << "ENTER CHAR VALUE: " << endl;
//     cin >> ch;
//     int q = 1;
//     char resetch;
//     resetch = ch;
 
//     for (int i=1; i<=r; i++) {
//             int j=1;
//             for (int j=1; j<=q && j<=(r+1); j++) {
//                 cout << ch;
//                 ch++;
//             }
//         resetch--;
//         ch = resetch;
//         cout << endl;
//         q++;
// }}
// ------------------------------------------------------------------------------------------------
///////////////////////////////////////////////////////////////////////////////////////////////////
// SOLVE:-
// ABC
// BCD
// CDE
// int main() {
//     int r ;
//     cout << "enter rows: " << endl;
//     cin  >> r ;

//     char ch;
//     cout << "ENTER CHAR VALUE: " << endl;
//     cin >> ch;
//     int q = 1;
//     char resetch;
//     resetch = ch;
 
//     for (int i=1; i<=r; i++) {
//             int j=1;
//             for (int j=1;j<=r; j++) {
//                 cout << ch;
//                 ch++;
//             }
//         resetch++;
//         ch = resetch;
//         cout << endl;
//         q++;
// }}

// SOLVE:- SPACES PROBLEM
// good question took me 3-4 hr or more....26/1/26
/*
   *
  **
 ***
****
// */ 
// 3RD time solved took 5-10mins 
// int main() {
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >>r >>c;
//     int k;

//     for (int i = 1; i<=r; i++) {
//         int j=1;
//         k = r-i;
//         for (int j=1; j<=r; j++) {
//             if (j<=k)
//             {
//                 cout << "-";
//             }
//             else {
//                 cout << "*";
//             }
//         }
//         cout << endl;
//         }}

// 1st time solved by my own:- almost same method:-
// int main() {
//     int r, c;
//     cout << "enter rows and columns: " <<endl;
//     cin >> r >> c;
//     int m=1;

//     for (int i=1; i<=r; i++) {
//         int j= 1;
//         for (int j=1; j<=c; j++) {
//             if (j<=(r-m)){

//                 // if (r-i == 0) {
//                 //     cout << " ";
//                 // }
//             // if (( j<(r-i))  || (j=(r-i))) {   //by the way :- 3<3 (this condition is false) 
//                 cout << "-";}
//             else {
//                 cout << "*";}
//            }
//            cout << endl;
//            m++; }}

// sir approach with while loop:- a lil complex for me to understand...have to solve questions with while loop....while loop is weak.
// int main() {
//     int n;
//     cin>>n;
//     int row=1;
//     while (row <=n) {
//         // space print karlo
//         int space = n - row;
//         while (space) {
//             cout << " ";
//             space--;
//         } 
//         // space print karlo
//         int col=1 ;
//         while (col <= row) {
//             cout << "*";
//             col++;
//         }
//         cout << endl;
//         row++;
//     }
// }

// SOLVED AGAIN : 2HR TIME TAKEN AFTER OVERTHINKING AND GETTING DISTRACTED TOO MUCH:-3RD TIME IT TOOK 5MINS.
// D
// CD
// BCD
// ABCD

// int main() {
//     int r,c ;
//     cout << "enter rows and columns:" << endl;
//     cin >> r >> c;

//     char ch;
//     cout << "Enter character: " << endl;
//     cin >> ch;
//     char st = ch;

//     for (int i =1; i<=r; i++){
//         int j = 1;
//         char st = ch;
//         for (int j=1; j<=i; j++) {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//         st--;
//         ch=st;
// }}
// SAME QUESTION :-
// int main() {
//     int r,c ;
//     cout << "enter rows and columns:" << endl;
//     cin >> r >> c;

//     char ch;
//     cout << "Enter character: " << endl;
//     cin >> ch;
//     int x=1;
//     char a;

//     for (int i =1; i<=r; i++){
//         int j=1;
//         a = ch;
//         for (int j=1; (j<=x && x<=c); j++){
//             cout << ch; 
//             ch++;
//         }
//         a = a-1;
//         ch = a;
//         cout << endl;
//         x++;
//     }
// }
//notes:- check for all loops; specially end, start, mid;;;
//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         for (int j = 1; j<=r; j++) {
//             // int k = 1;
//             // for (int k=1; k=1; k++) {

//             // if ( u-(j-i) != r  ) {
//             if ( r-q == t) {

//                 cout << "-";
//             }
//             else {
//                 cout << "*";
//             }
//                 // if (u-r == q) {
//                 //     cout << "*";
//                 // }
//                 // else{
//                 //     cout << "-";
//                 // }
//             // if (u-i == r) {
//             //     cout << "*"; 
//             // }
//             // else {
//             //     cout << "-";
//             // }
//                             // if (r-i != 0 && r-i <= r) {
//                 //     cout << "*";
//                 //  }
//                 //  else {
//                 //     cout << "-";
//                 //  }
//             }
//             cout << endl;
//         q=q-1;
//         t++;     }}}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:- 1st time solve in 10 mins.
// 1111
//  222
//   33
//    4
// int main(){
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >>r >>c;
//     int x = 1;

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         for (int j = 1; j<=r; j++) {
//             if ( i<=j) {
//                 cout << x;
//             }else {
//                 cout << " ";
//             }}
//         x++;
//         cout << endl;   }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:- took 30 min or less
//    1
//   22
//  333
// 4444
// int main(){
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >> r >> c;
//     int x = 1;
//     int k = r+1;
//     int q;

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         q = k-i;
//         for (int j = 1; j<=r; j++) {
//              if (j<q) {
//                 cout << "-";
//             }
//             else {
//                 cout << x;
//             }
//         }
//         x++;
//         cout << endl;   }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:- 1st attempt took arround 30 mins:- 
// 1234
//  234
//   34
//    4
// int main(){
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >> r >> c;
//     int x = 1;
//     int h = x;
//     int k;

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         h = x;
//         k = r-c;
//         for (int j = 1; j<=r; j++) {
//              if (j>k) {
//                 cout << x;  
//                 x++; 
//             }
//             else {
//                 cout << "-";
//             }
//         }
//         h++;
//         x = h;
//         c--;
//         cout << endl;   }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:- took 30 mins 1st attempt.
//    1
//   23
//  456
// 78910
// int main(){
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >> r >> c;
//     int x = 1;
//     int k = r+1;
//     int q;

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         q = k-i;
//         for (int j = 1; j<=r; j++) {
//              if (j<q) {
//                 cout << "-";
//             }
//             else {
//                 cout << x;
//                 x++;
//             }
//         }
//         cout << endl;   }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE:- took 3 mins easy;
//    1
//   12
//  123
// 1234
// int main(){
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >> r >> c;
//     int x = 1;
//     int h = x;
//     int k = r+1;
//     int q;
//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         q = k-i;
//         h=x;
//         for (int j = 1; j<=r; j++) {
//              if (j<q) {
//                 cout << "-";
//             }
//             else {
//                 cout << x;
//                 x++;
//             }}  x=h;
//         cout << endl;   }}
// ------------------------------------------------------------------------------------------------------------------
// solve :- took 3min easy ;
// ****
// ***
// **
// *
// int main(){
//     int r,c ;
//     cout << "enter the no. of rows and columns: " << endl;
//     cin >>r >>c;

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         for (int j = 1; j<=c; j++) {
//             cout << "*";
//         }
//         c--;
//         cout << endl;}}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE THIS:- solve this question by myself after 3-4hr of focus
//   1   
//  121  
// 12321 
//1234321
// int main(){
//     int r= 4;
//     int rn = r-(r-1);
//     int c = 7;
//     int start = r;
//     int end = r;
//     int x = rn;
    
//     for (int i = 1; i<=r; i++) {  
//         int j = 1;
//         x = rn;
//         int ri = i;
//         for (int j = 1; j<=c; j++) {
//             if ( start <= j && j <= end ) {
//                 if (j>r) {
//                     ri--;
//                     cout << ri;
//                 }
//                 else {
//                 cout << x;
//                 x++;
//                 }
//         }
//             else {
//                 cout << " ";
//             }
//         }
//         cout << endl;
//         x = rn;
//         start--;
//         end++;   }}
// ------------------------------------------------------------------------------------------------------------------
// SOLVE :- this code will only work for this pattern only....5-7, 6-9, 7-11, 8-13.....
//     *
//    ***
//   *****
//  *******
#include <iostream>
using namespace std;
// #include <iostream>
// using namespace std;
// int main() {
// int r, c, L, R;
// cout << "Enter rows and columns: " << endl;
// cin >> r >> c;
// R = r;
// L = r;

// for (int i = 1; i<=r; i++) {
//     int j = 1;
//     for (int j = 1; j<=c; j++) {
//         if (R>=j and L<=j) { //power of "and" operation;
//             cout << "*";
//         }
//             else {
//                 cout << "-";
//             }
//         }
//         L--;
//         R++;
//         cout << endl;
//         }
//     }

// SOLVE THIS:-
//   *
//  ***
// *****
//  ***
//   *
// #include <cmath>;
// int main() {
// int r, c, L, R;
// cout << "Enter rows and columns: " << endl;
// cin >> r >> c;
// L = round((r/2)+1);
// R = round((r/2)+1);
// // double q = int(r/2);

//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//             for(int j = 1; j<=r; j++) {
//                 if ( L<=j and R>=j ) {
//                     cout << "*";
//                 }
//                 else {
//                     cout << "-";
//                 }
//             } 
//             cout << endl;
//             if (i<3) {
//             L--;
//             R++; 
//             }
//             else{
//                 L++;
//                 R--;}
//         }
//     }

// SOLVE THIS:- do it in last...
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
// int main(){
//     int r=5;
//     int c = 10;
//     int mid = c/2;
//     // int end = r;
//     int x = 1;
    
//     for (int i = 1; i<=r; i++) {
//         int j = 1;
//         // x = rn;
//         // int ri = i;
//         for (int j = 1; j<=c; j++) {
//             if (i=1) {
//             if (j>=mid) {
//                 cout << x;
//                 cout << x;
//             }
//         }
//         else {
//             if (j>=mid) {
//                 cout << "*";
//             }
//         }
//     }
        // if ( start <= j && j <= end ) {
        //         if (j>r) {
        //             ri--;
        //             cout << ri;
        //         }
        //         else {
        //         cout << x;
        //         x++;
        //         }
        // }
        //     else {
        //         cout << " ";
        //     }
        // }
        // cout << endl;
        // x = rn;
        // start--;
        // end++;
// }}












// striver pattern questions start:-
// how to write stuff in an online compiler :-
#include <bits/stdc++.h>
using namespace std;
// int main() {
// }

// class Solution{
//     public:
//     // without static:- 
//     // void print(int n) { // this is the void function named "print(n)" if we have to call in int main()
//        // void function does not return any value even if in that void function there is a print or cout statement untill and unless, it is not being called in int main()
//     // with static :-
//         static void print(int n) { 
//        for(int i=0; i<n; i++) {
//         for (int j = 0; j<n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//         }
//     }
// };
// int main(){
//     int n;
//     cin >> n;
//     // how to call the print(n) function...
//     Solution obj; //create obj of your class solution probably
//     obj.print(n);
    // if u dont want to use object, u can just go with the static method:-
    // int main() {
    // int n;
    // cin >> n;
    // Solution::print(n);}  // call directly without object
// }
// notes:-
// static means the function belongs to the class itself, not to any particular object.
// You can call it using Solution::pattern1(n) directly.


// 1st way (space, star, space)
// #include <iostream>
// using namespace std;
// int main() {
//     int r = 5;
//     for (int i = 0; i < r; i++) {
//         // left spaces
//         for (int j = 0; j < r - i - 1; j++) cout << "-";
//         // stars
//         for (int j = 0; j < 2*i + 1; j++) cout << "*";
//         // right spaces
//         for (int j = 0; j < r - i - 1; j++) cout << "-";
//         cout << endl;
//     }
// }

// 2nd way:- Center Expansion Approach
// #include <iostream>
// using namespace std;
// int main() {
//     int r = 5;
//     int width = 2*r - 1;
//     int center = r - 1;

//     for (int i = 0; i < r; i++) {
//         for (int j = 0; j < width; j++) {
//             if (j >= center - i && j <= center + i) cout << "*";
//             else cout << "-";
//         }cout << endl;
//     }}

// 3rd way :- Single Loop with String Construction
// #include <iostream>
// using namespace std;
// int main() {
//     int r = 5;
//     for (int i = 0; i < r; i++) {
//         string spaces(r - i - 1, '-');
//         string stars(2*i + 1, '*');
//         cout << spaces << stars << spaces << endl;
//     }}

// half solution by recursion...by GPT
// #include <iostream>
// using namespace std;
// void printRow(int i, int r) {
//     for (int j = 0; j < r - i - 1; j++) cout << "-";
//     for (int j = 0; j < 2*i + 1; j++) cout << "*";
//     cout << endl;
// }
// void pyramid(int i, int r) {
//     if (i == r) return;
//     printRow(i, r);
//     pyramid(i+1, r);
// }
// int main() {
//     int r = 5;
//     pyramid(0, r);
// }

                // lastSpace = j;   // store the last j value  //but dont write int lastSpace:- cuz it will create new local variable that disappears after the loop ends.
                                    // so just write lastSpace = j;



//     void reverse_pyramid(int r) {
//         int r = 5;
//         int n = r;
//         // REVERSE PYRAMID PATTERN
//         for (int i = 0; i<r; i++) { //outer loop
//             // space
//             for (int j = 0; j<i; j++) {
//                 cout << "-";   
//             }
//             // star
//             for (int j = 0; j<(2*(r-i)-1); j++) { //my little wrong approach was this :- for (int j = 0; j<(2*r-1); j++) {  
//                 cout << "*";
//             }
//             // space
//              for (int j = 0; j<i; j++) {
//                 cout << "-";   
//             }
//             cout << endl;
//             // r--;
//         }}};

// void diamond(int n) {
//             // int n= 10;
//         for ( int i = 0; i<n; i++) {
//                 // space:-
//                 if ( i<n/2) {
//                     for (int j=0; j<(n-(n/2)-1-i);j++) {
//                         cout << "-"; }}
//                 if ( n/2<=i) {
//                     for ( int j=0; j<abs(n-(n/2)-i); j++) {
//                         cout << "-";
//                     }}
//                     // star:-
//                 if ( i<n/2) {
//                     for (int j=0; j<(2*i+1);j++) {
//                         cout << "*"; }
//                     } 
//                 if ( n/2<=i) {
//                     for ( int j=0; j<2*(n-i)-1; j++) {
//                         cout << "*";
//                     }}
//                     // space:-
//                 if ( i<n/2) {
//                     for (int j=0; j<(n-(n/2)-1-i);j++) {
//                         cout << "-"; }
//                     }
//                 if ( n/2<=i) {
//                     for ( int j=0; j<abs(n-(n/2)-i); j++) {
//                         cout << "-";
//                     }}
//                     cout << endl;
//                 }}};
// these int main() is already built-it in online compilers.
// int main() {
//     int t;
//     cin>>t;
//     for (int q=0; q<t; q++){
//         int n;
//         cin>>n;
//         // practices::star(n);
//         practices obj;
//         obj.diamond(n);
//     }}

// class practices {
//     public:
    // void star1 (int n) {
        // // int n= 9;
        // for (int i=1; i<=n; i++) {
        //     // star :-
        //     if (i<=(n/2+1)) {
        //     for (int j=0; j<i; j++){
        //         cout << "*";
        //     }}
        //     if(i>(n/2 + 1)) {
        //         for (int j=0; j<(n-i+1); j++) {
        //             cout << "*";
        //         }}
        //     // space:-
        //     for ( int j=0; j<abs((n/2)+1-i); j++) {
        //         cout << "-";
        //     }
        //     cout << endl;
        // }

        // sir approach:- 
        // int n=5;
        // for (int i=1; i<=2n-1; i++) {
        //     int stars = i;
        //     if (i>n) i = 2*n - i;
        //     for ( int j = 1; j<=stars; j++) {
        //         cout << "*";
        //     }cout << endl;
        // }
// print :-
// 1
// 01
// 101
// 0101
// 10101
//     void star2 (int n) {
// // int n = 5; //as input :- no. of rows
//     for (int i=1; i<=n; i++) {
//         if(i % 2 == 1) { //odd row:-
//             for (int j = 0; j<i; j++) {
//                 if (j % 2 == 0 ){ //even column
//                 cout << "1";}
//                 else { //odd column
//                 cout << "0";} 
//             }}
//         if (i%2 == 0) { //even rows:-
//                 for ( int j=0; j<i; j++) { //
//                     if(j % 2 == 0) { //even column
//                     cout<< "0";}
//                     else{ //odd columns
//                     cout << "1";}
//             }}
//             cout << endl;
//         }}
//         // SIR APPROACH BETTER T(C):-
// //     int start=1;
// // for(int i=0; i<n;i++) {
// //     if(i%2 == 0) start = 1;
// //     else start = 0;
// //     for (int j=0;i<=i;j++) {
// //         cout << start;
// //         start = 1-start;
// //      } cout << endl;}
// };

// print this pattern:-
// 1------1
// 12----21
// 123--321
// 12344321
// void star12(int n) {
//     // int n=4; as input as rows;
//     int k = 0;
//     for ( int i = 1; i<=n; i++ ) {
//         // left words:-
//         for (int j=1; j<=i; j++) {
//             cout << j;
//             k=j;
//         }
//         // space:-
//         for (int j=1; j<=(2*n-2*i); j++) {
//             cout << "-";
//         }
//         // words:-
//         for (int c=1; c<=i; c++) {
//             cout << k;
//             k--;
//         }cout << endl;      
// }}};

// void star13(int n) {
//     int k=1;
//     for (int i =1; i<=n; i++) {
//         for (int j =1; j<=i; j++) {
//             cout << k << "";
//             k++;
//         }
//         cout << endl;
//     }

// void star14(int n) {
//     char ch='A'; //char is stored in single ' '
//     char k = ch; 
//         for (int i =1; i<=n; i++) {
//             char ch = k;
//             for (int j =1; j<=i; j++) {
//             cout << ch << "";
//             ch++;
//         }
//         cout << endl;
//     }

// void star15(int n) {
//     char ch='A'; //char is stored in single ' '
//     char k = ch; 
//         for (int i=n; i>n-n; i--) {
//             char ch = k;
//             for (int j=i; j>n-n; j--) {
//             cout << ch << "";
//             ch++;
//         }
//         cout << endl;
//     }

// void star16(int n) {
//     char ch='A';
//         for (int i =1; i<=n; i++) {
//             for (int j =1; j<=i; j++) {
//             cout << ch << " ";
//         }
//         ch++;
//         cout << endl;
//     }
// print this :-
// ---A---
// --ABA--
// -ABCBA-
// ABCDCBA
// void star17(int n) {
//     // int n= 4;
//     char ch = 'A';
//     char k = ch;
//     char lv;
//     for (int i=0; i<n; i++){
//         // space:-
//         ch=k;
//         for (int j=0; j<n-i-1; j++){
//             cout << "-";    }
//         // words:-
//         for (int j=0; j<(2*i)+1; j++){
//            if (j>i){
//            lv--;
//            cout << lv;}
//            else{
//             cout << ch;
//             lv=ch;
//             ch++;}}
//         // space:-
//         for (int j=0; j<n-i-1; j++){
//             cout << "-";
//         }           cout << endl;}}};

// print this pattern:
// E
// DE
// CDE
// BCDE
// ABCDE
// void star18(int n) {
//     char ch = 'E';
// // int n =5;
//     for (int i = 0; i<n; i++){
//         ch='E';
//         ch= ch-i;
//         for (int j=0;j<=i;j++){
//             cout<< ch;
//             ch++;
//         }cout << endl;}}};

// SOLVE THIS PATTERN:-
// **********
// ****--****
// ***----***
// **------**
// *--------*
// *--------*
// **------**
// ***----***
// ****--****
// **********
// void star19(int n) {
//     // int n=10;
//     for (int i= 0; i<=n; i++) {
//     if (i==n/2) {
//         continue;
//     }
//         // star;
//         for (int j =0; j<abs(n/2-i); j++) {
//             cout << "*";
//         }
//         // space;
//         for (int k=0; k<1; k++){
//         if (i>n/2) {
//             for (int j =0; j<(2*n - 2*i) ; j++) {
//                 cout << "-";
//         }}else{
//         for (int j =0; j<2*i; j++) {
//             cout << "-";}
//         }}// star;
//          for (int j =0; j<abs(n/2-i); j++) {
//              cout << "*";}       cout << endl;}}};

// *--------*
// **------**
// ***----***
// ****--****
// **********
// ****--****
// ***----***
// **------**
// *--------*
// void star20(int n) {
//     // int n= 9;
//     for (int i = 0; i<n; i++) {
//         // star;
//         for (int k=0; k<1; k++){
//         if (i>n/2) {
//             for(int j=0; j<n-i; j++){
//                 cout << "*";}
//             }     else{
//             for (int j=0; j<i+1; j++) {
//                 cout << "*";
//                  }}}
//space;
//         for (int j=0; j<abs(n-(2*i+1)); j++) {
//             cout << "-";}
// star;
//         for (int k=0; k<1; k++){
//         if (i>n/2) {
//             for(int j=0; j<n-i; j++){
//                 cout << "*";}
//             }else{
//             for (int j=0; j<i+1; j++) {
//                 cout << "*";
//             }}}
//         cout << endl;
//     }}};

// ****
// *--*
// *--*
// ****
// void star21(int n) {
//     for (int i =1; i<=n; i++) {
//         for (int j =1; j<=n; j++) {
//     if ( (i==1 and (1<=j<=n)) || (i==n and 1<=j<=n) || (1<=i<=n and (j==n)) || (1<=i<=n and (j==1)) ){ 
//             cout << "*"; }
//             else{   cout << "-";}
//         }
//         cout << endl;        }}
// };
// SIR method same but short:-
// for(int i=0;i<n;i++) {
//     for(int j=0;j<n;j++) {
//         if (i==0 || i==n-1 || j==0 || j==n-1) {
//         cout << "*"; }
//         else {cout << " ";   }
//     }
//     cout << endl;}}

// SOLVE THIS PATTERN :- TOOK 3 HR OF EFFECTIVE FOCUS; REVISION REQUIRE 3-5 TIMES ATLEAST
// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444
// void star22(int n) {
//     // cin >> n=7;
//     int main=(n/2+1); //4
//     int m=main;
//     int left = (n/2+1); //4
//     int r, lv, lv1;
//     int right = (n/2+1); //4
//     for (int i =0; i<n; i++) {
//  if (i<=n/2) {
// // left
//             int left = (n/2+1); //4
//     for(int j=1; j<=i; j++) {
//             cout << left;
//             lv = left; //last value of left
//             left--;}
// // main
//     for (int j=1; j<=(n-2*(i)); j++) {   //or for (int j=1; j<=2*(n/2-i)+1 ; j++) {
//             cout << main;
//         } 
// // right
//         // int right = (n/2+1); //4
//         // right= right-i+1; ///instead of all this used lastvalue of left;
//     for (int j=1; j<=i; j++) {
//             cout <<lv;
//             lv++;
//         }
//         main--; }

// else{
// // left
//         int m=(n/2+1);
//     for (int j=1; j<=(n-1-i); j++) {
//         cout << m;
//         lv1=m;
//         m--;
//     }
// // main
//     for (int j=1; j<=abs(2*(n/2-i)-1) ; j++) {
//                 // or 
//     // for(int j=1; j<=(i-(n-1-i)+1); j++) {
//         cout << (n/2-(n-1-i)+1);
//     }
// // right
//     // int r=((n/2+1)-(n-1-i)+1);
//     for(int j=1; j<=(n-1-i); j++){
//         cout <<lv1;
//         lv1++;            }}
//             cout<< endl;     }
// }};
// int main() {
//     int t;
//     cin>>t;
//     for (int q=0; q<t; q++){
//         int n;
//         cin>>n;
//         // practices::star(n);
//         practices obj;
//         obj.star22(n);
//     }}
// 




// when to use an array:- when similar datatupe is used multiple times
// int main() {
    // 1D- ARRAYS:-
    // int arr[5];
    // in arrays, we have 0 based indexing;
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    // OR:-
//     for (int i=0;i<5;i++) {
//         cout << " write the value of arrays at index:  " << i << " ";
//         cin >> arr[i];
//     }
//     cout << " values in arr[5] were:- ";
//    for (int i=0;i<5;i++) {
//         cout << arr[i] << " ";
//     }}
    // cout << "3th index array :-" << arr[3]; // will print the value inside array of 3 th index;
    // cout << arr[99];  //this was not the defined size of the array so it will give any random output
    //all the data inside the array should be of same data-type 
    // any index can be stored in any random address it is not defined exact memory address....but the second(1) index will be stored right after the 1st(0) index(consecutive) 

    // 2D ARRAYS:-
    // int arr[3] [5];
    // cin >> arr[1] [4];
    // all index value can be changes just like an integer datatype; 
    // cout << "value at row 1 and column 4 =" << arr[1] [4];

    // STRINGS:- 
    // string s = "Striver";
    // cout << s[2]; // output = r;
    // 0 based indexing is used, here  also...
    // int len = s.size(); // to find the size of the s string..
    // cout << s[len-1];  //output = r; // to know the last index 
    // all index value can be changes just like an integer datatype; 
    // s[3] = 'k';
    // cout << s[3]; //output k 
    // cout << s[7];// nothing will get printed; cuz the last index is 6 not 7, length is 7;

    // FUNCTIONS:- 
    // TO USE SAME SET OF CODE MULTIPLE TIMES;
    // A SET OF CODE WHICH PERFORMS SOMETHING FO YOU;
    // USED TO MODULARISE CODE;
    // TO INCREASE READIABILITY;

    // EX:-
    // void - does not return anything;
    // return
    // PARAMETERISED - (int n)
    // NON-PARAMETERISED - () 
// }
// EX:-
    // void printName(string name) {
    //     cout << "Your name is :- " << name;
    // }
    // int main() {
    //     string name;
    //     cin >> name;
    //     printName(name); //Your name is :- aryan

    //     string name2;
    //     cin>> name2;
    //     printName(name2);  // out = Your name is :- shruti
    // }
// EX :-
    // void printAge() {
    //     cout << "everyone should be above 18";
    // }
    //  int main() {
    //     printAge(); //output = everyone should be above 18
    //  }

    // inside parameter we can take multiple data(int mun1, int num2 , char ch)

// EX:-
// int sum(int num1, int num2) {
    // int num3 = num1 + num2;
    // return num3;  // will return value of num3 in function sum();
    // instead of return num3, we can write :-
    // cout << num3; // but we will not store it in int result;
// }
// int main() {
    // int num1, num2;
    // cin >> num1 >> num2;
    // int result = sum(num1, num2); // here, sum function will be called and it will return the value of num3;
    // here the program will be stopped and will go to the sum() function and process that and will return something;
    // cout << result; // if we return num3;
    // else just write :-
    // sum(int num1, int num2);     }

    // PASS BY VALUE:- copies the original value, and dosomething with it but gives the manipulated value and original value  
    // void doSomething(int num) {
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    // }
    // int main() {
    //     int num = 10;
    //     doSomething(num);

    //     cout << num << endl; //output - 10 15 20 10 vertically
    // }
    // PASS BY refrence:- just & in function(parameter), it will manipulate with the original data 
    // void doSomething(int &num) {
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    //     num += 5;
    //     cout << num << endl;
    // }
    // int main() {
    //     int num = 10;
    //     doSomething(num);

    //     cout << num << endl; //output - 10 15 20 20 vertically
    // }
    // we can do this with string also 

    // array is always/by default passed by refrence;
    // EX:-
    //   void doSomething(int arr[], int n) {
    //     arr[1] += 100; //add 100 inside arr of index 1 like if it has 17 it will become 117;
    //     cout << "Value inside functions: " << arr[1] << endl;
    // }
    // int main() {
    //     int n = 5;
    //     int arr[n];
    //     for (int i =0; i<n; i++) {
    //         cin >> arr[i];
    //     }
    //     doSomething(arr, n);

    //     cout << "value inside int main:" << arr[1] << endl;
    //     doSomething(arr, n);        }
        // output :-  111 222 333 444 555
// Value inside functions: 322
// value inside int main:322

// start github:-

// start of array:-
// SOLVE THIS:-
// Q1:- do this
// Q2:- do this 
// Q3:- do this 
    

    





























// break problems into small problems...small parts.

// revision quesitons :-

// /this means if for loop (condition) is true then the following code will run
// always try to solve question in pen paper first or in mind then in compiler....build the logic of code first then code.
// i have not deep understanding of ++i and i++
// i have not deep understanding of multiple = i * multiple.
// solve implicit and explicit conversion questions more  
// i waste a lot of time solving questions on my own and finding my own methods:

// notes:
// in computers single digit 0/1 is called bit, and 8bit = 1byte
// so int date type store 4bytes storage means 8bit * 4 = 32bit means 32 times o/1
// it means 32 spaces of 0/1 is reserved for this datatype even if u don't use them
// primitive(basic) data type int - 4byte, char - 1byte, bool - 1byte, float - 4 byte, double - 8byte
// for numbers computer take their o/1 value but for characters computers take their ASCII values and store it in memeory
// american standard code of information interchange - it is fixed that A - 65, B - 66, a - 97, b - 98, etc...
// the computer take 65, 68 or 9798 and change it to 0/1 and then stores it in memory.
// boiler-plate code : #include <iostream> and using namespace std;
// write variable in camelCase format,, its a sign of good programers.
// obviously keywords cannot be variable names
// return 0; -- This ends the program and returns control to the operating system.
// factorial n = multiplication of numbers from 1 to n....represented as n!
// endl = end of line.
// probably we cannot write 2 initialisation in for loop but we can write 2 updatation in for loop
// ******** this character is stored in string c = "*";
// only if the for loops condition is true then only for loop iteration runs if condition get false even once it won't run.
// and condition are for how many time an iteration runs.... 
// do step by step
// i think for me time bound solving problems are very importent cuz i can solve the question but i take a long time.......important for interview... 
// optimisation is king;
// always look for exception like what can go wrong...

// search :-
// how to learn the coding language in a perfect way....
// important thing/topics in c++ language.
// how to solve question fast in dsa 
// how to build logic behind questions fast or attomatically or intutively
// how to get a salary of 1cr in india or 4cr in foreign...things to do inorder to get that salary
// how to find my code error by looking in terminal only ???
// if-else in for loop
// why people say we have to be consistent in coding not to give too much gaps in it.
// how to improve pattern recongnisition


// doubts :-
// why do we write return 0;
// why do we write #inlcude namespace std;
// why do we write int main()
// why do we write 
// why do we write return 0; at the end of code
// understand the diff btw a++ and ++a
// form where to where does the value of a variable is stored like: left to right or right to left 
// a = a+i or a+i = a ...... if we initialize int a = 0; then what 
// is there any search bar or feature on  vscode just like in onenote.
// when we have to convert datatype manually.learn that 
// once try tripple for loop:
// if in starting of the loop int i=1 is given then why in inner loop we have to again write int i=1; ???
// in starting int i=1; id there and after {} of outer loop why we have to again write int i=1; in inner loop??? or it will take the value of current value of i=lets say 4 then inner loop will start from 4 or 1???  
// for (int i=1 //if we write here int i = 1 then does it restart the i from 1 or whether it continues the last value of i.
//  before running u should be able to guess the iteration, ans, output of the code.
