#include <iostream>

#include <cstring>

#include <climits>

#include <vector>

using namespace std;

struct node
{   
    int weight;

    int index;

    struct node* next;
};
typedef struct node* Node;

int total = 0;

Node* input()
{
    int dots;

    cout << "Please enter the number of the dots: "<< endl;

    cin >> dots;
    
    total = dots;

    Node* Points = new Node[dots];

    for(int i = 0;i < dots;i++)
    {
        Points[i] = new struct node;
    }

    for(int i = 0;i < dots;i++)
    {
        cout << "Enter the number of adjacent points of Point " << i << ":" << endl;

        int num;

        cin >> num;

        
        if(num > 0)
            cout << "Please enter the index of the points that are connected to Point " << i << " and the length between them(followed by the index): " << endl;

        Node head = Points[i];

        for(int j = 0;j < num;j++)
        {
            Node neighbour = new struct node;

            head->next = neighbour;

            cin >> neighbour->index >> neighbour->weight;

            head = neighbour;

            head->next = nullptr;
        }
    }

    return Points;
}

vector<int> S;

vector<int> S1;

int Dijkstra(Node* Map,int* _distance_)
{
    if(S1.size() == 0)
        return 0;

    for(int i = 0;i < S1.size();i++)
    {
        int sub_distance = _distance_[S.back()];

        int temp_distance;

        Node temp = Map[S.back()]; 

        bool connected = false;

        while(temp->next != nullptr)
        {
            temp = temp->next;

            if(temp->index == S1[i])
            {
                connected = true;

                temp_distance = temp->weight;

                break;
            }
        }

        if(connected == false)
            temp_distance = INT_MAX;

        sub_distance += temp_distance;

        if(sub_distance < 0)
            sub_distance = INT_MAX;

        if(sub_distance < _distance_[S1[i]])
            _distance_[S1[i]] = sub_distance;
    }

    int min_distance = INT_MAX;

    int smallest_index;

    for(int i = 0;i < S1.size();i++)
    {
        if(min_distance > _distance_[S1[i]])
        {
            min_distance = _distance_[S1[i]];

            smallest_index = i;
        }
    }

    S.push_back(S1[smallest_index]);

    S1.erase(S1.begin() + smallest_index);

    Dijkstra(Map,_distance_);
}


int main()
{   
    Node* Map = input();

    int start;
    
    cout << "Please input the index of the starting point: " << endl;

    cin >> start;
    
    S.push_back(start);

    for(int i = 0;i < total;i++)
    {
        if(i != start)
            S1.push_back(i);
    }

    int* _distance_ = new int[total];
    
    _distance_[0] = 0;

    for(int i = 1;i < total;i++)
    {
        _distance_[i] = INT_MAX;
    }

    Node temp = Map[start];

    while(temp->next != nullptr)
    {
        temp = temp->next;

        _distance_[temp->index] = temp->weight;

    }    
    

    Dijkstra(Map,_distance_);
    

    for(int i = 0;i < total;i++)
    {
        cout << _distance_[i] << " ";
    }
}


