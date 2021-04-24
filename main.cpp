#include <QCoreApplication>
#include<iostream>
using namespace std;
using namespace Qt;
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int k=5;
    int j=10;
    int v,R;
    v=k+j;
    R=k*j;
    cout<<v;
    cout<<R;
    return a.exec();
}
