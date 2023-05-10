#include <iostream>

#include "Paginate.h"

using namespace std;

void Paginate::go(int n)
{
    if(n >= 1 && n <= rangeEnd)
        currentPage = n;
    
    else
        cout << "Page out of range!" << endl;
}

Paginate& Paginate::setPage(int currentP,int t)
{
    currentPage = currentP;

    total = t;

    rangeStart = 1;

    rangeEnd = total;
    
    showStart = rangeStart;

    return *this;
}

Paginate& Paginate::prev()
{
    if(currentPage - 1 >= rangeStart)
        currentPage -= 1;

    else
        cout << "Already in FIRST PAGE!" << endl;

    return *this;
}

Paginate& Paginate::next()
{   
    if(currentPage + 1 <= rangeEnd)
        currentPage += 1;

    else
        cout << "Already in LAST PAGE!" << endl;

    return *this;
}

Paginate& Paginate::prevN(int n = 5)
{
    if(currentPage - n >= rangeStart)
        currentPage -= n;

    else
        currentPage = rangeStart;

    return *this;
}

Paginate& Paginate::nextN(int n = 5)
{
    if(currentPage + n <= rangeEnd)
        currentPage += n;

    else 
        currentPage = rangeEnd;

    return *this;
}

void Paginate::show()
{
    cout << "PreviousPage ";

    showStart = ((currentPage - 1) / showRange) * showRange + 1; 

    if(showStart + showRange > rangeEnd)
        showStart = rangeEnd - showRange + 1;
    
    if(showStart != rangeStart)
        cout << rangeStart << " " << "..." << " ";

    for(int i = showStart;i < showStart + showRange;i++)
    {
        cout << i;
        if(i == currentPage)
            cout << "+";
        cout << " ";
    }

    if(showStart + showRange - 1 != rangeEnd)
        cout << "... " << rangeEnd;

    cout << " NextPage";
    
    cout << endl;
}

int main()
{
    Paginate paper(1,13);

    for(int i = 1;i <=13;i++)
    {
        paper.setPage(i,13).show();
    }
    

    cout << endl << "Start Moving!" << endl;

    paper.setPage(5,13).show();

    paper.next().show();

    paper.prev().show();

    paper.nextN().show();

    paper.next().show();

    paper.prevN().show();

}
