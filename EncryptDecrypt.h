#include <stdio.h>
#include <stdlib.h>

/*
Write a C function which takes a string and a integer as input and creates an encrypted string.
You need to create the encrypted string in the output string passed to  method

Input : "Coders cluby0!", 2
Output : "eQFGTU*ENWDA0*"

If character is a alphabet replace it with alphabet that comes after n steps in other case. (Ie convert lowercase
to upper case and upper case to lower case).
n is passed as parameter
for eg if character is 'a'
and n=2
'a' gets replaced with 'C' which is two steps away and in opposite case.
similarly 'A' can be replaced with 'c'. 'c' gets replaced by 'E' etc.
 If it's a ending alphabet like 'z' , after z we dont have any alphabets next to it to consider, in such cases start from starting
 'z' + 2 => 'b' => 'B' ('z' => 'B')
 for 'Z' =>  'b'

 If character is a number, leave it as it is.

 If character is none of the above replace with '*'.
*/

void encrypt(char* input, int n, char* output)
{
	//Dummy code
	output[0]='a';
	output[1]='\0';
}

/*
Now its time to decrypt, write a function which takes a encrypted string and a integer as input and create a decrypted string.
Input : "eQFGTU*ENWDA0*", 2
Output : "Coders*cluby0*"

If the character is a alphabet decrypt it (reverse order of encrypt), else consider the same character in decrypted string
*/

void decrypt(char* input, int n, char* output)
{
    //Dummy code
	output[0]='a';
	output[1]='\0';
	
}
