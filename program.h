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
	void Run();				//구동 출발점
	int PrintMenu();		//시작메뉴 디스플레이
	void AddUser();			//유저 추가
	void DisplayUsers();		//전체 유저 디스플레이
	//void Matching();		//매칭
	//void ExportResult();	//결과 출력
	//void Quit();			//종료
	void ClearScreen();		//콘솔 화면을 클리어하는 함수
};