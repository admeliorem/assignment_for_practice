#include <iostream>
#include <vector>
 
using namespace std;
 
int main()
{
    // Поддержка кириллицы
    setlocale(LC_ALL, "");
    
    // Инициализация используемых переменных и массива
    int number,divisor,sum = 0,mult = 1,arr_num = 0;
    cin >> number >> divisor;
    vector<int> dyn_arr;
    
    // Циклы выполняющий проверку условия задачи
    if(number < divisor || number >= 109 || number <= 1 || divisor <= 2 || divisor >= 10){
        cout << "Число не соответствует условию задачи";
        return 0;
    }
  
    // Цикл выполняющий перевод числа из одной системы
    // счисления в другую и разделяющий его
    while(number >= divisor){
        arr_num = number % divisor;
        number = number/divisor;
        dyn_arr.push_back(arr_num);
    }
 
    // Добавляем в конец массива число после первода
    dyn_arr.push_back(number);
    
    // Цикл пребирающий значения массива и выполняющий 
    // сложение и умножение элиментов массива
    for(int i = 0; i < dyn_arr.size(); ++i){
        sum+=dyn_arr[i];
        mult*=dyn_arr[i];
    }
    cout << mult - sum;
    return 0;
}