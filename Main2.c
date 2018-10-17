#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "DeleteS2FromS1.h"
#include "EncryptDecrypt.h"


int test_decrypt() {
    //write test cases just like test_encrypt for function decrypt(() which is in EncryptDecrypt.h file
	return 0;
}

int test_encrypt() {
	char inputchar[4][20] = {
		"Coders cluby0!", "", "!!!!!", "12345"
	};
	int inputint[4] = {
	   2, 1, 0, 3
	};
	char expected[4][20] = {
		   "eQFGTU*ENWDA0*", "", "!!!!!", "12345"
	};
	int idx, test_cases = 4;
	char *result = NULL;

	for (idx = 0; idx < test_cases; idx++) {
		printf("input string : %s,  input integer : %d, expected output: %s\n", inputchar[idx], inputint[idx], expected[idx]);
		char result[100];
		encrypt(inputchar[idx], inputint[idx], result);
		if (strcmp(expected[idx], result)) {
			fprintf(stderr, "\tFailed, your output: %s\n", result);
			return 0;
		}
		else {
			printf("Passed\n");
		}
	}

	return 1;
}



int test_EncryptDecrypt() {
	if (!test_encrypt()) {
		fprintf(stderr, "Test for encrypt() failed.\n");
		return 0;
	}
	else {
		fprintf(stdout, "Test for encrypt() passed.\n");
		return 1;
	}

	if (!test_decrypt()) {
		fprintf(stderr, "Test for decrypt() failed.\n");
		return 0;
	}
	else {
		fprintf(stdout, "Test for decrypt() passed.\n");
		return 1;
	}
}

int testDeleteS2FromS1() {
	//Input S1 : abcde, S2 : de , Final S1 will be abc
	//Input S1 : aaabe , S2 : eaaa , Final S1 will be b
	return 0;
}

int testDeleteS2FromS1_LargeCases() {
	//Create a random string s1 of 10000 chars 
	// create a random string s2 of 10000 chars
	// Pass these both to 3 ways of testDeleteS2FromS1. and note down the timing observations
	return 0;
}

int main(int argc, char **argv) {
	char str[11];
	printf("Creating random string of 10 length is : %s\n", createRandomString(str,10));
	if (!test_EncryptDecrypt()) {
		fprintf(stderr, "Test for EncryptDecrypt Failed.\n");
	}
	else {
		fprintf(stdout, "Test for EncryptDecrypt Passed.\n");
	}
	//fill with test functions of other modules
	return 0;
}
