#include <iostream>
using namespace std;
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>


// 오늘의 주제 : enum class

// unscoped enum (범위없는)
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
	// 1) 이름공간 관리 (scoped)
	// 2) 암묵적인 변환 금지

	double value = PT_Knight;
	return 0;
}