#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

// ������ ���� : delete(������ �Լ�)

class Knight
{
public:

public:
	// ���ǵ��� ���� �����(private) �Լ�
	void operator=(const Knight& k) = delete;

	// ��� ���� �մ� â vs ���� ����
	friend class Admin;


private:
	int _hp = 100;
};

class Admin
{
public:
	void CopyKnight(const Knight& k)
	{
		Knight k1;
		// ���� ����
		k1 = k;

		

	}
};

int main()
{
	return 0;
}