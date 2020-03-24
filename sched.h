#ifndef SCHED_H
#define SCHED_H

#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class PROCESS
{
    private:
        int ID;                 // Process ID 1-30
        int priority;           // Priority level 1-10
        int burst;              // CPU burst time
        int arrival;            // Arrival time
        

    public:
        PROCESS();
        PROCESS(int ID, int priority, int burst, int arrival);
        ~PROCESS();
        int get_ID();
        int get_priority();
        void set_priority(int priority);
        int get_burst();
        void set_burst(int burst);
        int get_arrival();
        void set_arrival(int arrival);
        void FCFS(vector<PROCESS> list);
        void SJF(vector<PROCESS> list);
        void Priority(vector<PROCESS> list);
        void RR(vector<PROCESS> list);

 };

#endif
