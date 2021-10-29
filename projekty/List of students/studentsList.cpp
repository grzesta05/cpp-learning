#include <iostream>

#include <bits/stdc++.h>
using namespace std;


class student {
protected:
    string name;
		string surname;
    vector<double> grades;
public:
    student(string name, string surname, const vector<double> &grades1):
		grades(grades1), name(name), surname(surname){}
};

class subject
{
	protected:
	string name, teacher;

	public:
	subject(const string &name,const string &teacher):
		name(name), teacher(teacher){}

	string getTeacher(){return teacher;}
	string getName(){return name;}

};

class Class{
	vector<student> Students;
	vector<subject> subjects;
public:
	student getStudentById(int id){if(id<Students.size())return Students[id];else return NULL;}
	vector<student> getStudents(){return Students;}

	Class(string filename)
	{
		ifstream file();
		file.open(filename);
		if(!file)
			cout<< "File doesnt exist";
		else
		{
			string line, name, surname;
			vector<double> grades;
			while(getline(file, line))
			{
			name = line.substr(0, line.find(" "));
			surname = line.substr(line.find(" ")line.substr(line.find(" ")));
			string gradesStr = line.substr(line.find(surname)+surname.length());
			for(int i = 0; i < gradesStr.length()/2; i++)
			{
				grades.push_back(atof(gradesStr.substr(i*2)));
			}

			}
		}
	}


};



int main()
{

}
