#include <iostream>

using namespace std;

int main()
{
    int x, y, cont = 0;
    while (cont == 0){
        cin >> x;
        cin >> y;
        if (x == 0 || y == 0){
            cont++;
        }else{
            if (x > 0){
                if (y > 0){
                    cout << "primeiro" <<endl;
                }else{
                    cout << "quarto" <<endl;
                }
            }else{
                if (y > 0){
                    cout << "segundo" <<endl;
                }else{
                    cout << "terceiro" <<endl;
                }
            }
        }
    }
    return 0;
}
