#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "ru");

    int cellsize,a=1,b=1,c=1;
    cout << "Укажите размер клетки шахматной доски -> ";
    cin >> cellsize;
    while(c<=4) {
        while (a <= cellsize) {
            cout << string(cellsize, '_') << string(cellsize, '*')
                << string(cellsize, '_') << string(cellsize, '*')
                << string(cellsize, '_') << string(cellsize, '*')
                << string(cellsize, '_') << string(cellsize, '*')<<endl ;
            a++;
        }
        
        while (b <= cellsize) {
            cout << string(cellsize, '*') << string(cellsize, '_')
                << string(cellsize, '*') << string(cellsize, '_')
                << string(cellsize, '*') << string(cellsize, '_')
                << string(cellsize, '*') << string(cellsize, '_')<<endl ;
            b++;
        }
            
       
        c++;
        a=1,b = 1;
    }
}

