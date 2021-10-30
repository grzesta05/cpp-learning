  #include <iostream>
  #include <vector>
  #include <string>
  #include <fstream>
  #include <bits/stdc++.h>
  #include "headers.h"

  using namespace std;


  class student {
  protected:
  	string name;
  	string surname;
  	vector<double> grades;
  public:
    string getName(){return name + " " + surname;}
    vector<double> getGrades(){return grades;}
  	student(string name, string surname, const vector<double>& grades1) :
  		grades(grades1), name(name), surname(surname) {}
  };

  class subject
  {
      protected:
      	string name, teacher;
      public:
      	subject(const string& name, const string& teacher) :
      		name(name), teacher(teacher) {}

      	string getTeacher() { return teacher; }
      	string getName() { return name; }
  };

  class ClassO {
      	vector<student> Students;
      	vector<subject> subjects;
    public:
      	student getStudentById(int id) { if (id < Students.size())return Students[id]; }
      	vector<student> getStudents() { return Students; }



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
      				name = line.substr(0, line.find(" "));
      				surname = line.substr(line.find(" "), line.substr(line.find(" ")).find(" "));
      				string gradesStr = line.substr(line.find(surname) + surname.length());
      				for (int i = 0; i < gradesStr.length() / 2; i++)
      				{
      					grades.push_back(atof(gradesStr.substr(i * 2).c_str()));
      				}
              student St(name, surname, grades);
              Students.push_back(St);
      			}
      		}
      	}
  };


  int main()
  {
  ClassO klasa1("uczniowie");
  cout<<klasa1.getStudentById(0);
  }
