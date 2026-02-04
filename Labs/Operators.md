

🧪 Workshop: MyString (A Simple Stack-Based String Class)

Important Note – Use the CSTR Module

For this workshop you MUST NOT use:

#include <cstring>

or any standard C-string library functions.

Instead, you are required to use the CSTR module provided by the professor for all underlying C-string operations such as:

copying strings

concatenating strings

finding string length


The purpose is to practise using course-provided utilities instead of relying on the standard library.


---

Objective

In this workshop you will practise:

Designing a class with private data

Writing constructors and a destructor

Implementing member functions

Overloading operators:

+, +=

prefix ++, postfix ++

[] (subscript) in two forms

type conversion to const char*


Writing stream-friendly methods using ostream and istream


All of this will be done using fixed stack memory (no dynamic memory).


---

Constraints

❌ Do not use std::string

❌ Do not use dynamic memory

❌ Do not include <cstring>

✅ Use the CSTR module functions provided in class for all string manipulation



---

Class Requirements

Create a class named:

MyString

Private Data Member

char m_data[4096];

This must always contain a valid null-terminated C-string.



---

Public Interface

1) Constructor

MyString(const char* str = "");

Copy str into m_data using CSTR utilities

If str is nullptr, treat as empty

Truncate safely if longer than 4095 characters



---

2) Destructor

~MyString();

(Does nothing – required for practice)


---

Stream-Friendly Member Functions

3) Display

std::ostream& display(std::ostream& os = std::cout) const;

Write m_data to os

Return os



---

4) Read

std::istream& read(std::istream& is = std::cin);

Use:


is.getline(m_data, 4096);

Return is



---

5) Length Query

int length() const;

Use CSTR utilities to calculate length



---

Operator Overloads

A) operator+=

MyString& operator+=(const MyString& other);

Append safely using CSTR functions.


---

B) operator+

MyString operator+(const MyString& other) const;

Return a new MyString that is the concatenation of both.


---

C) Prefix ++

MyString& operator++();

Add one space BEFORE the string.


---

D) Postfix ++

MyString operator++(int);

Add one space AFTER the string.


---

Subscript Operators

E) Non-const

char& operator[](int index);

F) Const

const char& operator[](int index) const;

Allow safe access to characters.


---

Type Conversion Operator

G)

operator const char*() const;

Return the internal m_data pointer.


---
