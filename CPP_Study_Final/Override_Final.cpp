#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

// 오늘의 주제 : override, final 

class Player
{
public:
	virtual void Attack()
	{
		cout << "Player" << endl;
	}

};

class Knight : public Player
{
public:
	// 재정의(override)
	virtual void Attack() override
	{
		cout << "Knight" << endl;
	}

};

int main()
{
	Player* player = new Player();

	player->Attack();
	return 0; 
}