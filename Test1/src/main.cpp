#include"Student.h"

void Student::input() {
	cout << "Enter the name:";
	getline(cin, name);
	cout << "Enter the address:";
	getline(cin, address);
	cout << "Enter the age:";
	cin >> age;
	cout << "Enter the score:";
	cin >> score;
}
void Student::output() {
	cout << "The name is: " << name << endl;
	cout << "The address is: " << address << endl;
	cout << "The age is: " << age << endl;
	cout << "The score is: " << score << endl;
}

int main() {
	Student Student_A;
	Student_A.input();
	cout << "---------------------------------Here is output----------------------------------------" << endl;
	Student_A.output();
	return 0;
}