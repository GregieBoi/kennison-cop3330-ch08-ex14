/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 McGreggor Kennison
 */

#include "std_lib_facilities.h"

// takes in a constant int and prints it
void f(const int num) {

    // print num
    cout << num << "\n";

}

// takes in a constant int, performs calculation, and prints output
void f2(const int num) {

    // initialize out and set to num + 3;
    int out = num + 3;

    // print out
    cout << out << "\n";

}

// main
int main() {

    // initialize and set num
    int num = 28;

    // call f and f2
    f(num);
    f2(num);

}

/*

    So we definitely can declare a function parameter as a constant. It still compiles and runs just fine.
    I'm not super sure why we would want to do so, all it means is that we can't change variable inside the function.
    I found that some people say it could be useful in preventing some syntax errors with "==" and "=", but thats such
    a small thing to worry about it doesn't seem worth it to me. It probably isn't popular or used often because it
    doesn't have a great use from what I can find.

 */