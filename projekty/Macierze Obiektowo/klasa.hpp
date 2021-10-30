#include <string>
#ifndef _KLASA_HPP
#define _KLASA_HPP
#include <iostream>
using namespace std;
class Matrix
{
protected:
    double** a = nullptr;
    int m; 
	int n;
    string name;
public:
    friend Matrix operator+(Matrix a, Matrix b);
	friend Matrix operator*(const Matrix &a, int b);
	friend Matrix operator*(Matrix a, Matrix b);
	friend istream& operator>> (istream& s, const Matrix &a);
	friend istream& operator<< (ostream& s, Matrix a);

	double Det();
	Matrix();
    void Create(int x, int y);
    Matrix(int x, int y, string N);
    Matrix(const Matrix& A);

    void Fill(int s);
    void Show() const;
    void Set(int i, int j, double r);
    double Get(int i, int j) const;
    int Get_m() const;
    int Get_n() const;
    void SetName(string N);
    string GetName() const;
    void Transpoz();
    ~Matrix();
};

#endif
