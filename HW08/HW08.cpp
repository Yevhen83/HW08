#include "Warrior.h"
#include "Mage.h"
#include "Wizard.h"
#include "Warlock.h"
#include "Knight.h"
#include "Barbarian.h"
#include "Paladin.h"
#include "Rogue.h"
#include "Ranger.h"
#include "Bard.h"
#include "Monk.h"
#include "Cleric.h"
#include "Bishop.h"
void ChoosingСlassСharacter();

int main()
{
    ChoosingСlassСharacter();
    cout << "Thanks for playing!\n\n";
}

void ChoosingСlassСharacter()
{
    int x,a1,b1,a2,b2,c2,a3,b3,c3;
    bool flag = false;
    cout << " Greeting you a military!" << endl;//Приветствую тебя воен!
    cout << "You have 10 points distributed them:" << endl; //У тебя есть 10 баллов распредели их: 
    do
    {
        flag = false;
        cout << "\tPP - ";
        cin >> a1;
        cout << "\tHP - ";
        cin >> b1;
        if (a1 + b1  != 10) { flag = true; cout << " Arror!!! " << endl; }
    } while (flag);

    Warrior military(a1, b1);
    military.Print();
    cout << "\n\n";
    cout << "You have passed a long way, it's time to become stronger! " << endl; //Ты прошел долгий путь, пришло время стать сильнее!
    cout << " Choose one of the four classes: \n\t1 - Mage \n\t2 - Monk\n\t3 - Knight\n\t4 - Rogul" << endl; //Выбери один из четырех классов:
    do
    {
        flag = false;
        cout << " Make a choice - ";
        cin >> x;
        if (x < 1 || x > 4) { flag = true; cout << " Arror!!! " << endl; }
    } while (flag);
    switch (x)
    {
    case 1:
    {
        cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
        cout << "Mage strong fighter " << endl;      //сильный воен
        cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
        do
        {
            flag = false;
            cout << "\tPP - ";
            cin >> a2;
            cout << "\tHP - ";
            cin >> b2;
            cout << "\tMP - ";
            cin >> c2;
            if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        Mage mag(a1 + a2, b1 + b2, c2);
        mag.Print();
        cout << "\n\n";
        cout << " Greeting you a Mage!" << endl;//Приветствую тебя маг!
        cout << "You have passed a long way, it's time to become stronger! " << endl; //Ты прошел долгий путь, пришло время стать сильнее!
        cout << " Choose one of the two classes: \n\t1 - Wizard \n\t2 - Warlock\n" << endl; //Выбери один из двух классов:
        do
        {
            flag = false;
            cout << " Make a choice - ";
            cin >> x;
            if (x < 1 || x > 2) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        switch (x)
        {
        case 1:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Wizard strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Wizard wizard(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            wizard.Print();
            cout << "\n\n";
            break;
        }
        case 2:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Warlock strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Warlock warlock(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            warlock.Print();
            cout << "\n\n";
            break;
        }
        }

        break;
    }
    case 2:
    {
        cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
        cout << "Monk strong fighter " << endl;      //сильный воен
        cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
        do
        {
            flag = false;
            cout << "\tPP - ";
            cin >> a2;
            cout << "\tHP - ";
            cin >> b2;
            cout << "\tMP - ";
            cin >> c2;
            if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        Monk monk(a1 + a2, b1 + b2, c2);
        monk.Print();
        cout << "\n\n";
        cout << " Greeting you a Monk!" << endl;//Приветствую тебя Монах!
        cout << "You have passed a long way, it's time to become stronger! " << endl; //Ты прошел долгий путь, пришло время стать сильнее!
        cout << " Choose one of the two classes: \n\t1 - Cleric \n\t2 - Bishop\n" << endl; //Выбери один из двух классов:
        do
        {
            flag = false;
            cout << " Make a choice - ";
            cin >> x;
            if (x < 1 || x > 2) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        switch (x)
        {
        case 1:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Cleric strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Cleric cleric(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            cleric.Print();
            cout << "\n\n";
            break;
        }
        case 2:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Bishop strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Bishop bishop(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            bishop.Print();
            cout << "\n\n";
            break;
        }
        }

        break;
    }
    case 3:
    {
        cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
        cout << "Knight strong fighter " << endl;      //сильный воен
        cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
        do
        {
            flag = false;
            cout << "\tPP - ";
            cin >> a2;
            cout << "\tHP - ";
            cin >> b2;
            cout << "\tMP - ";
            cin >> c2;
            if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        Knight knight(a1 + a2, b1 + b2, c2);
        knight.Print();
        cout << "\n\n";
        cout << " Greeting you a Knight!" << endl;//Приветствую тебя Рыцарь!
        cout << "You have passed a long way, it's time to become stronger! " << endl; //Ты прошел долгий путь, пришло время стать сильнее!
        cout << " Choose one of the two classes: \n\t1 - Barbarian \n\t2 - Paladin\n" << endl; //Выбери один из двух классов:
        do
        {
            flag = false;
            cout << " Make a choice - ";
            cin >> x;
            if (x < 1 || x > 2) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        switch (x)
        {
        case 1:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Barbarian strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Barbarian barbarian(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            barbarian.Print();
            cout << "\n\n";
            break;
        }
        case 2:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Paladin strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Paladin pladin(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            pladin.Print();
            cout << "\n\n";
            break;
        }
        }

        break;
    }
    case 4:
    {
        cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
        cout << "Rogue strong fighter " << endl;      //сильный воен
        cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
        do
        {
            flag = false;
            cout << "\tPP - ";
            cin >> a2;
            cout << "\tHP - ";
            cin >> b2;
            cout << "\tMP - ";
            cin >> c2;
            if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        Rogue rogue(a1 + a2, b1 + b2, c2);
        rogue.Print();
        cout << "\n\n";
        cout << " Greeting you a Rogue!" << endl;//Приветствую тебя маг!
        cout << "You have passed a long way, it's time to become stronger! " << endl; //Ты прошел долгий путь, пришло время стать сильнее!
        cout << " Choose one of the two classes: \n\t1 - Bard \n\t2 - Ranger\n" << endl; //Выбери один из двух классов:
        do
        {
            flag = false;
            cout << " Make a choice - ";
            cin >> x;
            if (x < 1 || x > 2) { flag = true; cout << " Arror!!! " << endl; }
        } while (flag);
        switch (x)
        {
        case 1:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Bard strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Bard bard(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            bard.Print();
            cout << "\n\n";
            break;
        }
        case 2:
        {
            cout << "You did the right-hand choice!" << endl;//Ты сделал правельный выбор!
            cout << "Ranger strong fighter " << endl;      //сильный воен
            cout << "You have 20 points distributed them:" << endl; //У тебя есть 20 баллов распредели их: 
            do
            {
                flag = false;
                cout << "\tPP - ";
                cin >> a3;
                cout << "\tHP - ";
                cin >> b3;
                cout << "\tMP - ";
                cin >> c3;
                if (a2 + b2 + c2 != 20) { flag = true; cout << " Arror!!! " << endl; }
            } while (flag);
            Ranger ranger(a1 + a2 + a3, b1 + b2 + b3, c2 + c3);
            ranger.Print();
            cout << "\n\n";
            break;
        }
        }

        break;
    }
    }
}
