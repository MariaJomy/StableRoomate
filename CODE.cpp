#include<iostream>
using namespace std;

int main()
{
int m,i,j,k,a;
    cout<<"enter the number of people(even number)\t";
    cin>>m;
    int r[m][m-1];
     cout<<"enter the preference list\n";
     for(i=0;i<m;i++)
        for(j=0;j<(m-1);j++)
        cin>>r[i][j];

     for(i=0;i<m;i++)
     {cout<<endl;
        for(j=0;j<(m-1);j++)
        cout<<r[i][j];
     }

     //if table is consistent
     /*for(i=0;i<m;i++)
     {k=0;
        for(j=0;j<(m-1);j++)
        {
             a=r[i][j];
             cout<<endl<<"a:"<<a<<endl;
            while(r[a][k]!=i)
            {
                ++k;
                if(k>(m-2))
                    cout<<"delete:"<<r[a][k]<<"i:"<<i<<"k"<<k<<endl;
            }
            while(k<2)
            {
                cout<<"r[a][k]:"<<r[a][k]<<endl;
                ++k;
            }
        }

     }*/

     //proposal and rejection

     int g[m];
     for(int i=0;i<(m);i++)
     g[i]=-1;


     for(int i=0;i<m;i++)
     {
        for(int j=0;j<(m-1);j++)
        { a=r[i][j];
          k=r[a][j];
            cout<<endl<<k;

        }
     }

     return 0;
}

