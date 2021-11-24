#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include "students.cpp"


class ClassO {
      vector<student> Students;
      vector<subject> Subjects;

      void appendSubjects(std::string s)
      {
        ifstream file(s+".txt");
        if(!file)
        {
          std::cout<<"Wrong Subjects file";
        }else
        {
          std::string line;
          while(getline(file, line))
          {
            std::string subName = line.substr(0, line.find(" "));
            line =  line.substr(line.find(" ")+1);
            subject s(subName, line);
            Subjects.push_back(s);
          }
        }
      }

  public:
      vector<student> getStudents() { return Students; }
      vector<subject> getSubjects() { return Subjects; }

      double getAvg(){
        double a=0;
        for(int i = 0; i < Students.size(); i++)
          a+=Students[i].getAvg();
        return a/Students.size();
      }

      ClassO(std::string filename, std::string subjectsFileName)
      {
        appendSubjects(subjectsFileName);
        ifstream file1(filename+".txt");

        if (!file1)
          std::cout << "File doesnt exist";
        else
        {
          std::string line, name, surname;
          vector<double> grades;
          while (getline(file1, line))
          {
            // Getting subjects; Issue with getting Subjects - it makes students go blank

            name = line.substr(0, line.find(" "));
            surname = line.substr(name.length()+1, line.substr(name.length()+1).find(" "));
            std::string gradesStr = line.substr(line.find(surname) + surname.length()+1);
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
