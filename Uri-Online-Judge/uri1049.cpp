#include <iostream>

using namespace std;

int main()
{
    char name1[30], name2[30], name3[30];

    cin >> name1;
    cin >> name2;
    cin >> name3;

    if(name1 == "vertebrado"){
        if(name2 == "ave"){
            if(name3 == "carnivoro"){
                cout << "aguia" << endl;
            }
            if(name3 == "onivoro"){
                cout << "pomba" << endl;
            }
        }
        if(name2 == "mamifero"){
            if(name3 == "onivoro"){
                cout << "homem" << endl;
            }
            if(name3 == "herbivoro"){
                cout << "vaca" << endl;
            }
        }
    }
    if(name1 == "invertebrado"){
       if(name2 == "inseto"){
          if(name3 == "hematofago"){
             cout << "pulga" << endl;
            }
          if(name3 == "herbivoro"){
             cout << "lagarta" << endl;
            }
       }
       if(name2 == "anelideo"){
          if(name3 == "hematofago"){
             cout << "sanguessuga" << endl;
            }
          if(name3 == "onivoro"){
             cout << "minhoca" << endl;
            }
       }
    }

    return 0;
}
