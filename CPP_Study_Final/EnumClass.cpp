#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>


// ������ ���� : enum class

// unscoped enum (��������)
enum PlayerType
{
	PT_None,
	PT_Knight,
	PT_Archer,
	PT_Mage
};

enum MonsterType
{
	MT_None,
};

enum class ObjectType 
{
	Player,
	Monster,
	ProjectTile
};

int main()
{
	// enum class (scoped enum)
	// 1) �̸����� ���� (scoped)
	// 2) �Ϲ����� ��ȯ ����

	double value = PT_Knight;
	return 0;
}