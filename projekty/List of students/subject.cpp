#pragma once
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class subject
{
    protected:
      string name, teacher;
    public:

      subject(const string& name) :
        name(name), teacher(teacher) {}
      string getTeacher() { return teacher; }
      void setTeacher(const string &teacher){this->teacher = teacher;}
      string getName() { return name; }
};
