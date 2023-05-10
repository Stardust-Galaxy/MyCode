#pragma once



#include <iostream>

using namespace std;

class Paginate
{
public:
    Paginate(int rangeS,int rangeE,int showR = 5):rangeStart(rangeS),rangeEnd(rangeE),showRange(showR)
    {
        total = rangeEnd - rangeStart + 1;

        currentPage = rangeStart;
    }
    
    void go(int page);
    
    Paginate& prev();

    Paginate& next();

    Paginate& prevN(int n);

    Paginate& nextN(int n);

    Paginate& setPage(int currentPage,int total);
    
    void show();

private:
    int currentPage;
    
    int total;

    int rangeStart;
    
    int rangeEnd;

    int showStart = 1;

    int showRange = 5;
};
