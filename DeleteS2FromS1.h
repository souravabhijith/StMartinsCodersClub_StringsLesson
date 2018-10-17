#include <stdio.h>
#include <stdlib.h>

/*
Remove characters from the first string which are present in the second string.
Ex Input : s1 : abcde, s2 : db, and finally s1 : ace
Solve this method in 3 ways . Note down your observations in each way.
*/

/*
Way 1 : 
-> Bruteforce
-> Create a new string s3 to store chars temporarily
-> Read each char from s1 and check if that char exists in s2, if it dosent exist, copy it into s3
-> Add a '\0' at end of s3
-> Copy s3 into s1.
*/
void deleteS2FromS1_nSquare(char *s1,char *s2) {
	
}

/*
Way 1 : 
-> CountArray
-> Create a new array called count to store which char is present in s2. Create also a new s3.
-> Read s2 completely and populate count array.
-> Read each char from s1 and check if that char exists in s2 or not. (Checking should be done
via count array in a single step, you should not access s2 again. )
 if it dosent exist, copy it into s3
-> Add a '\0' at end of s3
-> Copy s3 into s1.
*/
void deleteS2FromS1_n(char *s1,char *s2) {
	
}

/*
Way 1 : 
-> CountArray + NoExtra Space
->  In previous cases we are using extra s3 to temporarily store final output.
-> Can you remove it ? THINKKKK

Hint : See if you can maintain 2 index pointers one which tracks current char, 
second which tracks last replacable char
*/
void deleteS2FromS1_n(char *s1,char *s2) {
	
}