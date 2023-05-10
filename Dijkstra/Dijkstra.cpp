#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int** create_map(int m,int n)
{
    int** map = new int*[m];

    for(int i = 0;i < m;i++)
    {
        map[i] = new int[n];
    }

    return map;
}

static int array[8][8] = {0,8,4,INT_MAX,INT_MAX,2,1,7,
                       8,0,2,4,INT_MAX,INT_MAX,7,INT_MAX,
                       4,8,0,6,INT_MAX,INT_MAX,INT_MAX,3,
                       INT_MAX,4,6,0,6,INT_MAX,INT_MAX,4,
                       INT_MAX,INT_MAX,INT_MAX,6,0,1,3,3,
                       2,INT_MAX,INT_MAX,INT_MAX,1,0,2,5,
                       1,7,INT_MAX,INT_MAX,3,2,0,INT_MAX,
                       7,INT_MAX,3,4,3,5,INT_MAX,0};

int distance_[8] = {0,8,4,INT_MAX,INT_MAX,2,1,7};


vector<int> S = {0};

vector<int> S1 = {1,2,3,4,5,6,7};

int Dijkstra()
{
    if(S1.size() == 0)
        return 0;
    
    for(int i = 0;i < S1.size();i++)
    {
        int sub_distance = array[0][S.back()] + array[S.back()][i];

        if(sub_distance < distance_[i])
            distance_[i] = sub_distance;
    }
    
    
    cout << "fuck" << endl;

    int min_distance = INT_MAX;
    
    int smallest_index;

    for(int i = 1;i < 8;i++)
    {
        if(min_distance > distance_[i])
        {
            min_distance = distance_[i];
            
            smallest_index = i;
        }
    }
    
    cout << smallest_index << endl;

    int deletepos;

    for(int i = 0;i < S1.size();i++)
    {
        if(smallest_index == S1[i])
            deletepos = i;
    }

    S1.erase(S1.begin() + deletepos);

    S.push_back(smallest_index);
    
    Dijkstra();

}

int main()
{
    Dijkstra();

    for(int i = 0;i < 8;i++)
    {
        cout << distance_[i] << " ";
    }
}
