#include "program.h"

Program::Program() {
}
Program::~Program() {
}
void Program::Run() {
	int state;
	char tmp = ' ';

	while (1) {
		ClearScreen();
		state = PrintMenu();
		cout << state << endl;
		switch (state) {
		case 1:
			ClearScreen();
			AddUser();
			break;
		case 2:
			ClearScreen();
			DisplayUsers();
			cout << "메인메뉴로 가려면 B 입력 ";
			while (tmp != 'B') {
				cin >> tmp;
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			cout << "프로그램을 종료합니다.";
			return;
		}
	}
}

int Program::PrintMenu() {
	char state = ' ';

	cout << "[이상형 매칭 프로그램]" << endl;
	cout << "\n1.정보입력\n\n2.정보보기\n\n3.매칭하기\n\n4.결과보기\n\n5.끝내기" << endl;
	while (state < '1' || state > '5') {
		cin >> state;
	}

	return (int)state - 48;
}

void Program::AddUser() {
	Person* person;
	char job;
	int flag = 1;

	cout << "---------------------------------------" << endl;
	cout << "현재 하시는 일은 무엇인가요?(1.무직 2.학생 3.직장인) "<< endl;
	cout << "번호로 입력해 주세요 : ";
	cin >> job;

	while (flag) {
		switch (job) {
		case '1':
			person = new Free("무직");
			if (person->InsertInfo() == 'Y') {
				if (person->GetGender() == 'M')
					male.push_back(person);
				else
					female.push_back(person);
			}
			return;
		case '2':
			person = new Student("학생");
			if (person->InsertInfo() == 'Y') {
				if (person->GetGender() == 'M')
					male.push_back(person);
				else
					female.push_back(person);
			}
			return;
		case '3':
			person = new Worker("직장인");
			if (person->InsertInfo() == 'Y') {
				if (person->GetGender() == 'M')
					male.push_back(person);
				else
					female.push_back(person);
			}
			return;
		default:
			cout << "직업을 다시 입력해주세요(1.무직 2.학생 3.직장인) : ";
			cin >> job;
			break;
		}
	}
}

void Program::DisplayUsers() {
	cout << "[남성]" << endl;
	for (unsigned int i = 0; i < male.size(); i++) {
		male[i]->Print();
	}
	cout << "[여성]" << endl;
	for (unsigned int i = 0; i < female.size(); i++) {
		female[i]->Print();
	}
}

void Program::ClearScreen()
{
	HANDLE                     hStdOut;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD                      count;
	DWORD                      cellCount;
	COORD                      homeCoords = { 0, 0 };

	hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hStdOut == INVALID_HANDLE_VALUE) return;

	/* Get the number of cells in the current buffer */
	if (!GetConsoleScreenBufferInfo(hStdOut, &csbi)) return;
	cellCount = csbi.dwSize.X *csbi.dwSize.Y;

	/* Fill the entire buffer with spaces */
	if (!FillConsoleOutputCharacter(
		hStdOut,
		(TCHAR) ' ',
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Fill the entire buffer with the current colors and attributes */
	if (!FillConsoleOutputAttribute(
		hStdOut,
		csbi.wAttributes,
		cellCount,
		homeCoords,
		&count
	)) return;

	/* Move the cursor home */
	SetConsoleCursorPosition(hStdOut, homeCoords);
}