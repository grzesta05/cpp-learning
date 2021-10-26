#include <iostream>
using namespace std;


class Class{

};

class subject
{
	protected:
	string name, teacher;
	public:
	subject(const string &name,const string &teacher):
		this->name(name), this->teacher(teacher){}

	string getTeacher(){return teacher;}
	string getName(){return name;}

};

class student
{
protected:
    string name, surname;
    map<string, double> grades;
public:
    student(string name, string surname)
};
int main()
{

}
