#include <iostream>
#include <algorithm>

// sort _ data[student_score] - �������� ���� 
// class�� ����Ͽ� ���� 

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
		Student ("�����",90),
		Student ("�̰���",92),
		Student ("�̽¿�",85),
		Student ("������",88),
		Student ("������",87),
	};
	
	sort(students,students+5);
	
	for (int i=0;i<5;i++)
	{
		cout << students[i].score << " \n";
	}

	return 0;
}
	
	

