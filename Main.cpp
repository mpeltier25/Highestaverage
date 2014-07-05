/*this code will execute readstudents and highestaverage, as well as tell which student has the highest average and 
what that average is.*/
#include "prog1.h"
#include <fstream>
int main(int numargs, char *args[]) {
	ifstream inFile;
	string id;
	int numStudents=5;
	double maxAv;
	if (numargs < 2) {
		cout << "usage: " << args[0] << "prog1.h" << endl;
		exit(1);
	}
	inFile.open(args[1]);
	Read_highav Read;
	StudentInfo info[10];
	Read.ReadStudents(inFile, info);
	Read.HighestAverage(info, numStudents, id, maxAv);
	cout << "Student " << id << " has the highest average: " << maxAv << endl;
	if (inFile.fail()) {
		cout << "Unable to open " << args[1]<< endl;
		exit(1);
	}
}