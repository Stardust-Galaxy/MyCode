#include <iostream>

using namespace std;

class CallBackObject;

class Server
{
public:
    Server(int size):len(size)
    {
        data = new int[size];
        
        for(int i = 0;i < len;i++)
        {
            data[i] = i + 1;
        }
    }

    ~Server()
    {
        delete[] data;        
    }

    int Total(CallBackObject& obj);

private:
    int len;

    int* data;
};

class CallBackObject
{
public:
    virtual ~CallBackObject()
    {
        
    }
};

class ClientA:public CallBackObject
{
public:
    virtual ~ClientA()
    {
        
    }

    virtual int CallBackFunc(int val)
    {
        return val;
    }

    void RequestA(Server& srv)
    {
        cout << srv.Total(*this) << endl;
    }
};

int Server::Total(CallBackObject& obj)
{
    int sum = 0;

    for(int i = 0;i < len;i++)
    {
        sum += data[i];
    }

    return sum;
}

class ClientB:public CallBackObject
{
public:
    virtual ~ClientB()
    {
        
    }

    virtual int CallBackFunc(int val)
    {

    }

    void RequestB(Server& srv)
    {
        
    }
};

int main()
{
    Server srv2(2),srv5(5);

    ClientA a;

    a.RequestA(srv2);

    a.RequestA(srv5);
}
