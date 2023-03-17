#define _CRT_SECURE_NO_WARNINGS
#include "Header.h"
#include <cstring>
using namespace std;
// header file로 넘어가면 안써도된다.

// 사용자로부터 실수 입력받는 함수
// 사용자로부터 문자를 입력받는 함수

class Student {
public:
    int student_no;
    char name[20];
    int gender; // 0 = male, 1 = female
    
    void printStudentInfo() {
        printf("student ID: %d\n", student_no);
        printf("studnet name: %s\n", name);
        printf("sex: %s", gender == 0 ? "male" : "female");
    }
};

int main()
{
    Student s;
    s.student_no = 1234;
    strcpy(s.name, "Scott");
    s.gender = 0;

    s.printStudentInfo();

    Student s2;
    s2.student_no = 3456;
    strcpy(s2.name, "Julia");
    s2.gender = 1;

    s2.printStudentInfo();




    return 0;
}







