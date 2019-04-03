#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    string nome;
    double salario,comissao;

    cout<<fixed<<setprecision(2);
    cin>>nome>>salario>>comissao;
    cout<<"TOTAL = R$ "<<salario+0.15*comissao<<endl;

    return 0;

}
