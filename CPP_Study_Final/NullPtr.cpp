#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// ������ ���� : nullptr

class Knight
{
public:
	void Test()
	{

	}
};

Knight* FindKnight()
{
	// TODO

	return nullptr;
}

void Test(int a)
{
	cout << "Test(int)" << endl;
}

void Test(void* ptr)
{
	cout << "Test(*)" << endl;
}

// NullPtr ����


const
class NullPtr
{
public:
	// �� � Ÿ���� �����Ϳ͵� ġȯ ����
	template<typename T>
	operator T* () const
	{
		return 0;
	}

	// �� � Ÿ���� �ɹ� �����Ϳ͵� ġȯ ����
	template<typename C, typename T>
	operator T C::* () const
	{
		return 0;
	}

private:
	void operator&() const; // �ּҰ� &�� ���´�

}_NullPtr;

//const NullPtr _NullPtr;



int main()
{
	int* ptr = NULL;  // 0 NULL

	// 1) ������
	Test(0);
	Test(NULL);
	Test(_NullPtr);

	// 2) ������
	auto knight = FindKnight();
	if (knight == _NullPtr)
	{

	}

	void(Knight:: * memFunc)();
	memFunc = &Knight::Test;

	if (memFunc == _NullPtr)
	{

	}

	//nullptr_t whoami = _NullPtr;

	return 0;
}