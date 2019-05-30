#include "person.h"

//=================================================================

Person::Person(string m_job) {
	job = m_job;
}

char Person::GetGender() { return gender; }

void Person::DefaultPrint() {
	cout << "---------------------------------------" << endl;
	cout << "      [ 사 용 자    간 략 정 보 ]" << endl;
	cout << " - 이름 : " << name << endl;
	cout << " - 나이 : " << age << endl;
	cout << " - 성별 : " << gender << endl;
	cout << " - 직업 : " << job << endl;
	cout << " - 번호 : " << p_number << endl;
	cout << " - 이상형 : " << ideal_type << endl;
	cout << "---------------------------------------" << endl;
}

//=================================================================

Free::Free(string m_job) : Person(m_job){
}
char Free::InsertInfo(){
	char confirm = 'N';

	cout << "      [ 사 용 자    정 보 입 력 ]" << endl;
	cout << " 1. 이름 : ";
	cin >> name;
	cout << " 2. 나이 : ";
	cin >> age;
	cout << " 3. 성별(M/W) : ";
	cin >> gender;
	gender = toupper(gender);
	while (gender != 'M' && gender != 'W') {
		cout << " 3. 성별(M/W) : ";
		cin >> gender;
		gender = toupper(gender);
	}
	cout << " 4. 핸드폰 번호 : ";
	cin >> p_number;
	cout << " 5. 이상형 : ";
	cin >> ideal_type;
	cout << " 6. 주 수입원 : ";
	cin >> src_income;
	cout << " 7. 현재 하고 있는 것 : ";
	cin >> ing;
	cout << "---------------------------------------" << endl;

	do{
		cout << "위의 정보로 등록하시겠습니까?(Y/N) ";
		cin >> confirm;
		confirm = toupper(confirm);
	} while (confirm != 'N' && confirm != 'Y');

	if (confirm == 'N') {
		cout << "정보를 등록하지 않았습니다." << endl;
		Sleep(2000);
	}

	return confirm;
}
void Free::Print() {
	cout << "---------------------------------------" << endl;
	cout << " - 이름 : " << name << endl;
	cout << " - 나이 : " << age << endl;
	cout << " - 성별(M/W) : "<< gender << endl;
	cout << " - 핸드폰 번호 : "<< p_number << endl;
	cout << " - 이상형 : " << ideal_type << endl;
	cout << " - 주 수입원 : " << src_income << endl;
	cout << " - 현재 하고 있는 것 : " << ing << endl;
	cout << "---------------------------------------" << endl;
}

//=================================================================

Student::Student(string m_job) : Person(m_job) {
}

char Student::InsertInfo() {
	char confirm = 'N';

	cout << "         [ 무 직    정 보 입 력 ]" << endl;
	cout << " 1. 이름 : ";
	cin >> name;
	cout << " 2. 나이 : ";
	cin >> age;
	cout << " 3. 성별(M/W) : ";
	cin >> gender;
	gender = toupper(gender);
	cout << " 4. 핸드폰 번호 : ";
	cin >> p_number;
	cout << " 5. 이상형 : ";
	cin >> ideal_type;
	cout << " 6. 학교 : ";
	cin >> place;
	cout << " 7. 전공 : ";
	cin >> major;
	cout << "---------------------------------------" << endl;

	do {
		cout << "위의 정보로 등록하시겠습니까?(Y/N) ";
		cin >> confirm;
		confirm = toupper(confirm);
	} while (confirm != 'N' && confirm != 'Y');

	return confirm;
}
void Student::Print() {
	cout << "---------------------------------------" << endl;
	cout << " - 이름 : " << name << endl;
	cout << " - 나이 : " << age << endl;
	cout << " - 성별(M/W) : " << gender << endl;
	cout << " - 핸드폰 번호 : " << p_number << endl;
	cout << " - 이상형 : " << ideal_type << endl;
	cout << " - 학교 : " << place << endl;
	cout << " - 전공 : " << major << endl;
	cout << "---------------------------------------" << endl;
}

//=================================================================

Worker::Worker(string m_job) : Person(m_job) {
}

char Worker::InsertInfo() {
	char confirm = 'N';


	cout << "      [ 직 장 인    정 보 입 력 ]" << endl;
	cout << " 1. 이름 : ";
	cin >> name;
	cout << " 2. 나이 : ";
	cin >> age;
	cout << " 3. 성별(M/W) : ";
	cin >> gender;
	gender = toupper(gender);
	cout << " 4. 핸드폰 번호(-없이 입력) : ";
	cin >> p_number;
	cout << " 5. 이상형 : ";
	cin >> ideal_type;
	cout << " 6. 직장 : ";
	cin >> place;
	cout << " 7. 부서 : ";
	cin >> department;
	cout << " 8. 연봉 : ";
	cin >> salary;
	cout << "---------------------------------------" << endl;

	do {
		cout << "위의 정보로 등록하시겠습니까?(Y/N) ";
		cin >> confirm;
		confirm = toupper(confirm);
	} while (confirm != 'N' && confirm != 'Y');

	return confirm;
}
void Worker::Print() {
	cout << "---------------------------------------" << endl;
	cout << " - 이름 : " << name << endl;
	cout << " - 나이 : " << age << endl;
	cout << " - 성별(M/W) : " << gender << endl;
	cout << " - 핸드폰 번호 : " << p_number << endl;
	cout << " - 이상형 : " << ideal_type << endl;
	cout << " - 직장 : " << place << endl;
	cout << " - 부서 : " << department << endl;
	cout << " - 연봉 : " << salary << endl;
	cout << "---------------------------------------" << endl;
}