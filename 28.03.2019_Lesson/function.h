#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include<math.h>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<string>
#include<fstream>

//41.	**����������� ��������� �����������(�����, ��������),
// ����������� ��������� ������(������, ������, ����),
// ����������� ��������� �������(���������, �����, ������).
// ���������� ��������� ������� :
//�	���������� ������
//�	������ ������
using namespace std;

//struct enging;//���������� ��������, ���� ����� ������������ ��������� ��������� �� �� ���������
//struct body;

struct engine {
	double volume;
	int horse_power : 10; //max 500
	void print(); //function.h ������ ��������, � ���������� (����, ��� �������� �����) � function.cpp
};
struct body {
	int width : 9; //max 200
	int height : 10; //max 300
	string color;
	void print();
};
struct car{
	engine car_engine;
	body car_body;
	char model[30];
	void print(); //��������-�������-������� �����������...
};
