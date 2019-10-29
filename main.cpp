#include <iostream>
#include <stack>
#include <list>
using namespace std;

int main()
{
//    stack<int> enteros;

//    for (int i = 0; i < 10; i++) {
//        enteros.push(i);
//    }

//    cout << "tamaño " << enteros.size() << endl;

//    stack<int> copia(enteros);

//    while (!copia.empty()) {
//        int &entero = copia.top();
//        cout << entero << endl;
//        copia.pop();
//    }
//    cout << "tamaño " << enteros.size() << endl;

    list<int*> punteros;

    for (int i = 0;i < 10; i++) {
//        int *p = new int;
//        *p = i;
//        punteros.push_back(p);
        punteros.push_back(new int(i));
    }

//    for (auto it = punteros.begin();
//         it != punteros.end(); it++) {
//        cout << *(*it) << endl;
//    }
    for(auto &puntero: punteros) {
        cout << *puntero << endl;
    }

    list<int*> copia(punteros);

    punteros.remove_if([](int *i){
        if (*i % 2 == 0) {
            delete i;
            return true;
        }
        else {
            return false;
        }
    });

    cout << "Eliminados..." << endl;
    for(auto &puntero: punteros) {
        cout << *puntero << endl;
    }

    for(auto &puntero: copia) {
        cout << *puntero << endl;
    }


    return 0;
}
