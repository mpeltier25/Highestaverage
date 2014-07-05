/*this header file sets up a struct, as well as make a class Read_highav, which holds ReadStudents and Highestaverage.*/
#ifndef _PROG1_H_
#define _PROG1_H_
#include <string>
#include <fstream>
#include <iostream>
using namespace std;
const int NUMGRADES = 5;
struct StudentInfo {
	string id;
	int grades[NUMGRADES];
	double avGrade;
};
class Read_highav {
	public: int ReadStudents(ifstream &input, StudentInfo Info[]);
			void HighestAverage(StudentInfo Info[], int numStudents, string &id, double &maxAv);Read_highav();
};
#endif