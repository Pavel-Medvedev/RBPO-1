#include "Header.h"
/*
Medvedev 21 100500 Pavel 21 999 99
*/
int main() {
	string name = "";
	unsigned short age = 0, weight = 0;
	double salary = 0;
	ReadPersonData(name, age, salary);
	WritePersonData(name, &age, to_string(height), to_string(weight), to_string(salary));
	ReadPersonData(name, age, height, weight);
	WritePersonData(name, &age, to_string(height), to_string(weight), to_string(salary));
	return 0;
}