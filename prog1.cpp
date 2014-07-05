/*this code contains the functions of Readstudents and Highestaverage (this is drawn from the header file prog1.h,) 
If the code excutes successfully, it will read the data in Readstudents,and highest average will pick out the student 
who has the highest average and what that average is.*/
#include "prog1.h"
Read_highav::Read_highav(){};
int Read_highav::ReadStudents(ifstream &input, StudentInfo Info[]) {
	string ID;
	int h=0;
	int i=0;
	StudentInfo info;
	while (input>>ID){
		if (0 == h) {
			info.id = ID;
	} 
		else
	{
		info.grades[h-1] = atoi(ID.c_str());
	}
		if (h<NUMGRADES) h++;
		else 
	{
			double grades; 
			for (int j = 0; j < NUMGRADES; j++) {
				grades += info.grades[j];
		}
			grades /= NUMGRADES;
			info.avGrade = grades;
			Info[i] = info;
			i++;
			return grades;
}
}
}
void Read_highav::HighestAverage(StudentInfo Info[], int numStudents, string &id, double &maxAv) {
	for (int i = 0; i < numStudents; i++) {
		StudentInfo student = Info[i];
		if (student.avGrade > maxAv) {
			id = student.id;
			maxAv = student.avGrade;
}
}
}