#include <iostream>
#include<vector>

using namespace std;


int correctOrder(vector<int>& list , int size)
{
    int worker=0;
    for(int i=1 ; i<size ; i++)
    {
        if (list[i]<0)
        {
            int flag=0;
            for(int j=0 ; j<i ; j++)
            {
                
                if (list[j]>=0 && flag==0)
                {
                    // replace (assign to worker , append it earlier , pop it out)
                    worker=list[i];
                    
                    list.insert(list.begin()+j , worker);

                    list.erase(list.begin()+(i+1));

                    flag++;
                    

                }
            }
        }
    }
    return 0;
}

int main()
{
    int n;
    cout<<"How many numbers you would like to enter: ";
    cin>>n;
    vector<int> array;
    int work=0;

    for(int i=0 ; i<n ; i++)
    {
        cin>>work;
        array.push_back(work);
    }

    int size=n;

    correctOrder(array, size);

    for(int i=0 ; i<n ; i++)
    {
        cout<<array[i]<<" ";
    }
}

