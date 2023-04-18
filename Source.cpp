#include <iostream>
#include<string>
#include<vector>
#include<ctime>
#include <map>

using namespace std;

//class Butterfly
//{
//public:
//	string stage_of_life;
//	int days_of_life;
//
//	void stage_increase()
//	{
//		if (0 <= days_of_life <= 7)
//		{
//			stage_of_life = "caterpillar";
//			days_of_life++;
//		}
//		else if (8 <= days_of_life <= 16)
//		{
//			stage_of_life = "pupa";
//			days_of_life++;
//		}
//		else if (17<=days_of_life <= 23)
//		{
//			stage_of_life = "butterfly";
//			days_of_life++;
//		}
//		else if (days_of_life = 24)
//		{
//			stage_of_life = "caterpillar";
//			days_of_life = 0;
//		}
//	}
//};

void main()
{
	/*vector<Butterfly*> butt;

	for (int i = 0; i < 10; i++)
	{
		butt.push_back(new Butterfly);
	}

	butt[0]->days_of_life = 6;
	butt[0]->stage_of_life = "caterpillar";

	butt[1]->days_of_life = 12;
	butt[1]->stage_of_life = "pupa";

	butt[2]->days_of_life = 8;
	butt[2]->stage_of_life = "pupa";

	butt[3]->days_of_life = 24;
	butt[3]->stage_of_life = "butterfly";

	butt[4]->days_of_life = 1;
	butt[4]->stage_of_life = "caterpillar";

	butt[5]->days_of_life = 19;
	butt[5]->stage_of_life = "butterfly";

	butt[6]->days_of_life = 15;
	butt[6]->stage_of_life = "pupa";

	butt[7]->days_of_life = 23;
	butt[7]->stage_of_life = "butterfly";

	butt[8]->days_of_life = 2;
	butt[8]->stage_of_life = "caterpillar";

	butt[9]->days_of_life = 9;
	butt[9]->stage_of_life = "pupa";

	for (int i = 0; i < 10; i++)
	{
		cout << "Source vector:\n" << "Days of life: " << butt[i]->days_of_life<<" "<<"stage of life: "<< butt[i]->stage_of_life << endl;
		butt[i]->stage_increase();
		cout << "Resulting vector:\n" << "Days of life: " << butt[i]->days_of_life << " " << "stage of life: " << butt[i]->stage_of_life << endl;
	}*/
	map<int, int> m1;
	srand(time(0));
	int sum;
	for (int i = 0; i < 13; i++)
	{
		m1[i] = 0;
	}

	for (int i = 0; i < 1000; i++)
	{
		sum = rand() % 6 + 1 + rand() % 6 + 1;

		if ((i + 1) % 10 == 0) cout << endl;

		for (int j = 0; j < 13; j++)
		{
			if (sum == j)m1[j]++;
		}

	}
	for (auto elem : m1) 
	{
		cout << "Sum " << elem.first <<  " = " << elem.second << endl;
	}

}
