#include<iostream>

void mz(int t[], int n);
int main()
{
    int n;
    std::cout << "enter n: ";
    std::cin >> n;
    int *lt = new int[n];
    std::cout << "enter the values one by one:";
    for(int i=0; i<n; i+=1)
    {
        std::cin >>lt[i];
    }
    mz(lt,n);
    //print o/p
    std::cout << "\noutput:";
    for(int i=0; i<n; i+=1)
    {
        std::cout << lt[i]<< "\t";
    }
    return 0;
}
void mz(int t[], int n)
{
    int ct=0;
    for(int i=0; i<n; i+=1)
    {
        if(t[i]!=0)
        {
            int tp=t[i];
            t[i]= t[ct];
            t[ct]= tp;
            ct +=1;
        }
    }
}