  #include <iostream>
  #include <bits/stdc++.h>
  using namespace std;

  ostream& operator<<(ostream& stream, ClassO& ClassObj)
  {
    vector<student> students = ClassObj.getStudents();
    for(int i = 0; i < students.size(); i++)
    {
      stream<<students[i].getName()<<endl;
    }
    return stream;
  }

  ostream& operator<<(ostream& stream, student& student)
  {
    stream<< student.getName();
    vector<double> grades= student.getGrades();
    for(int i = 0; i <grades.size(); i++)
    {
      stream<<" " << grades[i];
    }
    return stream;
  }
