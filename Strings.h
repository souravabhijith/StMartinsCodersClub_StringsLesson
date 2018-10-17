#include <stdio.h>
#include <stdlib.h>
#include "stringHelpers.h"

/* Reverses the order of words in a sentence
 * input:
 * sentence: a string containing one/many words.
 * output:
 * the order of words in the sentence must be reversed
 * 
 * eg: input : "My name is Inigo Montoya"
 *     output: "Montoya Inigo is name My"
 */
void reverse_sentence(char *sentence){

}

/* Reverses the individual words in the sentence.
 * The positions of each word relative to the sentence must be the same before and after.
 * input:
 * sentence: a string containing one/many words.
 * output: each word in the sentence ust be reversed.
 * 
 * eg: input: "Hello world"
 *     output: "dlrow olleH"
 */
void reverse_words(char *sentence){

}

/* Find the number of occurances of each word to its right.
 * Input:
 * sentence: a string containing one/many words
 * *arr: an array of integers
 * count: the number of words in the sentence
 * Eg: 
 * input: ("one two three two one two four", [0,0,0,0,0,0,0], 7)
 * output: arr = [1,2,0,1,0,0,0]
 */
void word_count(char *sentence, int *arr, int count){
    
}

/**
Solve this as part of level 2.

Create a random string of len chars. 
ie if we pass 5, this method should populate str with some random chars like
abCeQ

Note : Only populate smallcase,large case letters and digits. 
Think how you can do it. 

Assume len+1 memory for str is already allocated. 
+1 is to copy \0 at end.
*/
void createRandomString(char *str, int len) {

}