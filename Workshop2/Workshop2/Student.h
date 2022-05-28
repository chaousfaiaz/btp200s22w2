//==============================================
// Name           : MD Faiaz
// Email          : mfaiaz@myseneca.ca
// Student ID     : 164899213
// Section        : NAA
// Date           : 05/26/2022
//==============================================
//I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.
//shared all my code for entire w2 LAB with yafet esayas yesayas@myseneca.ca
#ifndef SDDS_EMPLOYEE_H_
#define SDDS_EMPLOYEE_H_

#define DATAFILE "students.csv"

namespace sdds
{
   struct Student
   {
      char *m_name;
      int m_studentNumber;
      char m_grade;
   };

   //sorts the dynamic array of students based on the GPA of the employees.
   void sort();

   // loads a student structue with its values from the file
   bool load(Student &student);

   // allocates the dyanmic array of students and loads all the file
   // recoreds into the array
   bool load();

   // the display function that
   // displays a student record on the screen:
   void display(const Student &student);

   //  the display function that
   // first sorts the students then displays all the students on the screen
   void display();

   // the deallocateMemory function that
   // will deallocate all the names in the student elements first,
   // then it will deallocate the student array
   void deallocateMemory();
}
#endif // SDDS_EMPLOYEE_H_