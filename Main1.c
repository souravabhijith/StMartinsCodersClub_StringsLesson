#include <stdio.h>
#include <stdlib.h>
#include "Strings.h"
#include "basics.h"
#include "stringHelpers.h"

int test_my_strlen() {
    char input[4][20] = {
        "One", "", "%786hYsds", NULL
    };
    int expected_result[] = {
        3, 0, 9, 0
    };
    int result;
    int test_cases = 4;
    int idx;

    for (idx = 0 ; idx < test_cases ; idx++) {
        fprintf(stdout, "Input: %s \t Expected Output: %d\n", input[idx], expected_result[idx]);
        result = my_strlen(input[idx]);
        if (result != expected_result[idx]) {
            fprintf(stderr, "\tFailed, your output: %d\n", result);
            return 0;
        } else {
            fprintf(stdin, "\tPassed\n");
        }
    }
    
    return 1;
}

int test_my_str_cmp() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0
    return 0;
}

int test_my_str_i_cmp() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0

    return 0;
}

int test_my_str_cmp_range() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0
    
    return 0;
}

int test_my_strrev_range() {
    //FILL THIS with test cases, Return 1 if all test cases passed else 0

    return 0;
}

int test_my_strrev() {
    char input[4][20] = {
        "qasdewrfgt", "", NULL, "a"
    };
    char expected[4][20] = {
        "ygfrwedsaq", "", NULL, "a"
    };
    int idx, test_cases = 4;
    char *result = NULL;

    for (idx = 0 ; idx < test_cases ; idx++) {
        printf("input: %s, expected output: %s\n", input[idx], expected[idx]);
        result = my_strrev(input[idx]);
        if (!my_str_cmp(expected[idx], result)) {
            fprintf(stderr, "\tFailed, your output: %s\n", result);
            return -1;
        } else {
            printf("Passed\n");
        }
    }

    return 0;
}

int test_stringHelpers() {
    
    if (!test_my_strlen()) {
        fprintf(stderr, "Test for my_strlen() failed.\n");
    } else {
        fprintf(stdout, "Test for my_strlen passed.\n");
    }

    if (!test_my_str_cmp()) {
        fprintf(stderr, "Test for my_str_cmp() failed.\n");
    } else {
        fprintf(stdout, "Test for my_strlen passed.\n");
    }

}

int test_basics() {
    // write tests for all the functions in basics.c
}

int test_Strings() {
    // write tests for all the functions in Strings.c
}

int main(int argc, char **argv) {

    if (!test_stringHelpers()) {
        fprintf(stderr, "Test for stringHelpers failed.\n");
    } else {
        fprintf(stdout, "Test for stringHelpers passed.\n");
    }

    return 0;
}