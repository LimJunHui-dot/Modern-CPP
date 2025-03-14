#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

// ������ ���� : override, final 

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
	// ������(override)
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