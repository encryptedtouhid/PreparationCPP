//
//  main.cpp
//  MyStrCopy
//
//  Created by Khaled Md Tuhidul Hossain on 27/03/2024.
//

#include <iostream>

int main() {
    char source[] = "Hello, World!";
    char destination[20];

    // Copy source to destination
    strcpy(destination, source);

    // Print destination
    std::cout << "Destination: " << destination << std::endl;

    return 0;
}

char *strcpy(char *strDest, const char *strSrc) {
    if (strDest == nullptr || strSrc == nullptr) // Check for nullptr pointers
        return nullptr;
    
    char *temp = strDest; // Store the start address of destination string

    while ((*strDest++ = *strSrc++) != '\0') // Copy the characters until null terminator
        ;

    return temp; // Return the start address of destination string
}
