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
			cout << "���θ޴��� ������ B �Է� ";
			while (tmp != 'B') {
				cin >> tmp;
			}
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			cout << "���α׷��� �����մϴ�.";
			return;
		}
	}
}

int Program::PrintMenu() {
	char state = ' ';

	cout << "[�̻��� ��Ī ���α׷�]" << endl;
	cout << "\n1.�����Է�\n\n2.��������\n\n3.��Ī�ϱ�\n\n4.�������\n\n5.������" << endl;
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
	cout << "���� �Ͻô� ���� �����ΰ���?(1.���� 2.�л� 3.������) "<< endl;
	cout << "��ȣ�� �Է��� �ּ��� : ";
	cin >> job;

	while (flag) {
		switch (job) {
		case '1':
			person = new Free("����");
			if (person->InsertInfo() == 'Y') {
				if (person->GetGender() == 'M')
					male.push_back(person);
				else
					female.push_back(person);
			}
			return;
		case '2':
			person = new Student("�л�");
			if (person->InsertInfo() == 'Y') {
				if (person->GetGender() == 'M')
					male.push_back(person);
				else
					female.push_back(person);
			}
			return;
		case '3':
			person = new Worker("������");
			if (person->InsertInfo() == 'Y') {
				if (person->GetGender() == 'M')
					male.push_back(person);
				else
					female.push_back(person);
			}
			return;
		default:
			cout << "������ �ٽ� �Է����ּ���(1.���� 2.�л� 3.������) : ";
			cin >> job;
			break;
		}
	}
}

void Program::DisplayUsers() {
	cout << "[����]" << endl;
	for (unsigned int i = 0; i < male.size(); i++) {
		male[i]->Print();
	}
	cout << "[����]" << endl;
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