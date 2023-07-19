#include <iostream>
#include<vector>

using namespace std;

// Approch used 
// I will use vector hence it will will be easier to insert and erase any element in between the array without worrying the size of array
// step 1: find the first negative number
// step 2: find the find the index available for negative number to insert
// step 3: insert in that index position and pop out from previous position
// step 4: repeat step 1,2,3 till all numbers are arranged

// Advantage of using this approch
// 1: no need to worry about array size , allocaion and de-allocaion because vector will handle it
// 2: we only need to focus on negative numbers in this approch and positive numbers will will be untouched .
// Hence, preserving the relative order of both the positive and negative numbers


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

    for(int i=0 ; i<n ; i++)    // Insert
    {
        cin>>work;
        array.push_back(work);
    }

    int size=n;

    correctOrder(array, size);    // Function to sort

    for(int i=0 ; i<n ; i++)    // display
    {
        cout<<array[i]<<" ";
    }
}

