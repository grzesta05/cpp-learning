#include <iostream>
#include <bits/stdc++.h>

#include "klasa.hpp"
using namespace std;

Matrix::Matrix()
{
    m = 0;
    n = 0;
}
Matrix ScalarMultiply(Matrix A, double k);

double Matrix::Det()
{
	if(n != m){
	cout<< "Wyznaczniki macierzy mo¿na obliczyæ tylko dla macierzy kwadratowych";
	return -1;
	}	
	double wyzn = 0;
	if(n ==1 ){
	wyzn = a[0][0];	
	}else if(n==2)
	{
		wyzn = a[0][0]*a[1][1] - a[1][0] * a[0][1];
	}else if(n==3){
		wyzn = a[2][0] * a[1][2] * a[0][1] + a[2][1]*a[1][0] *a[0][2] +a[2][2]*a[1][1]*a[0][0];
		wyzn -= a[0][2] * a[1][1] * a[2][0] + a[0][0] * a[1][2] * a[2][1] + a[0][1] *a[1][0] * a[2][2];
			}
return wyzn;
 } 
Matrix operator+(Matrix a, Matrix b){
	Matrix tmp(a.Get_m() ,a.Get_n(), "tmp");
	for(int i = 0; i < tmp.m; i++)
	{
		for(int j = 0; j < tmp.n; j++)
		tmp.a[i][j] = a.a[i][j] + b.a[i][j];	
	}
	tmp.Show();
	return tmp;
}

Matrix operator*(const Matrix &a, int b){
	Matrix res(ScalarMultiply(a,b));
	return res;
}
Matrix operator*(Matrix a, Matrix b){
 Matrix iloczyn;
    iloczyn.Create(a.Get_m(), b.Get_n());
    for (int i = 0; i < a.Get_m(); i++) 
	for (int o = 0; o < b.Get_n(); o++) 
	for (int j = 0; j < a.Get_n(); j++) 
	iloczyn.Set(i, o, a.Get(i, j) * b.Get(j, o));
    return iloczyn;
}

istream& operator>> (istream& s, const Matrix &a) 
{
	for(int i = 0; i < a.Get_m() ; i++)
	{
		for(int j = 0; j < a.Get_n(); j++)
		{
			
			s>> a.a[i][j];
			
		}
	}
}

istream& operator<< (ostream& s, Matrix a)
{
 for (int i = 0; i < a.Get_m(); i++)
    {
        for (int o = 0; o < a.Get_n(); o++) cout << a.Get(i,o) << " ";
        cout << endl;
    }
}
void Matrix::Create(int x, int y)
{
    m = x;
    n = y;
    a = new double* [m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new double[n];
        for (int o = 0; o < n; o++) a[i][o] = 0;
    }
}

Matrix::Matrix(int x, int y, string N)
{
    Create(x, y);
    name = N;
}

Matrix::Matrix(const Matrix& A)
{
    m = A.Get_m();
    n = A.Get_n();
    a = new double* [m];
    for (int i = 0; i < m; i++)
    {
        a[i] = new double[n];
        for (int o = 0; o < n; o++) a[i][o] = A.Get(i, o);
    }	
}

void Matrix::Fill(int s)
{
	  srand(time(NULL));
    for (int i = 0; i < m; i++) for (int o = 0; o < n; o++) a[i][o] = rand() % s + 1;
}

void Matrix::Show() const
{
    for (int i = 0; i < m; i++)
    {
        for (int o = 0; o < n; o++) cout << a[i][o] << " ";
        cout << endl;
    }
}

void Matrix::Set(int i, int j, double r)
{
    a[i][j] = r;
}

double Matrix::Get(int i, int j) const
{
    return a[i][j];
}

int Matrix::Get_m() const
{
    return m;
}

int Matrix::Get_n() const
{
    return n;
}

void Matrix::SetName(string N)
{
    name = N;
}

string Matrix::GetName() const
{
    return name;
}

Matrix::~Matrix()
{
	if(a != nullptr)
   {
 for (int i = 0; i < m; i++) delete[] a[i];
    delete[] a;
}}

Matrix Add(Matrix A, Matrix B)
{
    Matrix suma;
    suma.Create(A.Get_m(), A.Get_n());
    for (int i = 0; i < suma.Get_m(); i++) 
	for (int o = 0; o < suma.Get_n(); o++) 
	suma.Set(i, o, A.Get(i, o) + B.Get(i, o));
    return suma;
}

Matrix ScalarMultiply(Matrix A, double k)
{
    Matrix iloczyn;
    iloczyn.Create(A.Get_m(), A.Get_n());
    for (int i = 0; i < iloczyn.Get_m(); i++) 
	for (int o = 0; o < iloczyn.Get_n(); o++) 
	iloczyn.Set(i, o, A.Get(i, o) * k);
    return iloczyn;
}

Matrix Multiply(Matrix A, Matrix B)
{
    Matrix iloczyn;
    iloczyn.Create(A.Get_m(), B.Get_n());
    for (int i = 0; i < A.Get_m(); i++) 
	for (int o = 0; o < B.Get_n(); o++) 
	for (int j = 0; j < A.Get_n(); j++) 
	iloczyn.Set(i, o, A.Get(i, j) * B.Get(j, o));
    return iloczyn;
}
