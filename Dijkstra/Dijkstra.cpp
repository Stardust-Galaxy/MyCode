#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int** create_map(int m, int n)
{
    int** map = new int* [m];

    for (int i = 0; i < m; i++)
    {
        map[i] = new int[n];
    }

    return map;
}

static int array_[8][8] = { 0,8,4,INT_MAX,INT_MAX,2,1,7,
                       8,0,2,4,INT_MAX,INT_MAX,7,INT_MAX,
                       4,2,0,6,INT_MAX,INT_MAX,INT_MAX,3,
                       INT_MAX,4,6,0,6,INT_MAX,INT_MAX,4,
                       INT_MAX,INT_MAX,INT_MAX,6,0,1,3,3,
                       2,INT_MAX,INT_MAX,INT_MAX,1,0,2,5,
                       1,7,INT_MAX,INT_MAX,3,2,0,INT_MAX,
                       7,INT_MAX,3,4,3,5,INT_MAX,0 };

int distance_[8] = { 0,8,4,INT_MAX,INT_MAX,2,1,7 };


vector<int> S = { 0 };

vector<int> S1 = { 1,2,3,4,5,6,7 };

int Dijkstra()
{
    if (S1.size() == 0)
        return 0;

    for (int i = 0; i < S1.size(); i++)
    {
        int sub_distance = distance_[S.back()] + array_[S.back()][S1[i]];

        if (sub_distance < 0)
            sub_distance = INT_MAX;

        if (sub_distance < distance_[S1[i]])
            distance_[S1[i]] = sub_distance;
    }


    cout << "fuck" << endl;

    int min_distance = INT_MAX;

    int smallest_index;

    for (int i = 0; i < S1.size(); i++)
    {
        if (min_distance > distance_[S1[i]])
        {
            min_distance = distance_[S1[i]];

            smallest_index = i;
        }
    }

    cout << smallest_index << endl;

    S.push_back(S1[smallest_index]);

    S1.erase(S1.begin() + smallest_index);

    Dijkstra();

}

int main()
{
    Dijkstra();

    for (int i = 0; i < 8; i++)
    {
        cout << distance_[i] << " ";
    }
}