#include <iostream>
#include <bits/stdc++.h>
#include "headers.h"

using namespace std;

ostream& operator <<(ostream& stream, ClassO& ClassObj)
{
  vector<student> students;
  students = ClassObj.getStudents();
  for(int i = 0; i < students.size(); i++)
  {
    stream<<students[i].getName()<<endl;
  }
  return stream;
}

ostream& operator<<(ostream& stream, const student& student)
{
  stream<< student.getName();
  vector<double> grades= student.getGrades();
  for(int i = 0; i <grades.size(); i++)
  {
    stream<< grades[i];
  }
}
