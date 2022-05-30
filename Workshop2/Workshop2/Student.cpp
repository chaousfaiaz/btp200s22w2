//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 06/02/2021
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//shared all my code for entire w2 LAB with yafet esayas yesayas@myseneca.ca
#include <iostream>
#include "Utils.h" //-------------------------------------------------------- implemented in workshop 1 part 2 (DIY)
#include "Student.h"
#include "File.h"

using namespace std;

namespace sdds
{
   // global variables
   int noOfStudents;
   Student *students;

   void sort()
   {
       //loop to iterate through the number of students and assigning number
      int i, j;
     Student temp;
      for (i = noOfStudents - 1; i > 0; i--){
         for (j = 0; j < i; j++){
            if (students[j].m_grade > students[j + 1].m_grade){
               temp = students[j];
               students[j] = students[j + 1];
               students[j + 1] = temp;
            }
         }
      }
   }

   bool load(Student &students){
      bool ok = false;
      char name[128];
      if (read(name) && read(students.m_studentNumber) && read(students.m_grade) ){
         students.m_name = new char[strLen(name) + 1];
         strCpy(students.m_name, name);
         ok = true;
      }
      return ok;
   }

   bool load(const char* FILENAME){
      bool ok = false;
      int i = 0;
      if (openFile(FILENAME)){
         noOfStudents = noOfRecords();

         students = new Student[noOfStudents];

         for (int a = 0; a < noOfStudents; a++){
            i += load(students[a]);
         }

         if (i != noOfStudents){
            cout << "Error: incorrect number of records read; the data is possibly corrupted" << endl;
         }
         else{
            ok = true;
         }

         closeFile();
      }
      else{
         cout << "Could not open data file: " << FILENAME << endl;
      }
      return ok;
   }

   void display(const Student &students){
      cout << students.m_name << ", " << students.m_studentNumber << ": " << students.m_grade << endl;
   }

   void display(){

      sort();

      for (int i = 0; i < noOfStudents; i++){
         cout << i + 1 << ": ";
         display(students[i]);
      }
   }

   void deallocateMemory(){
      for (int i = 0; i < noOfStudents; i++){

         delete[] students[i].m_name;
      }
      delete[] students;
   }

}