#include <list>
#include <deque>
#include <map>
#include <set>
#include <algorithm>

// 오늘의 주제 : auto

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

	// auto는 일종의 조커카드
	// 형식 연역 (type deduction)
	// -> 말이 되게 잘 맞춰봐~ (추론)
	// 추론 규칙은 생각보다 복잡해질 수 있다.

	// 주의!
	// 기본 auto는 const, &는 무시!!!!!!
	int& reference = a;
	const int cst = a;

	auto test1 = reference;
	auto test2 = cst;

	auto f = &d;
	const float test1 = b;
	auto* test2 = e;

	// 아무튼 이제 기존의 타입은 잊어버리고 auto만 사용할래요~
	// NO! (주관적인 생각)
	// -> 타이핑이 길어지는 경우 OK
	// -> 가독성을 위해 일반적으로는 놔두는 게 좋다



	return 0;
}