#include <bits/stdc++.h>
using namespace std;

//solution by making pop operation costly
class QueueStack {
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int x)
    {
        //simply push item into queue 1
        q1.push(x);
    }
    int pop()
    {
        //if both queues are empty
        if (q1.empty() && q2.empty())
            return -1;

        //pop all elements except last from queue 1
        //and push to queue 2
        while (q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        //return element is last element
        int x = q1.front();
        q1.pop();

        //push back elements into queue 1
        while (!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return x;
    }
};
int main()
{
    QueueStack* qs = new QueueStack();
    int t;
    cout << "Enter no. of queries -";
    cin >> t;
    while (t--) {
        cout << "Enter query type => push : 1 ; pop : 2" << endl;
        int type, x;
        cin >> type;
        if (type == 1) {
            cout << "enter element (except -1):";
            cin >> x;
            if (x != -1)
                qs->push(x);
        } else if (type == 2) {
            int p = qs->pop();
            if (p != -1)
                cout << "Element popped is : " << p << endl;
            else
                cout << "Stack Empty : " << p << endl;
        } else {
            cout << "incorrect type" << endl;
        }
    }
    cout << "finished execution" << endl;
    return 0;
}
