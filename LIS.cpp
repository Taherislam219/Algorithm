#include<iostream>
using namespace std;

void print_el(int array[], int n, int i)
{
    if(i >= n){
        cout<<endl;
        return;
        }

    cout << array[i] << " ";
    print_el(array, n, i+1);
}

int main()
{

    int array[7]= {3,4,-1,0,6,2,3};
    int len[7]= {1,1,1,1,1,1,1};
    int pos[7]={-1,-1,-1,-1,-1,-1,-1};

    for(int i=1; i<7; i++)
    {
        for(int j=i-1; j>=0; j--)
        {
            if (array[i]>array[j])
            {
            if(len[j]+1>len[i]){
                len[i]=len[j]+1;
                pos[i]=j;
            }

            }

        }
    }


     print_el(array,7,0);
     print_el(len,7,0);
      print_el(pos,7,0);

       int max=0;int idx;
    for(int i=0;i<7;i++){
        if(max<len[i]){
            max=len[i];
            idx=i;
        }
    }
    cout<<endl;
    int rev[7],k=0;
    for(int i=idx;i!=-1;i=pos[i]){
       rev[k++]=array[i];
    }

    for(int i=k-1;i>=0;i--){
        cout<<rev[i]<<" ";
    }



    return 0;
}
