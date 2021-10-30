#pragma once
#include <iostream>
#include <bits/stdc++.h>
#include "subject.cpp"

using namespace std;

class student {
protected:
  string name;
  string surname;
  vector<double> grades;

public:
  //Ternary
  bool isGrat = (getAvg()>=4.75 ? true : false);
  string getName(){return name + " " + surname;}
  vector<double> getGrades(){return grades;}
  double getAvg(){
    double avg = 0;
    for(int i = 0; i < grades.size(); i++)
    avg+=grades[i];

    return avg/grades.size();
  }
  student(string name, string surname, const vector<double>& grades1) :
    grades(grades1), name(name), surname(surname) {}
};
