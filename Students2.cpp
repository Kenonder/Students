//============================================================================
// Name        : Students2.cpp
// Author      : sc
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

/*struct Fullname{
    	std::string first_name;
    	std::string last_name;

    };*/

struct Student {
    float grade;
    int studentID;

   /*Fullname fullname;*/
};

void stats(int num_students, Student Students[],
	float & max_grade,int &max_studentID,
	float &min_grade,int &min_studentID);

int main() {
	Student input_students[6]{
		{96.0, 120292},
		{77, 101201},
		{83, 209493},
		{31.5, 1002},
		{88.2, 1002292},
		{58, 857423}
	};
	int num_student = 6;
	float outputmaxgrade{0.0};
	int outputmaxstudentid{0};
	float outputmingrade{0.0};
	int outputminstudentid{0};
	stats(num_student,input_students,outputmaxgrade,outputmaxstudentid,outputmingrade,outputminstudentid);
	std::cout<<outputmingrade<<std::endl;
	std::cout<<outputminstudentid<<std::endl;
	std::cout<<outputmaxgrade<<std::endl;
	std::cout<<outputmaxstudentid<<std::endl;

	std::cout<<""<<std::endl;
	return 0;
}

void stats(int num_students,Student students[],
		 float &max_grade, int &max_studentID,
		 float &min_grade, int &min_studentID){
	     min_grade = students[0].grade;
	for(int student_index=0;student_index < num_students;student_index++){

		if(students[student_index].grade<min_grade){
							min_grade = students[student_index].grade;
							min_studentID = students[student_index].studentID;
						}
		if(students[student_index].grade>max_grade){
			max_grade = students[student_index].grade;
			max_studentID = students[student_index].studentID;
		}



	}
}
