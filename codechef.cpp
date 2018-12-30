#include <iostream>
#include <queue>
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
        queue<int> q;
        while(a != 0)
        {
            int b=a%10;
            q.push(b);
            a=a/10;
            count++;
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
