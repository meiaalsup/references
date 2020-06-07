// initialize a pointer to an array, and a char
void* myPtr = malloc(4);
char myChar = 'd';

// address of myChar
char* myCharPtr = &myChar;

// dereference
char myCharValue = *myCharPtr;

// reference operator &
char& myCharRef = myChar;
myCharRef == myChar; // true

// TLDR:
// & in an lvalue type is a reference
// & to an rvalue gets the address
