//
//  main.cpp
//  MyString
//
//  Created by Khaled Md Tuhidul Hossain on 27/03/2024.
//

#include <iostream>
#include "MyString.cpp"

int main(int argc, const char * argv[]) {
    String str1("Hello, World!");
    String str2(str1);
    String str3(str2);
    std::cout << str1.get() << std::endl;
    std::cout << str2.get() << std::endl;
    std::cout << str3.get() << std::endl;
    return 0;
}
