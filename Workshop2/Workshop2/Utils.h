//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2022
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//shared all my code for entire w2 LAB with yafet esayas yesayas@myseneca.ca
#ifndef SDDS_UTILS_H
#define SDDS_UTILS_H

namespace sdds
{

    // Function prototype

    // Copies the srouce character string into the destination
    void strCpy(char *des, const char *src);

    // Copies the source character string into the destination upto "len"
    // characters. The destination will be null terminated only if the number
    // of the characters copied is less than "len"
    void strnCpy(char *des, const char *src, int len);

    // Compares two C-strings
    int strCmp(const char *s1, const char *s2);

    // strnCmp: Compares two C-strings upto "len" characters.
    int strnCmp(const char *s1, const char *s2, int len);

    // returns the lenght of the C-string in characters
    int strLen(const char *s);

    // returns the address of first occurance of "str2" in "str1"
    // returns nullptr if no match is found
    const char *strStr(const char *str1, const char *str2);

    // Concantinates "src" C-string to the end of "des"
    void strCat(char *des, const char *src);

}
#endif