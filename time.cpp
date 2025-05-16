#include <iostream>
using namespace std;

int main()
{
    int hour;
    int min;
    int hour1;
    int min1;
    int sum;

    cout<<"Введіть початкові години: ";
    cin>>hour;

    cout<<"Введіть початкові хвилини: ";
    cin>>min;
    
    while (min > 59)
    {
        min = 0;
        cout<<"Введіть правильний час в хвилинах, значення не може бути більше 59!: ";
        cin>>min;
    }
    

    cout<<"Початковий час: "<<hour<<":"<<min<<endl;

    cout<<"Введіт кількість годин яку хочете додати: ";
    cin>>hour1;

    cout<<"Введіт кількість хвилин яку хочете додати: ";
    cin>>min1;

    hour1 = hour + hour1;
    sum = min + min1;
    if (sum>59)
    {
        hour1++;
        min1=min1-60;
    }
    
    
    
    min1 = min + min1;
    cout<<"Новий час: "<<hour1<<":"<<min1<<endl;
}