//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2022
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//shared all my code for entire w2 LAB with yafet esayas yesayas@myseneca.ca

#include "Student.h"
using namespace sdds;
int main() {
   if (load()) {//---------originaly if(load())
      display();
   }
   deallocateMemory();
   return 0;
}