#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include "students.cpp"
using namespace std;

class ClassO {
      vector<student> Students;
      vector<subject> Subjects;
  protected:
    void getSubjects(vector<subject> &subjects,string line)
    {
      while(line.find(" ") != string::npos)
      {
        subjects.push_back(line.substr(0, line.find(" ")));
        line = line.substr(line.find(" "));
      }
    }
  public:
      vector<student> getStudents() { return Students; }
      vector<subject> getSubjects() { return Subjects; }
      ClassO(string filename)
      {
        ifstream file1(filename+".txt");

        if (!file1)
          cout << "File doesnt exist";
        else
        {
          string line, name, surname;
          vector<double> grades;
          while (getline(file1, line))
          {
            // Getting subjects; Issue with getting Subjects - it makes students go blank

            name = line.substr(0, line.find(" "));
            surname = line.substr(name.length()+1, line.substr(name.length()+1).find(" "));
            string gradesStr = line.substr(line.find(surname) + surname.length()+1);
            for (int i = 0; i < gradesStr.length(); i++)
            {
              if(gradesStr[i] != ' ')
              grades.push_back((double)gradesStr[i]-48);
            }
            student St(name, surname, grades);
            Students.push_back(St);
            grades.clear();
          }
        }
      }
};
