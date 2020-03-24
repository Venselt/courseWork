#include<vector>
#include<sched.h>
#include<fstream>
#include "SCHED.H"
using namespace std;

int main()
{

	//open file
	ifstream fin;
	fin.open("schedule.txt");
	//create queue with populated entities
	vector<PROCESS> list;
	int i = 0;

	while (fin)
	{
		getline(ID, priority, burst, arrival);
		(fin(ID, burst, arrival, priority));//can remeber how to put things in the object
		i++; // to increment on the vector

	}
	//send to sche alg FCFS
	FCFS(list);

	//show timeline(Gant chart)

	//send to sche alg SJF
	//show timeline(Gant chart)
	
	//send to sche alg Priority
	//show timeline(Gant chart)
	
	//send to sche alg RR
	//show timeline(Gant chart)

	// optional sched alg combination(Pri/RR)
	// show timeline(Gant chart)

return 0;
}
