// Declares a dictionary's functionality

#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <stdbool.h>

// Maximum length for a word
// (e.g., pneumonoultramicroscopicsilicovolcanoconiosis)
#define LENGTH 45

// Prototypes
bool check(const char *word); //char * represents that the word will be a string , o/p is a boolean
unsigned int hash(const char *word); //input is a constant string , o/p is an unsigned integer(non negative)
bool load(const char *dictionary); //string dictionary , output is a boolean 
unsigned int size(void);
bool unload(void);

#endif // DICTIONARY_H
