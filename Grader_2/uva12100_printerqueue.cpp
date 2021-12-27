#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

struct Job {
    int m_priority;
    bool m_is_my_Job;
    Job(int priority, bool is_my_Job) {
        m_priority = priority;
        m_is_my_Job = is_my_Job;
    }
};

int cmp(int a, int b) {
    return a > b;
}

int main(int argc, const char *argv[]) {
    int event;
    int job;
    int job_Position;
    int priority;
    queue<Job> queue;
    vector<int> tmp_queue;
    cin >> event;
    while(event--) {
        cin >> job >> job_Position;
        for(int i = 0; i < job; ++i) {
            cin >> priority;
            if(i == job_Position) {
                queue.push(Job(priority, true));
            } 
            else
            {
                queue.push(Job(priority, false));
            }
            tmp_queue.push_back(priority);
        }

        sort(tmp_queue.begin(), tmp_queue.end(), cmp);

        int min = 0;
        auto it = tmp_queue.begin();
        while(true) {
            Job job = queue.front();
            queue.pop();
            if(job.m_priority == *it) {
                min += 1;
                it += 1;
                if(job.m_is_my_Job) {
                    break;
                }
            }
            else
            {
                queue.push(job);
            }
        }

        cout << min << endl;

        while(!queue.empty()) queue.pop();
        tmp_queue.clear();

    }

    return 0;
}