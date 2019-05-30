#pragma once
#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//�θ� Ŭ����
class Person {
protected:
	string name;
	string age;
	char gender;
	string job;
	string p_number;
	string ideal_type;

public:
	Person(string);
	void DefaultPrint();
	char GetGender();
	virtual char InsertInfo() { return 'N'; };
	virtual void Print() {};
};

//���1
class Free : public Person {
protected:
	string src_income;
	string ing;
public:
	Free(string);
	virtual char InsertInfo() override;
	virtual void Print() override;
};

//���2
class Student : public Person {
protected:
	string place;
	string major;
public:
	Student(string);
	virtual char InsertInfo() override;
	virtual void Print() override;
};

//���3
class Worker : public Person {
protected:
	string place;
	string department;
	string salary;
public:
	Worker(string);
	virtual char InsertInfo() override;
	virtual void Print() override;
};