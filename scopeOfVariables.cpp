// Copyright (c) 2023 Santiago Hewett All rights reserved.
// .
// Created by: Santiago Hewett
// Date: October 2, 2023
// This program shows how local and global variables work

#include <iostream>

// define the global variable
int var_x = 11;

void localVariable() {
    // this shows what happens with local variables
    int var_x = 6;
    int var_y = 3;
    int var_z = var_x + var_y;
    std::cout << "Local var_x, var_y, var_z: " << std ::endl;
    std::cout << var_x << " + " << var_y << " = " << var_z << std::endl;
}

void globalVariable() {
    // this function shows what happens with global variables
    int var_y = 4;
    int var_z = var_x + var_y;
    std::cout << "Global var_x, var_y, var_z: " << std::endl;
    std::cout << var_x << " + " << var_y << " = " << var_z << std::endl;
}

int main() {
    // this function calls local and global
    localVariable();
    globalVariable();

    std::cout << "\nDone. " << std::endl;
}
