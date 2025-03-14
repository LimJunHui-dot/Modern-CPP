#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : auto

class Knight
{
public:
	int _hp;
};


int main()
{
	// Modern C++(C++11)

	/*int a = 3;
	float b = 3.14f;
	double c = 1.23;
	Knight d = Knight();
	const char* e = "rookiss";*/

	auto a = 3;
	auto b = 3.14f;
	auto c = 1.23;
	auto d = Knight();
	auto e = "rookiss";

	// auto�� ������ ��Ŀī��
	// ���� ���� (type deduction)
	// -> ���� �ǰ� �� �����~ (�߷�)
	// �߷� ��Ģ�� �������� �������� �� �ִ�.

	// ����!
	// �⺻ auto�� const, &�� ����!!!!!!
	int& reference = a;
	const int cst = a;

	auto test1 = reference;
	auto test2 = cst;

	auto f = &d;
	const float test1 = b;
	auto* test2 = e;

	// �ƹ�ư ���� ������ Ÿ���� �ؾ������ auto�� ����ҷ���~
	// NO! (�ְ����� ����)
	// -> Ÿ������ ������� ��� OK
	// -> �������� ���� �Ϲ������δ� ���δ� �� ����



	return 0;
}