//
//  MyString.cpp
//  MyString
//
//  Created by Khaled Md Tuhidul Hossain on 27/03/2024.
//

#include <iostream>
#include <cstring>

class String {
public:
    // Constructor
    String(const char *str = nullptr) {
        if (str != nullptr) {
            m_data = new char[strlen(str) + 1];
            strcpy(m_data, str);
        } else {
            m_data = new char[1];
            *m_data = '\0';
        }
    }
    
    // Copy constructor
    String(const String &another) {
        m_data = new char[strlen(another.m_data) + 1];
        strcpy(m_data, another.m_data);
    }
    
    // Destructor
    ~String() {
        delete[] m_data;
    }
    
    // Assignment operator
    String& operator=(const String &rhs) {
        if (this != &rhs) {
            delete[] m_data;
            m_data = new char[strlen(rhs.m_data) + 1];
            strcpy(m_data, rhs.m_data);
        }
        return *this;
    }
    
    const char* get() const{
        return m_data;
    }
    
private:
    char *m_data; // Pointer to dynamically allocated memory for the string data
};

