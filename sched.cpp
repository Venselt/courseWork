#include "sched.h"
#include<iostream>
using namespace std;

PROCESS::PROCESS()
{

}

PROCESS::~PROCESS()
{

}

PROCESS::PROCESS(int ID, int priority, int burst, int arrival)
{
	int PID = ID;
	int PPR = priority;
	int PBR = burst;
	int PAR = arrival;
	int timeW = 0;
	int timeC = 0;

}

int PROCESS::get_ID()
{
	return ID;
}

void PROCESS::set_priority(int priority)
{
	int PPR = priority;
}

int PROCESS::get_priority()
{
	return priority;
}

void PROCESS::set_burst(int burst)
{
	int PBR = burst;
}

int PROCESS::get_burst()
{
	return burst;
}

int PROCESS::set_arrival(int arrival)		
{
	int PAR = arrival;
}

int PROCESS::get_arrival()
{
	return arrival;
}

void PROCESS::FCFS(vector<PROCESS> list)
{
	int timeT = 0;
	int timeC = 0;
	int timeW = 0;
	int time = 0;
	int s = list.size();
//		receive vector
//		sort list by arrival times Lowest first
	for (int j = 0; j < s - 1, j++)
		for (int i = 0; i < s - 1; i++)
			if (list[i].arrival > list[i + 1].arrival)
			{
				PROCESS TMP = list[i];
				list[i] = list[i + 1];
				list[i + 1] = TMP;
			}

//		add burst time to total
	for (int i = 0; i < s; i++)
	{
		timeW = time;
		timeC = list[i].burst + time;
		time = list[i].burst;
		timeT += time;
		//		print out total time and PID
		cout << "P" << list[i].ID << " turn-around time = " << timeT << ", waiting time = " << timeW << endl;
	}
//		show timeline(Gant chart)
}

void PROCESS::SJF(vector<PROCESS> list)
{
	int timeT = 0;
	int timeC = 0;
	int timeW = 0;
	int time = 0;
	int s = list.size();
//	sort list by burst time Lowest first
	for (int j = 0; j < s - 1, j++)
		for (int i = 0; i < s - 1; i++)
			if (list[i].burst > list[i + 1].burst)
			{
				PROCESS TMP = list[i];
				list[i] = list[i + 1];
				list[i + 1] = TMP;
			}
	for (int i = 0; i < s; i++)
	{
		timeW = time;
		timeC = list[i].burst + time;
		time = list[i].burst;
		timeT += time;
		//		print out total time and PID
		cout << "P" << list[i].ID << " turn-around time = " << timeT << ", waiting time = " << timeW << endl;
	}
}
/*
SJF
sort list by burst time Lowest first
add burst time to total
print our total time and PID
*/
void PROCESS::Priority(vector<PROCESS> list)
{
	int timeT = 0;
	int timeC = 0;
	int timeW = 0;
	int time = 0;
	int s = list.size();
//	sort list by priority Lowest first
	for (int j = 0; j < s - 1, j++)
		for (int i = 0; i < s - 1; i++)
			if (list[i].get_priority() > list[i + 1].get_priority())
			{
				PROCESS TMP = list[i];
				list[i] = list[i + 1];
				list[i + 1] = TMP;
			}
	for (int i = 0; i < s; i++)
	{
		timeW = time;
		timeC = list[i].get_burst() + time;
		time = list[i].get_burst();
		timeT += time;
		//		print out total time and PID
		cout << "P" << list[i].ID << " turn-around time = " << timeT << ", waiting time = " << timeW << endl;
	}
}
/*
Priority
sort list by priority highest first
add burst time to toal
print total time and PID
*/
void PROCESS::Priority(vector<PROCESS> list)
{
	int timeT = 0;
	int timeC = 0;
	int timeW = 0;
	int time = 0;
	int s = list.size();
	//	sort list by priority Lowest first
	for (int j = 0; j < s - 1, j++)
		for (int i = 0; i < s - 1; i++)
			if (list[i].get_priority() > list[i + 1].get_priority())
			{
				PROCESS TMP = list[i];
				list[i] = list[i + 1];
				list[i + 1] = TMP;
			}
	for (int i = 0; i < s; i++)
	{
		timeW = time;
		timeC = list[i].get_burst() + time;
		time = list[i].get_burst();
		timeT += time;
		//		print out total time and PID
		cout << "P" << list[i].ID << " turn-around time = " << timeT << ", waiting time = " << timeW << endl;
	}
}
/*
RR
At t=0
q= 5
proc runs for "q" seconds then goes to back of queue.
as each "runs" add "q" to total time
print out which PID and total time 
*/

/*
Bonus
sort list by priority highest first
   -proc runs for "q" seconds then goes to back of queue.
    as each "runs" add "q" to total time
    print out which PID and total time 
*/
