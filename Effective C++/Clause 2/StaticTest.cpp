# include <iostream>
using namespace std;

extern int p;
void inrease()
{
	static int m;
	m++;
	cout << "m:" << m << endl;
}


class GamePlayer{
public:
	static int id;
	GamePlayer(int a, int b, int c);
	void getSum();
private:
	static int sum ;
	int a;
	int b;
	int c;
};

int GamePlayer::sum=0;

//构造函数可以调用所有的成员变量，不管其是否为静态
GamePlayer::GamePlayer(int a, int b, int c) :a(a), b(b), c(c)
{
	sum += a + b + c;
}

void GamePlayer::getSum()
{
	cout << "sum:" << sum << endl;
}



int main()
{
	static int n;
	cout << n << endl;

	n = 20;
	cout << n << endl;

	cout << "extern p:" << p << endl;

	for (int i = 0; i < 5; i++)
	{
		inrease();
	}


	//test class
	GamePlayer player1(1, 2, 3);
	player1.getSum();

	GamePlayer player2(4, 5, 6);
	player2.getSum();
}

