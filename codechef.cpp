#include <iostream>
#include <queue>
#include <stack>
using namespace std;

int main()
{
    int T;
    cin>>T;
    for (int i=0; i<T; i++)
    {
        int a;
        cin>>a;
        int count=0;
        stack<int> s;
        queue<int> q;
        while(a != 0)
        {
            int b=a%10;
            s.push(b);
            a=a/10;
            count++;
        }
        for (int c=0; c<count; c++)
        {
        	q.push(s.top());
        	s.pop();
		}
		
        for(int k=0; k<count; k++)
        {
            for (int j=0; j<count; j++)
            {
                cout<<q.front();
                q.push(q.front());
            	q.pop();
            }
            cout<<endl;
            q.push(q.front());
            q.pop();
        }
    }
    return 0;
}
