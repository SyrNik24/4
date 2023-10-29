#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(0, "");

    //case 1
    int num0;
    int size;
    char sym;
    int height;
    int width;
    int num1=1;

    //case 2

    int masInt[10] = { 1,2,3,100, -100, 2000, -2000, 10000, -10000, 1000000 };
    short masShort[10] = { 1,2,3,100, -100, 2000, -2000, 10000, -10000, 1000000 };
    long masLong[10] = { 1,2,3,100, -100, 2000, -2000, 10000, -10000, 1000000 };
    float masFloat[10] = { 1.5,2.5,3.5,100.999,-100.999,2000.999999,4.5,-10004,234564684,-3535435345 };
    double masDouble[10] = { 1,2,3,15.34536,-27,1008,4.5,-10004,234564684,-3535435345 };
    char masChar[10] = { '1','q', 'a', 'z', 'x', 's', 'w', '2','3','e' };
    bool masBool[10] = { false, true, false, true, false, false, true, false, true, true};

    //case 3

      //case 3.1

    const int MAS = 10;
    int mas7[MAS][MAS];

      //case 3.2

    int mas[3][3];
    int num2 = 1;
    double sum = 0;

    cout << "[+]Программа Домашнее задание\n\n";
    cout << "[1] Фигруры\n";
    cout << "[2] Одномерные массивы\n";
    cout << "[3] Многомерные массивы\n\n";
    cout << "[+] Выберите Программу:";
    cin >> num0;
    system("cls");
    switch (num0) {

    case 1:

        cout << "[+] Программа: Фигуры\n\n";
        cout << "[1] Линия\n";
        cout << "[2] Квадрат\n";
        cout << "[3] Прямоугольник\n";
        cout << "[4] Треугольник\n";
        cout << "[0] Выход\n\n";
        cout << "[+] Выберите Фигуру :";
        cin >> num0;
        system("cls");
        switch (num0) {
        case 1:                                                                                                   // Линия
            cout << "[+] Фигура: линия\n\n";
            cout << "[1] Горизонтальное\n";
            cout << "[2] Вертикальное\n\n";
            cout << "[+] Выберете положение:";
            cin >> num0;
            system("cls");
            switch (num0) {
            case 1:                                                                                                  //  Линия ( Горизонтальная )


                do {
                    cout << "[+] Введите размер линии:";
                    cin >> size;
                    if (size < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (size < 0);

                cout << "[+] Введите символ линии:";
                cin >> sym;

                for (int i = 0; i < size; i++) {
                    cout << sym;
                }

                break;
            case 2:                                                                                                  //  Линия ( Вертикальная )


                do {
                    cout << "[+] Введите размер линии:";
                    cin >> size;
                    if (size < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (size < 0);

                cout << "[+] Введите символ линии:";
                cin >> sym;

                for (int i = 0; i < size; i++) {
                    cout << sym << endl;
                }

                break;
            default:
                cout << "[!] Вы ввели некорректное значение\a";
                break;
            }

            break;
        case 2:                                                                                          // Квадрат

            cout << "[+] Фигура: квадрат\n\n";
            cout << "[1] Полый\n";
            cout << "[2] Заполненный\n\n";
            cout << "[+] Введите тип квадрата:";
            cin >> num0;
            system("cls");
            switch (num0) {
            case 1:                                                                                          // Квадрат ( Полый )

                do {

                    cout << "[+] Введите размер квадрата:";
                    cin >> size;
                    if (size < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (size < 0);

                cout << "[+] Введите символ квадрата:";
                cin >> sym;

                for (int i = 0;i < size;i++) {
                    cout << sym << " ";
                }
                cout << endl;

                for (int a = 2;a < size;a++) {

                    for (int b = 0;b < 2;b++) {

                        cout << sym;
                        for (int c = 2;c < size;c++) {
                            cout << "  ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }

                for (int i = 0;i < size;i++) {
                    cout << sym << " ";
                }

                break;
            case 2:                                                                                          // Квадрат ( Заполненный )

                do {

                    cout << "[+] Введите размер квадрата:";
                    cin >> size;
                    if (size < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (size < 0);

                cout << "[+] Введите символ квадрата:";
                cin >> sym;

                for (int i = 0;i < size;i++) {

                    for (int i = 0; i < size; i++) {
                        cout << sym << " ";
                    }
                    cout << endl;
                }


                break;



            default:
                cout << "[!] Вы ввели некорректное значение\a";
                break;
            }

            break;

        case 3:                                                                                         // Прямоугольник

            cout << "[+] Фигура: прямоугольник\n\n";
            cout << "[1] Полый\n";
            cout << "[2] Заполненный\n\n";
            cout << "[+] Введите тип прямоугольника:";
            cin >> num0;
            system("cls");
            switch (num0) {
            case 1:                                                                                         // Прямоугольник ( Полый )

                do {

                    cout << "[+] Введите высоту прямоугольника:";
                    cin >> height;
                    if (height < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (height < 0);

                do {

                    cout << "[+] Введите ширину прямоугольника:";
                    cin >> width;
                    if (width < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (width < 0);

                cout << "[+] Введите символ прямоугольника:";
                cin >> sym;

                for (int i = 0;i < width;i++) {
                    cout << sym << " ";
                }
                cout << endl;

                for (int a = 2;a < height;a++) {

                    for (int b = 0;b < 2;b++) {

                        cout << sym;
                        for (int c = 2;c < width;c++) {
                            cout << "  ";
                        }
                        cout << " ";
                    }
                    cout << endl;
                }

                for (int i = 0;i < width;i++) {
                    cout << sym << " ";
                }

                break;
            case 2:                                                                                         // Прямоугольник ( Заполненный )

                do {

                    cout << "[+] Введите высоту прямоугольника:";
                    cin >> height;
                    if (height < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (height < 0);

                do {

                    cout << "[+] Введите ширину прямоугольника:";
                    cin >> width;
                    if (width < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (width < 0);

                cout << "[+] Введите символ прямоугольника:";
                cin >> sym;

                for (int i = 0;i < height;i++) {

                    for (int i = 0; i < width; i++) {
                        cout << sym << " ";
                    }
                    cout << endl;
                }

                break;



            default:
                cout << "[!] Вы ввели некорректное значение\a";
                break;
            }

            break;

        case 4:                                                                                          // Треугольник

            cout << "[+] Фигура: треугольник\n\n";
            cout << "[1] Полый\n";
            cout << "[2] Заполненный\n\n";
            cout << "[+] Введите тип треугольника:";
            cin >> num0;
            system("cls");
            switch (num0) {
            case 1:                                                                                          // Треугольник ( Полый )

                do {

                    cout << "[+] Введите размер треугольника:";
                    cin >> size;
                    if (size < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (size < 0);


                cout << "[+] Введите символ треугольника:";
                cin >> sym;

                for (int j = 0;j < size;j++) {


                    for (int i = size;i > j;i--) {
                        cout << " ";
                    }
                    for (int a = 1;a < num1 * 2;a++) {

                        if (a == 1 || a == (num1 * 2) - 1) {
                            cout << sym;
                        }
                        else if (j == size - 1) {
                            cout << sym;
                        }

                        else {
                            cout << " ";
                        }
                    }
                    cout << endl;
                    num1++;
                }

                break;
            case 2:                                                                                          // Треугольник ( Заполненный )

                do {

                    cout << "[+] Введите размер треугольника:";
                    cin >> size;
                    if (size < 0) {
                        cout << "[!] Вы ввели некорректные данные!\a" << endl;
                    }
                } while (size < 0);


                cout << "[+] Введите символ треугольника:";
                cin >> sym;

                for (int j = 0;j < size;j++) {


                    for (int i = size;i > j;i--) {
                        cout << " ";
                    }
                    for (int i = 1;i < num1 * 2;i++) {
                        cout << sym;
                    }
                    cout << endl;
                    num1++;
                }
                break;
            default:
                cout << "[!] Вы ввели некорректное значение\a";
                break;
            }
            break;
        case 0:

            cout << "*Вы вышли*";

            break;
        default:
            cout << "[!] Вы ввели некорректное значение\a";
            break;
        }
        break;

    case 2:                                                                       // Одномерные Массивы

        cout << "[+] Программа: Одномерные массивы\n\n";
        cout << "[1] Int\n";
        cout << "[2] Short\n";
        cout << "[3] Long\n";
        cout << "[4] Float\n";
        cout << "[5] Double\n";
        cout << "[6] Char\n";
        cout << "[7] Bool\n\n";
        cout << "[+] Выберете тип переменной:";
        cin >> num0;

        system("cls");
        switch (num0) {

        case 1:                                                                                    // Int

            cout << "[+] Массив Int:\n\n";                                  

            
            for (int i = 0;i < 10;i++) {
                
                cout << "mas[" << i + 1 << "] = " << masInt[i] << endl;;

            }

            break;

        case 2:                                                                                    // Short

            cout << "[+] Массив short:\n\n";


            for (int i = 0;i < 10;i++) {

                cout << "mas[" << i + 1 << "] = " << masShort[i] << endl;;

            }

            break;

        case 3:                                                                                    // Long

            cout << "[+] Массив Long:\n\n";


            for (int i = 0;i < 10;i++) {

                cout << "mas[" << i + 1 << "] = " << masLong[i] << endl;;

            }

            break;

        case 4:                                                                                    // Float

            cout << "[+] Массив Float:\n\n";


            for (int i = 0;i < 10;i++) {

                cout << "mas[" << i + 1 << "] = " << masFloat[i] << endl;;

            }

            break;

        case 5:                                                                                    // Double

            cout << "[+] Массив Double:\n\n";


            for (int i = 0;i < 10;i++) {

                cout << "mas[" << i + 1 << "] = " << masDouble[i] << endl;;

            }

            break;

        case 6:                                                                                    // Char

            cout << "[+] Массив Char:\n\n";


            for (int i = 0;i < 10;i++) {

                cout << "mas[" << i + 1 << "] = " << masChar[i] << endl;;

            }

            break;

        case 7:                                                                                    // Bool

            cout << "[+] Массив Bool:\n\n";


            for (int i = 0;i < 10;i++) {

                cout << "mas[" << i + 1 << "] = " << masBool[i] << endl;;

            }

            break;

        default:
            cout << "[!] Вы ввели некорректное значение\a";
            break;

        }

        break;

    case 3:                                                                                   // Многомерные массивы

        cout << "[+] Программа: Многомерные массивы\n\n";
        cout << "[1] Таблица умножения при помощи массивов\n";
        cout << "[2] Матрица массивов\n\n";
        cout << "[+] Выберете задание:";
        cin >> num0;
        system("cls");
        switch (num0) {
        case 1:                                                                                           // Таблица умножение

            cout << "\n\n";

            for (int i = 1; i < MAS; i++) {
                for (int j = 1; j < MAS; j++) {
                    mas7[i][j] = i * j;
                }
            }

            for (int i = 1; i < MAS; i++) {
                for (int j = 1; j < MAS; j++) {
                    cout << setw(4) << mas7[i][j];
                }
                cout << endl;
                cout << endl;
            }

            break;
        case 2:                                                                                           // Матрица массивов

            cout << "[+] Запишите массивы:" << endl << endl;

            for (int i = 0; i < 3;i++) {

                for (int j = 0;j < 3;j++) {

                    cout << num2 << " массив: ";
                    cin >> mas[i][j];

                    num2++;
                }
            }

            cout << endl;

            for (int i = 0; i < 3;i++) {

                for (int j = 0;j < 3;j++) {

                    cout << setw(3) << mas[i][j];

                }
                cout << endl;
            }

            cout << endl;
            num2 = 1;

            for (int i = 0;i < 3;i++) {

                sum = 0;

                for (int j = 0; j < 3;j++) {

                    sum += mas[j][i];

                }

                cout << "[+] Сумма " << num2 << " столбца = " << sum << endl;
                num2++;

            }
            cout << endl;
            num2 = 1;

            for (int i = 0;i < 3;i++) {

                sum = 0;

                for (int j = 0; j < 3;j++) {

                    sum += mas[i][j];

                }

                cout << "[+] Сумма " << num2 << " строки = " << sum << endl;
                num2++;

            }

            break;
        default:

            cout << "[!] Вы ввели некорректное значение\a";
            break;
        }

        break;

    default:
        cout << "[!] Вы ввели некорректное значение\a";
        break;
    }
    return 0;
}

