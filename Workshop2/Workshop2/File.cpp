//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2022
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//shared all my code for entire w2 LAB with yafet esayas yesayas@myseneca.ca

#include <cstdio>
#include "File.h"

namespace sdds
{
   FILE *fptr;
   bool openFile(const char filename[])
   {
      fptr = fopen(filename, "r");
      return fptr != NULL;
   }
   int noOfRecords()
   {
      int noOfRecs = 0;
      char ch;
      while (fscanf(fptr, "%c", &ch) == 1)
      {
         noOfRecs += (ch == '\n');
      }
      rewind(fptr);
      return noOfRecs;
   }
   void closeFile()
   {
      if (fptr)
         fclose(fptr);
   }
   bool read(char *studName)
   {
      return fscanf(fptr, "%[^\n]\n", studName) == 1;
   }

   bool read(int &studNum)
   {
      return fscanf(fptr, "%d,", &studNum) == 1;
   }

   bool read(char &studGrade)
   {
      return fscanf(fptr, "%c,", &studGrade) == 1;
   }
}
