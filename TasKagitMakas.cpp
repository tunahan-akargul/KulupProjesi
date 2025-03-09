#include<iostream>
#include<ctime>

using namespace std;

int randomSayiOlustur(){
    int randomNumber = rand() % 3 + 1;
    int enteredNumber;

    return randomNumber;
}

int oyunaBasla (){
    int enteredNumber;
    cout << endl <<"Hangisini secmek istiyorsun 1)Tas 2)Kagit 3)Makas : ";
    cin>>enteredNumber;
    cout<<endl;

    return enteredNumber;
}

int main(){
    srand(time(0));

    int randomNumber, enteredNumber;

    enteredNumber = oyunaBasla();
    randomNumber = randomSayiOlustur();

    do {
        if (enteredNumber == randomNumber){
            cout << "Bende aynisini yaptim. Birdaha" << endl;
            enteredNumber = oyunaBasla();
            randomNumber = randomSayiOlustur();
        }else if (enteredNumber > 3 || enteredNumber < 1){
            cout << "Lutfen seceneklerdeki sayiyi seciniz." << endl;
            enteredNumber = oyunaBasla();
            randomNumber = randomSayiOlustur();
        }
    } while ((enteredNumber == randomNumber) || (enteredNumber > 3 || enteredNumber < 1));

    if (enteredNumber == 1 && randomNumber == 2){
        cout << "Kagit yapmistim, ben kazandim." << endl << endl;
    } else if (enteredNumber == 2 && randomNumber == 1){
        cout << "Tas yapmistim, sen kazandin." << endl << endl;
    } else if (enteredNumber == 3 && randomNumber == 1){
        cout << "Tas yapmistim, ben kazandim." << endl << endl;
    } else if (enteredNumber == 1 && randomNumber == 3){
        cout << "Makas yapmistim, sen kazandin." << endl << endl;
    } else if (enteredNumber == 3 && randomNumber == 2){
        cout << "Kagit yapmistim, sen kazandin." << endl << endl;
    } else if (enteredNumber == 2 && randomNumber == 3){
        cout << "Makas yapmistim, ben kazandim." << endl << endl;
    }
    
    return 0;
}

