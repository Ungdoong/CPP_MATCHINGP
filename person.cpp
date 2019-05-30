#include "person.h"

//=================================================================

Person::Person(string m_job) {
	job = m_job;
}

char Person::GetGender() { return gender; }

void Person::DefaultPrint() {
	cout << "---------------------------------------" << endl;
	cout << "      [ �� �� ��    �� �� �� �� ]" << endl;
	cout << " - �̸� : " << name << endl;
	cout << " - ���� : " << age << endl;
	cout << " - ���� : " << gender << endl;
	cout << " - ���� : " << job << endl;
	cout << " - ��ȣ : " << p_number << endl;
	cout << " - �̻��� : " << ideal_type << endl;
	cout << "---------------------------------------" << endl;
}

//=================================================================

Free::Free(string m_job) : Person(m_job){
}
char Free::InsertInfo(){
	char confirm = 'N';

	cout << "      [ �� �� ��    �� �� �� �� ]" << endl;
	cout << " 1. �̸� : ";
	cin >> name;
	cout << " 2. ���� : ";
	cin >> age;
	cout << " 3. ����(M/W) : ";
	cin >> gender;
	gender = toupper(gender);
	while (gender != 'M' && gender != 'W') {
		cout << " 3. ����(M/W) : ";
		cin >> gender;
		gender = toupper(gender);
	}
	cout << " 4. �ڵ��� ��ȣ : ";
	cin >> p_number;
	cout << " 5. �̻��� : ";
	cin >> ideal_type;
	cout << " 6. �� ���Կ� : ";
	cin >> src_income;
	cout << " 7. ���� �ϰ� �ִ� �� : ";
	cin >> ing;
	cout << "---------------------------------------" << endl;

	do{
		cout << "���� ������ ����Ͻðڽ��ϱ�?(Y/N) ";
		cin >> confirm;
		confirm = toupper(confirm);
	} while (confirm != 'N' && confirm != 'Y');

	if (confirm == 'N') {
		cout << "������ ������� �ʾҽ��ϴ�." << endl;
		Sleep(2000);
	}

	return confirm;
}
void Free::Print() {
	cout << "---------------------------------------" << endl;
	cout << " - �̸� : " << name << endl;
	cout << " - ���� : " << age << endl;
	cout << " - ����(M/W) : "<< gender << endl;
	cout << " - �ڵ��� ��ȣ : "<< p_number << endl;
	cout << " - �̻��� : " << ideal_type << endl;
	cout << " - �� ���Կ� : " << src_income << endl;
	cout << " - ���� �ϰ� �ִ� �� : " << ing << endl;
	cout << "---------------------------------------" << endl;
}

//=================================================================

Student::Student(string m_job) : Person(m_job) {
}

char Student::InsertInfo() {
	char confirm = 'N';

	cout << "         [ �� ��    �� �� �� �� ]" << endl;
	cout << " 1. �̸� : ";
	cin >> name;
	cout << " 2. ���� : ";
	cin >> age;
	cout << " 3. ����(M/W) : ";
	cin >> gender;
	gender = toupper(gender);
	cout << " 4. �ڵ��� ��ȣ : ";
	cin >> p_number;
	cout << " 5. �̻��� : ";
	cin >> ideal_type;
	cout << " 6. �б� : ";
	cin >> place;
	cout << " 7. ���� : ";
	cin >> major;
	cout << "---------------------------------------" << endl;

	do {
		cout << "���� ������ ����Ͻðڽ��ϱ�?(Y/N) ";
		cin >> confirm;
		confirm = toupper(confirm);
	} while (confirm != 'N' && confirm != 'Y');

	return confirm;
}
void Student::Print() {
	cout << "---------------------------------------" << endl;
	cout << " - �̸� : " << name << endl;
	cout << " - ���� : " << age << endl;
	cout << " - ����(M/W) : " << gender << endl;
	cout << " - �ڵ��� ��ȣ : " << p_number << endl;
	cout << " - �̻��� : " << ideal_type << endl;
	cout << " - �б� : " << place << endl;
	cout << " - ���� : " << major << endl;
	cout << "---------------------------------------" << endl;
}

//=================================================================

Worker::Worker(string m_job) : Person(m_job) {
}

char Worker::InsertInfo() {
	char confirm = 'N';


	cout << "      [ �� �� ��    �� �� �� �� ]" << endl;
	cout << " 1. �̸� : ";
	cin >> name;
	cout << " 2. ���� : ";
	cin >> age;
	cout << " 3. ����(M/W) : ";
	cin >> gender;
	gender = toupper(gender);
	cout << " 4. �ڵ��� ��ȣ(-���� �Է�) : ";
	cin >> p_number;
	cout << " 5. �̻��� : ";
	cin >> ideal_type;
	cout << " 6. ���� : ";
	cin >> place;
	cout << " 7. �μ� : ";
	cin >> department;
	cout << " 8. ���� : ";
	cin >> salary;
	cout << "---------------------------------------" << endl;

	do {
		cout << "���� ������ ����Ͻðڽ��ϱ�?(Y/N) ";
		cin >> confirm;
		confirm = toupper(confirm);
	} while (confirm != 'N' && confirm != 'Y');

	return confirm;
}
void Worker::Print() {
	cout << "---------------------------------------" << endl;
	cout << " - �̸� : " << name << endl;
	cout << " - ���� : " << age << endl;
	cout << " - ����(M/W) : " << gender << endl;
	cout << " - �ڵ��� ��ȣ : " << p_number << endl;
	cout << " - �̻��� : " << ideal_type << endl;
	cout << " - ���� : " << place << endl;
	cout << " - �μ� : " << department << endl;
	cout << " - ���� : " << salary << endl;
	cout << "---------------------------------------" << endl;
}