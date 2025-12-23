#include<iostream>
using namespace std;

int main()
{

    float p[7],w[7],r[7],W;

    for(int i=0; i<7; i++)
    {
        cout<<"Profit["<<i+1<<"] :";
        cin>>p[i];

        cout<<"Weight["<<i+1<<"] :";
        cin>>w[i];

        r[i]=p[i]/w[i];
    }

    cout<<"knapsack Weight :";
    cin>>W;

    for(int i=0; i<7-1; i++)
    {
        for(int j=i+1; j<7; j++)
        {
            if(r[i]<r[j])
            {
                swap(r[i],r[j]);
                swap(w[i],w[j]);
                swap(p[i],p[j]);
            }
        }
    }

    float tp=0,rc=W;
    for(int i=0; i<7; i++)
    {
        if(w[i]<=rc)
        {
            tp=tp+p[i];
            rc=rc-w[i];
        }
        else
        {
            tp=tp+r[i]*rc;
            break;
        }
    }
    cout << "Maximum Profit = " << tp << endl;


    return 0;
}
