#pragma once
#include <iostream>
#include <vector>
#include "person.h"
#include <Windows.h>
using namespace std;

class Program {
private:
	vector<Person*> male;
	vector<Person*> female;
	vector<string> result;
public:
	Program();
	~Program();
	void Run();				//���� �����
	int PrintMenu();		//���۸޴� ���÷���
	void AddUser();			//���� �߰�
	void DisplayUsers();		//��ü ���� ���÷���
	//void Matching();		//��Ī
	//void ExportResult();	//��� ���
	//void Quit();			//����
	void ClearScreen();		//�ܼ� ȭ���� Ŭ�����ϴ� �Լ�
};