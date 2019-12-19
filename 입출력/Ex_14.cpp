#include <iostream>
#include <algorithm>

// sort _ data[student_score] - 오름차순 정렬 
// class를 사용하여 정렬 

using namespace std;

class Student
{
	public:
		string name;
		int score;
	Student(string name,int score)
	{
		this -> name = name;
		this -> score = score;
	}	
	
	bool operator < (Student &student)
	{
		return this -> score < student.score;
	}
};


int main(void)
{
	Student students[] = {
		Student ("손흥민",90),
		Student ("이강인",92),
		Student ("이승우",85),
		Student ("박지성",88),
		Student ("조현우",87),
	};
	
	sort(students,students+5);
	
	for (int i=0;i<5;i++)
	{
		cout << students[i].score << " \n";
	}

	return 0;
}
	
	

