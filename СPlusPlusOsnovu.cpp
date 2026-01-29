#include "Sourse.h";

int main(int argc, wchar_t* argv[])
{
    SetConsoleCP(CP_UTF8);        // Для введення
    SetConsoleOutputCP(CP_UTF8);  // Для виведення
   /*SetConsoleCP(1251);
   SetConsoleOutputCP(1251);*/
    //setlocale(LC_ALL, "Russian");
    cout << "Привіт Віталій!\n" << endl;
    if (values >= 0)
 goto open_first;
tryAgain:
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "| Введите номер программы или 0 для выхода: ";
    cin >> values;
    cout << "----------------------------------------------" << endl;
    cout << "| Your program is: "<<endl;
    do
    {
        if (values >= 0 && values <= 33)
        {
            //#include "main_0_33.cpp";
           switch (values)
            {
            // Нулевой кейс оператор goto выход из программы
            case(0):
            {
                goto exit_1;
                break;
            }
            // Работы с циклом 'For'
            case(1):
            {
                int a1{ 0 };       // Переменные для цикла 'For'
                int b1('0');
                cout << " Программа сравнения двух переменных 'A' и 'B' в цикле For: " << endl;
                cout << " Введите переменную а " << endl;
                cin >> a1;
                cout << " Введите переменную b " << endl;
                cin >> b1;
                cout << " Тренировка с циклами for " << endl;

                if (a1 > b1)
                {
                    cout << "Переменная А больше переменной В " << " a = " << a1 << " b = " << b1 << endl;
                    a1 > b1 ? cout << a1 << endl : cout << b1 << endl;
                }
                else
                {
                    cout << "Переменная А меньше переменной В и меньше 10" << " a = " << a1 << " b = " << b1 << endl;
                }

                break;
            }
            // Вывода простого счётчика в цикле 'For'
            case(2):
            {
                for (unsigned count = 0; count <= 65524; count += 64)
                {
                    cout << count << "  ";
                }
                cout << endl;

                break;
            }
            // Для вывода простых чисел через цикл while нажмите
            case(3):
            {
                cout << " Счетчик на цикле while " << endl;
                int counter = 0;
                while (counter <= 65536 && counter >= 0)
                {
                    cout << counter << "  ";
                    counter += 64;
                }
                cout << endl;
                break;
            }
            // Для вывода символов с их значениями ASCII используя два цикла 'For'
            case(4):
            {
                for (char c = 'a'; c <= 'z'; ++c) // внешний цикл по буквам
                {
                    std::cout << c; // сначала выводим букву
                    for (int i = 0; i < 3; ++i) // внутренний цикл по числам
                        std::cout << i;
                    std::cout << '\n';
                }
                break;
            }
            // Вывода сиволов латиницы с их значениями ASCII используя цикла 'while '
            case(5):
            {
                char mychar = 'a'; // Инициализация переменной mychar для вывода букв латиницы с а до z;
                while (mychar <= 'z')
                {
                    cout << mychar << "  " << static_cast<int>(mychar) << "  ";
                    ++mychar;
                }

                break;
            }
            // Цикла 'do => while ' 
            case(6):
            {
                bool choos = false;// Переменная choos для работы счётчика на цикле do=>while;
                do
                    cout << " Используем цикл do=>while одни раз" << endl;
                while (choos);
                cout << endl;

                break;
            }
            // Тренировка по работе с массивами, вычисления средного бала  
            case(7):
            {
                //Изучам циклы и массивы
                int students[] = { 73, 85, 84, 44, 78 };
                const int numStudents = sizeof(students) / sizeof(students[0]);
                int totalScore = 0;
                // Используем цикл для вычисления totalScore
                for (int person = 0; person < numStudents; ++person)
                    totalScore += students[person];
                double averageScore = static_cast<double>(totalScore) / numStudents;
                cout << " Средний бал в группе: " << averageScore << endl;
                cout << endl;

                break;
            }
            // Выводим массив и число значений в массиве
            case(8):
            {
                cout << " " << endl;
                int array[] = { 10,23,22,4,5 };
                int mas = sizeof(array) / sizeof(array[0]);
                int iii = 0;
                cout << " Выводим значения массива по очереди в строчку ";
                while (iii < mas)
                {
                    cout << array[iii] << "  ";
                    iii++;
                }
                cout << " " << endl;
                cout << " Число значений в массиве: " << mas << endl;
                cout << " " << endl;

                break;
            }
            // Создаём и выводим 3 - х мерный массив
            case(9):
            {
                const unsigned int DIM1 = 3;
                const unsigned int DIM2 = 5;
                const unsigned int DIM3 = 2;

                int ary[DIM1][DIM2][DIM3];

                for (int i = 0; i < DIM1; i++) {
                    for (int j = 0; j < DIM2; j++) {
                        for (int k = 0; k < DIM3; k++) {
                            ary[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                            cout << setw(4) << ary[i][j][k];
                        }
                        cout << endl;
                    }
                    cout << endl;
                }

                cout << endl;

                break;
            }
            // Создаём и выводим динамический массив
            case(10):
            {
                char* array111 = new char[14]{ "Hello, world!" };
                cout << array111 << endl;
                delete[] array111;
                int aaa = 255;
                bool bbb = true;

                int* array = new int[aaa];
                for (aaa = 0; aaa < 255; aaa++)
                {
                    if (bbb == true)
                    {
                        array[aaa] = 1;
                        bbb = false;
                    }
                    else
                    {
                        array[aaa] = 0;
                        bbb = true;
                    }

                }

                for (aaa = 0; aaa < 255; aaa++)
                {
                    cout << array[aaa] << " ";
                }

                cout << endl;
                delete[] array;

                break;
            }
            // Генерация случайных чисел через фукцию rand();
            case(11):
            {
                auto a = rand();
                auto b = rand() * 100;
                auto c = 1 + rand() % 80;
                auto d = int(rand() * 100);
                cout << " Выводит 1 рандомное число (случайное число от 1до 0)" << a << endl;
                cout << " Выводит 1 рандомное число (случайное число от 1до 0)" << b << endl;
                cout << " Выводит 1 рандомное число (случайное число от 1до 0)" << c << endl;
                cout << " Выводит 1 рандомное число (случайное число от 1до 0)" << d << endl;

                break;
            }
            // Работа со строками типа string (строка) функции: - cin.ignore()  - getline() - cin.get() - name.length();
            case(12):
            {
                string surname, name; // инициализируем переменные
                int result1 = 0;
                cout << " Введите имя:";
                cin.get();
                getline(cin, name);

                cout << " Введите фамилию:";
                // cin.get(); //удаляет из фамилии один символ - первый.
                getline(cin, surname);
                result1 = surname.length() + name.length();
                cout << " Ваши имя и фамилия:";
                //cin.ignore(32767, '\n'); // игнорируем символы перевода строки "\n" во входящем потоке длиной 32767 символов 
                cout << " " << name << " " << surname << "-- Количество символов в имени и фамилии - " << result1;
                cout << endl;
                break;
            }
            // Работаем с строквыми массивами char string[] и функцией gets_s ;
            case(13):
            {
                char string[500];
                cout << " Ведите строку :";
                cin.get();
                gets_s(string);
                cout << endl;

                cout << endl;
                cout << string << endl;

                break;
            }
            // Поиск ошибок, ключевые слова throw, try и catch
            case(14):
            {
                int num1;
                int num2;
                cout << " Enter num1:" << endl;
                cin >> num1;
                cout << " Enter num2:" << endl;
                cin >> num2;

                cout << "num1 + num2 = " << num1 + num2 << endl;
                cout << "num1/num2 = ";
                try
                {
                    if (num2 == 0)
                        throw 123;

                    cout << num1 / num2 << endl;
                }
                catch (int i)
                {
                    cout << "Error &" << i << " - divided by 0 !!!" << endl;
                }

                break;
            }
            // Изучение констант. Спецификатор constexpr, const.
            case(15):
            {
                const string text14 = R"(Спецификатор constexpr -- константой времени компиляции. В языке C++ есть два вида констант:
                Константы времени выполнения
                Эти константы получают своё значение во время работы программы(usersAge).
                Значение usersAge вводится пользователем, а myValue вычисляется во время выполнения — компилятор не знает их заранее.
                Константы времени компиляции.
                Эти константы известны компилятору ещё до запуска программы.
                Когда использовать constexpr?
                - Для определения размера массивов
                - Для оптимизации кода — если переменная вычисляется на этапе компиляции, программа работает быстрее.
                Если нужна гибкость — используйте const. Если важна производительность и возможность расчётов до запуска — лучше constexpr.)";

                int usersAge;
                std::cout << "Введите ваш возраст: ";
                std::cin >> usersAge;
                const int myValue = usersAge + 10; // Значение определяется во время выполнения

                std::cout << "Через 10 лет вам будет " << myValue << std::endl;


                cout << text14 << endl;
                const  int num1{ 22 }; //инициализация переменных разными способами.
                constexpr  int num2(33);
                cout << " Переменная const  int num1:" << num1 << endl;
                cout << " Переменная constexpr  int num2:" << num2 << endl;
                break;
            }
            //Изучение указателей, ссылок 
            case(16):
            {
                int num1{ 22 };
                int* ptrnum1 = &num1;
                int& ref_num1(num1);

                cout << " Переменная 'num1' выводим её:" << num1 << endl;
                cout << " Переменная 'num1' выводим по указателю:" << *ptrnum1 << endl;
                cout << " Переменная 'num1' выводим адрес указателя и  адрес переменной:" << ptrnum1 << " =  " << &num1 << endl;
                cout << endl << " Дальше выводим ссылку : " << endl;
                cout << " Переменная 'num1' выводим её:" << num1 << endl;
                cout << " Переменная 'num1' выводим по ссылке:" << ref_num1 << endl;
                cout << " Переменная 'num1' выводим адрес ссылки и  адрес переменной:" << &ref_num1 << " =  " << &num1 << endl;
                
                break;
            }
            //Структуры  
            case(17):
            {
                struct Date
                {
                    int year;
                };
                struct Auto
                {
                    int wheels;
                    float speed;
                    char color;
                    Date sozdanie;
                };

                Auto shkoda;
                shkoda.wheels = 4;
                shkoda.speed = 200;
                shkoda.color = 'r';
                shkoda.sozdanie.year = 2000;

                Auto Audy{ 4, 300, 'b', 2006 };

                cout << " Выводим данные по структуре шкода: " << " количество колёс: " << endl << shkoda.wheels << endl
                    << " скорость: " << shkoda.speed << endl
                    << " цвет: " << shkoda.color << endl
                    << " год создания: " << shkoda.sozdanie.year
                    << endl;
                cout << " Выводим данные по структуре Audi: " << " количество колёс: " << endl << Audy.wheels << endl
                    << " скорость: " << Audy.speed << endl
                    << " цвет: " << Audy.color << endl
                    << " год создания: " << Audy.sozdanie.year
                    << endl;
                break;
            }
            //Перечисления Enum  
            case(18):
            {
                // Инициализация переменных
                enum mall { parking = -1, hall, many_shops, roof };
                int floor;
                bool exit = false;
                while (!exit)
                {
                    cout << "Enter your floor(from -1 to 2)" << endl;
                    cin >> floor;
                    switch (floor)
                    {
                    case parking:
                    {
                        cout << "We on the -1 floor in the parking" << endl;
                        break;
                    }
                    case hall:
                    {
                        cout << "We on the 0 floor in the hall" << endl;
                        break;
                    }
                    case many_shops:
                    {
                        cout << "We on the 1 floor in the many_shops" << endl;
                        break;
                    }
                    case roof:
                    {
                        cout << "We on the 2 floor in the roof" << endl;
                        break;
                    }
                    default:
                    {
                        cout << "Floor only from -1 to 2" << endl;
                    }
                    }
                    cout << "If you want to play again press 0 or press 1 to exit this game" << endl;
                    cin >> exit;
                }
                break;
            }
            //Работа с файлами   
            case(19):
            {
                char text[50];
                ofstream file("text.txt");
                cout << " Soft is working! ";

                file << "All is works";
                file.close();
                cout << "Text is wright! " << endl;

                ifstream file1("text.txt");
                if (!file1.is_open())
                {
                    cout << " Error file is not found! " << endl;
                }
                else
                {
                    file1.getline(text, 50);
                    cout << " Текст из файла: " << text << endl;
                }
                break;
            }
            //Функции   
            case(20):
            {
                int num = 234;
                funkt(num);
                cout << " Виводим сумму двух переменных через созданную функцию - " << sum(23.23, 54.1) << endl;
                break;
            }
            // Перегрузка функции
            case(21):
            {
                cout << " Работа с перегрузкой функции, выводим функцию sum(float x, float y, float z) - " << sum(23.4, 33.2, 44.33) << endl;
                break;
            }
            // Глобальные и локальные переменные
            case(22):
            {
                int values1 = 1;

                cout << " Вывод глобальной переменной через функцию " << endl;
                int vuvod22(values1);
                cout << " Вывод локальной переменной через cout c именем локальным " << values1 << endl;
                cout << " Вывод глобальной переменной через cout и :: " << ::values1 << endl;
                break;
              
            }
            // Математические функции
            case(23):
            {
                cout << " Округление " << endl;
                cout << " round - Округляет число по правилам арифметики, то есть round(1.5) == 2, round(-1.5) == -2 !! -- " << round(1.5) << endl;
                cout << " floor - Округляет число вниз (“пол”), при этом floor(1.5) == 1, floor(-1.5) == -2 !! -- " << floor(1.5) << endl;
                cout << " ceil - Округляет число вверх (“потолок”), при этом ceil(1.5) == 2, ceil(-1.5) == -1 !! -- " << ceil(1.5) << endl;
                cout << " trunc - Округление в сторону нуля (отбрасывание дробной части), при этом trunc(1.5) == 1, trunc(-1.5) == -1 !! -- " << trunc(1.5) << endl;
                cout << " fabs 	Модуль (абсолютная величина) !! -- " << fabs(-1.5) << endl;

                cout << " Корни, степени, логарифмы " << endl;
                cout << "  sqrt Квадратный корень. Использование: sqrt(x) !! -- " << sqrt(9) << endl;
                cout << "  cbrt Кубический корень. Использование: cbrt(x) !! -- " << cbrt(27) << endl;
                cout << "  pow 	Возведение в степень, возвращает ab. Использование: pow(a,b) !! -- " << powl(2, 3) << endl;
                cout << "  exp 	Экспонента, возвращает ex. Использование: exp(x) !! -- " << exp(2) << endl;
                cout << "  log 	Натуральный логарифм !! -- " << log(2) << endl;
                cout << "  log10 Десятичный логарифм !! -- " << log10(2) << endl;

                cout << " Тригонометрия " << endl;
                cout << "  sin 	Синус угла, задаваемого в радианах !! -- " << sin(30) << endl;
                cout << "  cos 	Косинус угла, задаваемого в радианах !! -- " << cos(30) << endl;
                cout << "  tan 	Тангенс угла, задаваемого в радианах !! -- " << tan(30) << endl;
                cout << "  asin Арксинус, возвращает значение в радианах !! -- " << asin(30) << endl;
                cout << "  acos Арккосинус, возвращает значение в радианах !! -- " << acos(30) << endl;
                cout << "  atan Арктангенс, возвращает значение в радианах !! -- " << atan(30) << endl;

                break;
            }
            // Классы, обёкты и методы, конструкторы, деструкторы;
            case(24):
            {
                Auto shkoda;
                shkoda.messege();
                shkoda.set(2005, 11, 23);
                shkoda.get();

                Auto BMW(2022, 03, 20);
                BMW.set(2222, 11, 01);
                BMW.get();

                Numbers N1;
                N1.set();
                N1.get();

                Numbers N2;
                N2.set();
                N2.get();
                break;
            }
            //Дружественные функции и классы
            case(25):
            {
                A_25 first;
                B_25 second;
                cout << " Resulst is - " << sum(first, second) << endl;
                break;
            }
            //Дружественные функции 
            case(26):
            {
                Dog skuby;
                Person Volodya;
                Volodya.Damge(skuby);
                Volodya.kill(skuby);
                Volodya.Damge(skuby);
                Volodya.Hill(skuby);

                cout << endl;
                Dog haski;
                Volodya.Hill(haski);
                break;
            }
            // Указатель this-> 
            case(27):
            {
                Test_27 Test;
                Test.set(23, 44, 56);
                Test.get();

                break;
            }
            // Наследование классов ООП 
            case(28):
            {
                cout << " Наследование классов ООП! " << endl;
                Second_27 obj(1);
                Third_27 object(2);
                break;
            }
            // Шаблоный функций
            case(29):
            {
                const int iSize = 3, fSize = 2, dSize = 3, cSize = 10;
                int i_arr[iSize] = { 23, 45, 78 };
                float f_arr[fSize] = { 12.2, 67.54 };
                double d_arr[dSize] = { 3.789, 45.789, 789.4567 };
                char c_arr[cSize] = { " HI !! " };


                cout << "Массив с типом данных int ";
                cout << " Количество элементов : " << printArr <int, int>(i_arr, iSize) << endl;

                cout << "Массив с типом данных float ";
                cout << " Количество элементов : " << printArr <float, int>(f_arr, fSize) << endl;

                cout << "Массив с типом данных double ";
                cout << " Количество элементов : " << printArr <double, int>(d_arr, dSize) << endl;

                cout << "Массив с типом данных char ";
                cout << " Количество элементов : " << printArr <char, int>(c_arr, cSize) << endl;

                break;
            }
            // Шаблоны классов 
            case(30):
            {
                int arr[] = { 12, 23, 45, 6 };
                Arr<int> obj(arr);
                cout << obj.getElement(0) << endl;

                char arr_1[] = { "Mars" };
                Arr<char> object(arr_1);
                cout << object.getElement(0) << endl;
                break;
            }
            // Ввод списка
            case(31):
            {
                char line[LINES][10];
                char str[200];
                char s[] = "|                                                                                           |    |";
                fstream inOut;

                inOut.open("SPISOK.txt", ios::in); // открываем файл для ввода
                //Считываем из файла имеющиеся данные
                int count = 0;
                while (inOut.getline(line[count], 200)) count++;
                inOut.close(); // закрываем файл

                // Ввод данных для размещаемой строки
                cout << "Название программы: ";
                cin.ignore();
                cin.getline(str, 100); // вводим ФИО
                for (int i = 0; str[i] != '\0'; i++) // копируем в строку без 0
                    s[i + 2] = str[i];               // начиная с указанной позиции

                cout << "№: ";
                cin.getline(str, 100);
                for (int i = 0; str[i] != '\0'; i++)
                    s[i + 94] = str[i];

                inOut.open("SPISOK.txt", ios::out); // открываем файл для вывода
                inOut << "--------------------------------------------------------------------------------------------------" << endl;
                inOut << "|   Название программы:                                                                     |  № |" << endl;
                inOut << "--------------------------------------------------------------------------------------------------" << endl;

                // Выводим обратно в файл все строки кроме "шапки" (первые 3 строки)
                for (int j = 3; j <= count; j++)
                {
                    inOut << line[j] << (j <= (count - 1) ? "\n" : "");
                }
                inOut << s << endl; // выводим сформированную строку
                inOut << "--------------------------------------------------------------------------------------------------" << endl;
                inOut.close();
                break;
            }
            // Вывод списка------------------------------------------------
            case(32):
            {
            open_first:
                string line;
                ifstream myfile("SPISOK.txt");
                if (myfile.is_open())
                {
                    while (!myfile.eof())
                    {
                        getline(myfile, line);
                        cout << line << endl;
                    }
                    myfile.close();
                }

                else cout << "Unable to open file";
                break;
            }
            // Вывод списка
            case(33):
            {
                cout << "_____________Курс_Simple_Code_lesson_____________" << endl;
                cout << "Подробный курс по С++ включающий изучение библиотек: Mutex, STL библиотека" << endl;
                break;
            }
            default:
            {
                cout << " Введите только предлагаемые числа с 0 до 33 !!! ";
                cout << " " << endl;
                cin >> values;
            }
            }
        }
        
        if(values >= 34 && values <= 169)
        {
        switch (values)
        {
        // Simple_Code_lesson_(1 Hello, World!!!)
        case(34):
        {
            cout << "\n\nSimple_Code_lesson_(1 Hello, World!!!)\n" << endl;
            cout << "Hello World\n\t";
            break;
        }
        // Simple_Code_lesson_(2  Структура и порядок выполнения программы. #Include. using namespace.)
        case(35):
        {
            cout << "\n\nSimple_Code_lesson_(2 Структура и порядок выполнения программы. #Include. using namespace.)\n" << endl;
            cout << "\t\tПривет!\n";
           
           cout << " iostream. Библиотека - файл, в котором содержится описание\n"<< 
           "различных функций, реализованых другими програмистами.\n"<<
           "Данная программа получила возможность использоват функции\n" <<
           "находящиеся в библиотеке iostream.\n"<<endl;
           
           cout << " using namespace std; В языке С++ существует понятие пространства имён.\n" <<
                   " Это пространство определяет некую область, на которую приходится действие оператора или функции.\n" <<
                   " Для того,  что бы использовать оператор, находящийся в определённом пространстве, \n" <<
                   " необходимо подключить это пространство в свою программу. Ниже подключается пространство под название std\n" << endl;
            break;
        }
        // Simple_Code_lesson_(3 Escape - последовательности. Как использовать.)
        case(36):
        {
            cout << "\n\nSimple_Code_lesson_(3 Escape - последовательности. Как использовать.)\n" << endl;
            /*
            - \n — новая строка, переносит текст на следующую строку.
            - \t — горизонтальная табуляция, добавляет отступ.
            - \\ — обратная косая черта, используется для отображения \.
            - \" — двойная кавычка, позволяет вставлять " внутри строк.
            - \' — одиночная кавычка, полезно для работы с символами.
            - \r — возврат каретки, перемещает курсор в начало строки.
            - \b — backspace, удаляет предыдущий символ.
            - \a — звуковой сигнал, вызывает звуковое оповещение.
            */

            cout << "\t\n **\b  Escape - последовательности \\   \"  \'" << endl;
            break;
        }
        // Simple_Code_lesson_(4 Типы данных в C . C для начинающих.)
        case(37):
        {
            cout << "\n\nSimple_Code_lesson_(4 Типы данных в C . C для начинающих.)\n" << endl;
            
            int a('14');
            float b = 14.14;
            double c{ 15.3456 };
            char d = 'd';
            bool k = true;
            cout << " Основные типы данных в языке С++ " << endl;
            cout << " Тип данных int a('14'); - " << a << endl;
            cout << " Тип данных float b = 14.14; - " << b << endl;
            cout << " Тип данных double c{ 15.3456 }; - " << c << endl;
            cout << " Тип данных char d = 'd'; - " << d << endl;
            cout << " Тип данных bool k = true; - " << k << endl;
            break;
        }
        // Simple_Code_lesson_(5 Переменные. Способы объявления. Правила именования.)
        case(38):
        {
            cout << "\n\nSimple_Code_lesson_(5 Переменные. Способы объявления. Правила именования.)\n" << endl;
            int a('14');
            float b = 14.14;
            double c{ 15.3456 };
            char d = 'd';
            bool k = true;
            cout << " Основные типы данных в языке С++ " << endl;
            cout << " Тип данных int a('14'); - " << a << endl;
            cout << " Тип данных float b = 14.14; - " << b << endl;
            cout << " Тип данных double c{ 15.3456 }; - " << c << endl;
            cout << " Тип данных char d = 'd'; - " << d << endl;
            cout << " Тип данных bool k = true; - " << k << endl;
            
            break;
        }
        // Simple_Code_lesson_(6 Константы. Ключевое слово const.)
        case(39):
        {
            cout << "\n\nSimple_Code_lesson_(6 Константы. Ключевое слово const.)\n" << endl;
            const int COUNT_DAY_IN_WEEK = 7;
            cout << "Дней в неделе\t-\t" << COUNT_DAY_IN_WEEK << endl;            
            break;
        }
        // Simple_Code_lesson_(7 Ввод данных. Cin. Пример. Синтаксис. )
        case(40):
        {
            cout << "\n\nSimple_Code_lesson_(7 Ввод данных. Cin. Пример. Синтаксис. )\n" << endl;
            int a = 0;
            cout << "Введите переменную а" << endl;
            cin >> a;
            cout << endl;
            cout << "Переменная а = " << a << endl;
            break;
        }
        // Simple_Code_lesson_(8 Операторы. Арифметические операции с числами.)
        case(41):
        {
            cout << "\n\nSimple_Code_lesson_(8 Операторы. Арифметические операции с числами.)\n" << endl;
            int a, b, c, d;
            d = ((20 + 2 - 2) * 2) / 2;
            cout << "Введите число 1: ";
            cin >> a;

            cout << "Введите число 2: ";

            cin >> b;
            cout << "Введите число 3: ";

            cin >> c;
            cout << endl;
            cout << "Cумма трех введенных чисел:                " << a + b + c << endl;
            cout << "Произведение трех введенных чисел:         " << a * b * c << endl;
            cout << "Среднеарифметическое трех введенных чисел: " << (a + b + c) / 3 << endl;
            break;
        }
        // Simple_Code_lesson_(9 Инкремент и декремент. Постфиксный и префиксный. Пример. Синтаксис.)
        case(42):
        {
            cout << "\n\nSimple_Code_lesson_(9 Инкремент и декремент. Постфиксный и префиксный. Пример. Синтаксис.)\n" << endl;
            int a9 = 1, a91 = 1, b9, b91;
            b9 = ++a9 * a9++; /* Префиксная форма дикримента / инкримента имеет приоритет в виполнении a9 = (1 + 1 + 1)
            Сначал идёт сложение 1+1 потом переменная умножается сама на себя (1+1)*(1+1) суфиксная часть выоплняется после умножения*/
            b91 = ++a91 * a91; // a91=1+1

            cout << " Выводим переменую b(префикс + суфикс):\t  " << b9 << endl;
            cout << " Выводим переменую а9:\t                  " << a9 << endl;

            cout << " Выводим переменую b(префикс):\t          " << b91 << endl;
            cout << " Выводим переменую а91:\t                  " << a91 << endl;
            break;
        }
        // Simple_Code_lesson_(10 Сокращенные арифметические формы =, -= и т д.)
        case(43):
        {
            cout << "\n\nSimple_Code_lesson_(10 Сокращенные арифметические формы =, -= и т д.)\n" << endl;
            int a = 10;
            a += 10;
            cout << "Переменная а +=" << a << endl;

            a -= 10;
            cout << "Переменная а -=" << a << endl;

            a *= 2;
            cout << "Переменная а *=" << a << endl;

            a /= 2;
            cout << "Переменная а /=" << a << endl;

            a %= 3;
            cout << "Переменная а %=" << a << endl;
            break;
        }
        // Simple_Code_lesson_(11 Логические операции. Операторы сравнения, равенства, объединения, инверсия.)
        case(44):
        {
            cout << "\n\nSimple_Code_lesson_(11 Логические операции. Операторы сравнения, равенства, объединения, инверсия.)\n" << endl;

            /*
            1. Операторы сравнения
            < меньше
            > больше
            <= меньше \ равно
            >= больше равно

            2. Операторы равенства
            ==  равно
            !=  не равно

            3. Логические операторы обёденения и отрицательной инверсии
            && - И 1*1=1; 1*0=0
            || - ИЛИ 1+1=1; 1+0=1
            != - побитовое исключающее ИЛИ (XOR)
            */
            int a = 3, b = 4;
            cout << "Проверка операторов сравнения " << (a <= b || a != 0 && b != 0) << endl;
            break;
        }
        // Simple_Code_lesson_(12 If else. Конструкция логического выбора if. Лесенка if - else if. Примеры исполь.)
        case(45):
        {
            cout << "\n\nSimple_Code_lesson_(12 If else. Конструкция логического выбора if. Лесенка if - else if. Примеры исполь.)\n" << endl;
            int a, b, c;
            cout << " Введите число:";
            cin >> a;

            if (a > 5)
            {
                cout << " Вы ввели число больше 5 " << endl;
            }
            else if (a < 5)
            {
                cout << " Вы ввели число меньше 5 " << endl;
            }
            else
            {
                cout << " Вы ввели число 5" << endl;
            }

            cout << " Дз проверка на чётность! Введите целое число:";
            cin >> b;
            c = b % 2;
            if (c == 0) { cout << " Вы ввели чётное число!" << endl; }
            else { cout << " Вы ввели не чётное число!" << endl; }
            break;
        }
        // Simple_Code_lesson_(13 Switch_case. Что это. Пример. Синтаксис. Оператор множественного выбора.)
        case(46):
        {
            cout << "\n\nSimple_Code_lesson_(13 Switch_case. Что это. Пример. Синтаксис. Оператор множественного выбора.)\n" << endl;
            int a, b, c;
            char d = '+';
            cout << " Введите первое число a: ";
            cin >> a;
            cout << endl;
            cout << " Введите второе число b: ";
            cin >> b;
            cout << endl;
            cout << "Введите знак действия (+; -; *; /)";
            cin >> d;
            cout << endl;
            switch (d)
            {
            case'+':
            {
                c = a + b;
                cout << " a " << d << " b = " << c << endl;
                break;
            }
            case'-':
            {
                c = a - b;
                cout << " a " << d << " b = " << c << endl;
                break;
            }
            case'*':
            {
                c = a * b;
                cout << " a " << d << " b = " << c << endl;
                break;
            }
            case'/':
            {
                c = a / b;
                cout << " a " << d << " b = " << c << endl;
                break;
            }
        defolt:
            {
                cout << "Вы не ввели предлагаемый знак!";
                break;
            }
            }
            break;
        }
        // Simple_Code_lesson_(14 Циклы. Цикл while.)
        case(47):
        {
            cout << "\n\nSimple_Code_lesson_(14-15 Циклы. Цикл while.)\n" << endl;
            int a47, b47;
            a47 = 0;
            b47 = 0;
            while (a47 < 100)
            {
                cout << a47 << "\t";
                a47++;
                b47++;
                if (b47 == 10) 
                { 
                cout << endl << endl; 
                b47 = 0;
                }
            }
            break;
        }
        // Simple_Code_lesson_(15 Циклы. Цикл do while.)
        case(48):
        {
            cout << "\n\nSimple_Code_lesson_(15 Циклы. Цикл do while.)\n" << endl;

            int c48;

            c48 = 0;

            do
            {

            cout << " " << c48 << " ";

            c48++;

            } while (c48 < 10);

            cout << endl;

            break;
        }
        // Simple_Code_lesson_(16 Цикл for.)
        case(49):
        {
            cout << "\n\nSimple_Code_lesson_(16 Цикл for.)\n" << endl;

            for (int j17 = 0; j17 < 5; j17++)
            {

                for (int i17 = 0; i17 < 5; i17++)
                {
                    cout << "\tHello World!";
                }
                cout << endl << endl;
            }
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(18 - 19 Ключевое слово continue, break c что это. Оператор continue, break.)
        case(50):
        {
            cout << "\n\nSimple_Code_lesson_(18 - 19 Ключевое слово continue, break c что это. Оператор continue, break.)\n" << endl;

            for (int i19 = 0; i19 < 10; i19++)
            {
                cout <<"\t" << i19 << "\tHello World!" << endl << endl;
                if (i19 == 3)
                {
                    cout << "\tПеременная равна 3" << endl << endl;
                    continue;
                }
                if (i19 == 5)
                {
                    break;
                }
            }
            break;
        }
        // Simple_Code_lesson_(20_21_22_23 Ключевое слово goto, отладка программы)
        case(51):
        {
            cout << "\n\nSimple_Code_lesson_(20_21_22_23 Ключевое слово goto, отладка программы)\n" << endl;

            int a = 3, b = 5, c;
            
            cout << "\t" << "1. Hello World!\n";

            cout << "\t" << "2. Hello World!\n";

            goto link;

            cout << "\t" << "3. Hello World!\n";

            cout << "\t" << "4. Hello World!\n";
        link:
            c = sum51(a, b);

            cout << "\t" << c << endl;

            cout << "\t" << "5. Hello World!\n";

            break;
        }
        // Simple_Code_lesson_(24 Что такое вложенный цикл. Вложенная конструкция.)
        case(52):
        {
            cout << "\n\nSimple_Code_lesson_(24 Что такое вложенный цикл. Вложенная конструкция.)\n" << endl;

            /*for (int i23 = 0; i23 <= 29; i23++)
            {
                if (i23 < 5 || i23 == 6 || i23 == 10 || i23 == 12 || i23 == 16 || i23 == 18 || i23 == 22 || (i23 > 23 && i23 <= 28)) { cout << " *"; }
                if (i23 == 5 || i23 == 11 || i23 == 17 || i23 == 23) { cout << endl; }
                if ((i23 > 6 && i23 <= 9) || (i23 > 12 && i23 <= 15) || (i23 > 18 && i23 <= 21)) { cout << "  "; }

            }
            cout << endl << endl;*/

            for (int i52 = 0; i52 <= 20; i52++) {
                for (int j52 = 0; j52 <= 20; j52++) {
                    cout << '*';
                }
                cout << endl;

            }

            break;
        }
        // Simple_Code_lesson_(25_26_27_Массивы и циклы.)
        case(53):
        {
            cout << "\n\nSimple_Code_lesson_(25_26_27_Массивы и циклы.)\n" << endl;

            int arr[100]{};
            cout << "Hello World!\n" << endl;
            int num = 0;
            for (int i = 0; i <= 99; i++)
            {
                arr[i] = i;
            }
            for (int y = 0; y <= 9; y++)
            {
                for (int i = 0; i <= 9; i++)
                {
                    cout << arr[num] << " ";
                    num++;
                }
                cout << endl;
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(28 sizeof что это. sizeof c массив. Узнать количество элементов массива. )
        case(54):
        {
            cout << "\n\nSimple_Code_lesson_(28 sizeof что это. sizeof c массив. Узнать количество элементов массива. )\n" << endl;

            int arr[]{ 5,44,888 };

            cout << "Количество елементов в массиве = " << sizeof(arr) / sizeof(arr[0]) << endl;

            cout << endl << endl;            

            break;
        }
        // Simple_Code_lesson_(29 rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел.  )
        case(55):
        {
            cout << "\n\nSimple_Code_lesson_(29 rand. srand. rand задать диапазон. srand time null. Генератора случайных чисел.  )\n" << endl;

            srand(time(NULL));

            int a = rand() % 10;

            cout << a << endl;

            a = rand() % 10;

            cout << a << endl;

            cout << "Вихрь Мерсенна\n";

            std::random_device rd;

            std::mt19937 mersenne(rd()); // инициализируем Вихрь Мерсенна случайным стартовым числом 

            // Выводим несколько случайных чисел

            for (int count = 0; count < 48; ++count)
            {
                std::cout << mersenne() << "\t";

                // Если вывели 5 чисел, то вставляем символ новой строки

                if ((count + 1) % 5 == 0)

                    cout << "\n";
            };

            cout << endl << endl;

            std::mt19937 rng(5489); // Инициализация генератора
            std::uniform_int_distribution<int> dist(1, 1000); // Диапазон чисел

            for (int i = 0; i <= 100; i++) {
                std::cout << "Случайное число: " << dist(rng) << '\t';
                if (i % 10) { cout << endl; }
            }
            cout << endl << endl;


            break;
        }
        // Simple_Code_lesson_(30_31_32 Двумерный массив что это. Многомерные массивы.)
        case(56):
        {
            cout << "\n\nSimple_Code_lesson_(30_31_32 Двумерный массив что это. Многомерные массивы.)\n" << endl;

            const int ROWS = 5;

            const int COLS = 8;

            int arr[ROWS][COLS]{ };

            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLS; j++)
                {
                    arr[i][j] = rand() % 100;
                }
            }

            for (int i = 0; i < ROWS; i++)
            {
                for (int j = 0; j < COLS; j++)
                {
                    cout << arr[i][j] << "\t";
                }
                cout << endl;
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(33_34_35_36 Функции. Синтаксис. Объявление. Реализация. Передача параметров по значению. Передача массива в функцию. Прототипы функций. )
        case(57):
        {
            cout << "\n\nSimple_Code_lesson_(33_34_35_36 Функции. Синтаксис. Объявление. Реализация. Передача параметров по значению. Передача массива в функцию. Прототипы функций.)\n" << endl;

            srand(12);

            privet57();

            sum33(44, 56);

            const int size = 20;

            int massive35[size]{};

            FillArray36(massive35, size);

            PrintArray36(massive35, size);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(37 Область видимости. Глобальные переменные и локальные переменные.)
        case(58):
        {
            cout << "\n\nSimple_Code_lesson_(37 Область видимости. Глобальные переменные и локальные переменные.)\n" << endl;

            cout << " Выводим глобальную переменную AA - " << AA << endl;

            AA = foo37(AA);// Показуем что внутри функции может быть локальная переменная а

            cout << " Выводим второй раз глобальную переменную AA - " << AA << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(38 Параметры по умолчанию. Передача аргументов в функцию по умолчанию. )
        case(59):
        {
            cout << "\n\nSimple_Code_lesson_(38  Параметры по умолчанию. Передача аргументов в функцию по умолчанию.)\n" << endl;

            foo59(5, 20, 44.4);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(39 inline c что это. Ключевое слово inline.)
        case(60):
        {
            cout << "\n\nSimple_Code_lesson_(39 inline c что это. Ключевое слово inline.)\n" << endl;

            cout << " Выводим результат функцию  с  inline - ном - " << foo60(25, 56) << endl;

            cout << endl << endl;
            /*
            Прямая ссылка делается на функцию static , которая никогда не определена.

            Функция static должна быть определена в области действия файла. 
            
            Если функция определена в другом файле, она должна быть объявлена extern.
            */

            break;
        }
        // Simple_Code_lesson_(40 Перегрузка функций c пример.)
        case(61):
        {
            cout << "\n\nSimple_Code_lesson_(40 Перегрузка функций c пример.)\n" << endl;

            cout << " Выводим результать сложения функции sum -" << sum61(12.00, 45.45) << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(41 Шаблоны функций. Шаблонные функции c . template typename. template class.)
        case(62):
        {
            cout << "\n\nSimple_Code_lesson_(41 Шаблоны функций. Шаблонные функции c . template typename. template class.)\n" << endl;

            print62(5.45, "Выводим сообщение");

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(42_43_44 Вывод рекурсивной функции!)
        case(63):
        {
            cout << "\n\nSimple_Code_lesson_(42_43_44 Вывод рекурсивной функции!)\n" << endl;

            Foo63(5);

            cout << "Выводим факториал числа - 5: " << Fact63(5) << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(45_46_47 Указатели. Что такое динамическая память. Утечка памяти. Стек и куча. Статическая память.)
        case(64):
        {
            cout << "\n\nSimple_Code_lesson_(45_46_47 Указатели. Что такое динамическая память. Утечка памяти. Стек и куча. Статическая память.)\n" << endl;

            int a64 = 5;

            cout << "a\t " << a64 << endl;

            int* px = &a64;

            int* px2 = &a64;

            cout << "px \t " << px << endl;

            cout << "px2 \t " << *px2 << endl;

            cout << "a \t " << &a64 << endl;

            cout << "============================================" << endl;

            cout << " Аримфетика указателей " << endl;

            const int size64 = 5;

            int arr64[size64]{ 4,55,79,1,4 };

            for (int i = 0; i < size64; i++)
            {
                cout << arr64[i] << " ";
            }

            cout << endl;

            int* parr64 = arr64;

            cout << "============================================" << endl;

            cout << "arr \t" << arr64 << endl;

            cout << "parr \t" << parr64 << endl;

            cout << "============================================" << endl;

            cout << " Выводим адреса и их значения: " << endl;

            for (int i = 0; i < size64; i++)
            {
                cout << (parr64 + i) << " " << parr64[i] << " " << endl;
            }

            cout << endl;

            cout << "============================================" << endl;

            cout << " Передача параметров в функцию по указателю " << endl;

            int aa64 = 0;

            cout << aa64 << endl;

            Foo64(&aa64);

            cout << aa64 << endl;

            cout << "============================================" << endl;

            cout << " Передача 2-х параметров в функцию по указателю и смена параметров местами " << endl;

            int a64_2 = 33;

            int b64_2 = 44;

            cout << " a1 -" << a64_2 << endl;

            cout << " b1 -" << b64_2 << endl;

            invert64(&a64_2, &b64_2);

            cout << " Вывод переменной после обмена a1 -" << a64_2 << endl;

            cout << " Вывод переменной после обмена b1 -" << b64_2 << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(53_54_55_56 new, new delete, null pointer, Динамический массив. Двумерный динамический)
        case(65):
        {
            cout << "\n\nSimple_Code_lesson_(53_54_55_56 new, new delete, null pointer, Динамический массив. Двумерный динамический)\n" << endl;

            srand(time(NULL));
            
            int* pa = new int;
            *pa = 10;

            delete pa;
            pa = nullptr;
            if (pa != nullptr)
            {
                cout << *pa << endl;
            }
            int size = 0;
            cout << " Enter array size:";
            cin >> size;
            int* arr = new int[size];
            for (int i = 0; i < size; i++)
            {
                arr[i] = rand() % 100;
            }
            for (int i = 0; i < size; i++)
            {
                cout << arr[i] << "\t" << arr + i << endl;
            }
            delete[] arr;
            
            //////////////////////////////////////////////////////////////////
            cout << " Многомерный динамический массив! " << endl;
            int rows = 5;
            int cols = 6;
            cout << " Введите воличество строк: ";
            cin >> rows;
            cout << endl;
            cout << " Введите количество колонок: ";
            cin >> cols;
            cout << endl;
            int** arr1 = new int* [rows];
            for (int i = 0; i < rows; i++)
            {
                arr1[i] = new int[cols];
            }
            
            ///////////////////////////////////////////////////
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    arr1[i][j] = rand() % 100;
                }
            }
            
            ///////////////////////////////////////////////////
            for (int i = 0; i < rows; i++)
            {
                for (int j = 0; j < cols; j++)
                {
                    cout << arr1[i][j] << "\t";
                }
                cout << endl;
            }
            //////////////////////////////////////////////////
            for (int i = 0; i < rows; i++)
            {
                delete[] arr1[i];
            }
            delete[] arr1;
            
            //////////////////////////////////////////////////
            cout << " Копирование многомерного массива " << endl;
            int size2 = 5;
            int* firstArray = new int[size2];
            int* secondArray = new int[size2];

            FillArray(firstArray, size2);
            FillArray(secondArray, size2);

            cout << "=========================================" << endl;
            cout << " Выводим оба массива" << endl;
            cout << " firstArray = \t";
            Showarray(firstArray, size2);
            cout << " secondArray = \t";
            Showarray(secondArray, size2);
            cout << " Копируем массив firstArray в массив secondArray " << endl;
            delete[]secondArray;
            secondArray = new int[size2];
            for (int i = 0; i < size; ++i)
            {
                secondArray[i] = firstArray[i];
            }
            cout << "=========================================" << endl;
            cout << " Выводим оба массива" << endl;

            cout << " firstArray = \t";
            Showarray(firstArray, size2);
            cout << " secondArray = \t";
            Showarray(secondArray, size2);

            delete[]firstArray;
            delete[]secondArray;

            cout << "=========================================" << endl;
            cout << " Изменение размера массива" << endl;
            int size5 = 5;
            int* arr5 = new int[size5];

            FillArray(arr5, size5);
            Showarray(arr5, size5);
            cout << "=========================================" << endl;
            cout << " Изменяем размер и выводим " << endl;
            push_back(arr5, size5, 111);
            Showarray(arr5, size5);

            cout << "=========================================" << endl;
            cout << " Изменяем значение в массиве " << endl;
            zamena(arr5, size5, 5, 112);
            Showarray(arr5, size5);
            cout << endl << endl;
            
            break;
        }
        // Simple_Code_lesson_(50_51_52 Ссылки. Указатель на ссылку. Передача параметров в функцию по ссылке. Возврат значений через ссылки.)
        case(66):
        {
            cout << "\n\nSimple_Code_lesson_(48)\n" << endl;

            cout << " Работа со ссылками!\n";
            int a = 5;
            cout << " Выводим переменную a --- " << a << "  -- и её адрес в памяти -- " << &a << endl;
            int* pa = &a;
            cout << " Выводим переменную а по указателю - " << *pa << "  -- и его адрес в памяти -- " << pa << endl;
            int& aref = a;
            cout << " Выводим переменную а по cсылке - " << aref << "  -- и её адрес в памяти -- " << &aref << endl;
            int* paa = &aref;
            cout << " Выводим переменную а по указателю через ссылку - " << *paa << "  --  адрес в памяти указателя -- " << &paa << "  -- адрес в памяти ссылки -- " << paa << endl;

            cout << "----------------------------------------------------------------" << endl;
            int values = 5;

            cout << " Передача параметров в функцию. Foo - ";
            foo1(values);
            cout << values << endl;

            cout << " Передача параметров в функцию по ссылке. Foo - ";
            foo2(values);
            cout << values << endl;

            cout << " Передача параметров в функцию по указателю. Foo - ";
            foo3(&values);
            cout << values << endl;
            cout << "----------------------------------------------------------------" << endl;
            cout << " Передача параметров в функцию через ссылку по многим параметрам " << endl;
            int d, b, c;
            d = 120;
            b = 150;
            c = 200;
            cout << " Переменная d - " << d << endl;
            cout << " Переменная b - " << b << endl;
            cout << " Переменная c - " << c << endl;
            foo4(d, b, c);
            cout << " Переменная d - " << d << endl;
            cout << " Переменная b - " << b << endl;
            cout << " Переменная c - " << c << endl;
            cout << "----------------------------------------------------------------" << endl;
            int a12 = 1;
            int a13 = 2;
            cout << " Пременная а12 -" << a12 << endl;
            cout << " Пременная а13 -" << a13 << endl;
            foo5(a12, a13);
            cout << " Пременная а12 -" << a12 << endl;
            cout << " Пременная а13 -" << a13 << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(60_61_62_63_64 Строки в С, С++)
        case(67):
        {
            cout << "\n\nSimple_Code_lesson_(60_61_62_63_64 Строки в С, С++)\n" << endl;

            cout << "Изучаем строки\n";
            int a = 4;
            double b = 10.44;
            char simvol = 'H';
            char string1[] = "Hello World!";
            char string2[] = { 'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!','\0' }; //   \0 - нуль терминант;
            cout << " Выводим один символ - " << simvol << endl;
            cout << " Выводим строковый массив - " << string1 << endl;
            cout << " Выводим строковый массив №2 - " << string2 << endl;
            cout << " Используем функцию strlen и узнаём количество символов в строке - " << strlen(string2) << endl;

            cout << " =====================================================================================" << endl;
            cout << " Приведение типов данных! " << endl;
            cout << " Пример приведения типов данных делением переменной с типом double на переменную с типом int и получением двух результатов:  " << endl; // приведение типов данных
            cout << "  с типом дабл - " << double(b / a) << endl; // приведение типов данных
            cout << "  с типом int  - " << int(b / a) << endl; // приведение типов данных

            cout << " =====================================================================================" << endl;
           /* cout << " Выводим таблицу ASCII символы: " << endl;
            for (int i = 0; i <= 255; ++i)
            {
                cout << "code = " << i << "\t" << "char = " << (char)i << endl;
            }*/
            cout << " Выводим звуковой сигнал из таблицы " << "char = " << (char)007 << endl;// звуковой сигнал 007 от таблицы ASCII

            cout << " =====================================================================================" << endl;
            cout << " Указатели символьные строки и функции " << endl;
            const char* ps2 = "Helloy";
            const  char* arry2[] = { "Helloy", " ", "World", " Test" };
            cout << ps2 << endl;
            for (int i = 0; i < 4; i++)
            {
                cout << arry2[i];
            }
            cout << endl;

            col_simvolov_stroki(ps2);
            strlen2(ps2);

            cout << " =====================================================================================" << endl;
            cout << " Конкатенация строк в стиле С " << endl;
            char str1[256] = "Привет";
            char str2[256] = " это конкатенация в стиле С";
            cout << str1 << endl;
            strcat_s(str1, str2);
            cout << str1 << endl;
            cout << " =====================================================================================" << endl;
            cout << " Конкатенация строк в стиле С++" << endl;
            string str3 = "Конкатенация";
            string str4 = "строк в стиле С++";
            string result;
            result = str3 + "\t" + "\n" + str4;
            cout << result << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(65 Указатель на функцию в качестве параметра)
        case(68):
        {
            cout << "\n\nSimple_Code_lesson_(65 Указатель на функцию в качестве параметра)\n" << endl;

            showinfo(GetDatafromBD);
            showinfo(GetDatafromWebserver);
            showinfo(GetDataAstral);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(69 Тернарный оператор)
        case(69):
        {
            cout << "\n\nSimple_Code_lesson_(69 Тернарный оператор)\n" << endl;

            int a = 0;
            cout << " Введите число: ";
            cin >> a;
            (a >= 0 && a <= 10) ? cout << " Число 0 <= a <= 10 " << endl : (a >= 11 && a <= 20) ? cout << " Число 11 <= a <= 20" << endl : cout << " Число 20 > a";

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(66 Деррективы процессора #define)
        case(70):
        {
            cout << "\n\nSimple_Code_lesson_(66 Деррективы процессора #define)\n" << endl;

            cout << "text" << tab << PI << tab << "text" << endl;
            for (int i = 1; i <= 50; i++)
                begine1
                cout << i << tab;
            if (i == 10 || i == 20 || i == 30 || i == 40)
                cout << endl;
            end1
                cout << endl;
            FOO(200, 400);
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(68 Работаем с #ifdef #else #endif #if #elif #endif #ifndef)
        case(71):
        {
            cout << "\n\nSimple_Code_lesson_(68 Работаем с #ifdef #else #endif #if #elif #endif #ifndef)\n" << endl;

            
            #ifdef Debug
            cout << " Исчезающая строка\n";
            #else
            cout << " Исчезающая строка\n";
            #endif
            #ifndef Debug
            cout << " #ifndef\n";
            #else
            cout << " #ifndef_2\n";
            #endif

            #ifdef Debuger=5
            cout << " Debuger=5\n";
            #elif
            cout << " Debuger is not 5\n";
            #endif

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(70_71_argc_argv_int_main_void_main)
        case(72):
        {
            cout << "\n\nSimple_Code_lesson_(70_71_argc_argv_int_main_void_main)\n" << endl;

            for (int i = 0; i < argc; i++)
            {
                cout << argv[i] << endl;             
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(72_73_74_75_76_OOP_get_set_metodu_classa)
        case(73):
        {
            cout << "\n\nSimple_Code_lesson_(72_73_74_75_76_OOP_get_set_metodu_classa)\n" << endl;

            cout << " Изучаем классы!\n";

            Human73 Firstman73;

            Firstman73.age73 = 34;

            Firstman73.weight73 = 90;

            Firstman73.name73 = "Иванов Иван Иванович";

            cout << " Имя: " << Firstman73.name73 << "\n Возраст: " << Firstman73.age73 << "\n Вес:     " << Firstman73.weight73 << endl << endl;

            Firstman73.Print73();
            //-----------------------------------------------------------------------------------------------------------------------------------
            
            point73 a;

            a.x = 10;

            a.y = 20;

            a.z = 20;

            cout << " Точка а имеет координаты: (" << a.x << ", " << a.y << ", " << a.z << ");" << endl;

            a.print_ab();

            cout << "\n\n =================================================================================" << endl;

            cout << " \t\t\tИзучение get, set" << endl;

            a.SetA(112);

            a.SetB(111);

            a.print_ab();
            
            cout << "\n\n =================================================================================" << endl;

            cout << " \t\t\t Инкапсуляция ООП" << endl;

            Coffegrinder73 Coffe;

            Coffe.Start73();

            cout << "\n\n =================================================================================" << endl;

            cout << " \t\t\t Конструктор класса" << endl;

            point73 c1(22, 33, 44);

            c1.print3d73();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(80 Деструктор класса)
        case(74):
        {
            
            cout << "\n\nSimple_Code_lesson_(80 Деструктор класса)\n" << endl;

            foo74(11);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(81 Ключевое слово this->)
        case(75):
        {
            cout << "\n\nSimple_Code_lesson_(81 Ключевое слово this->)\n" << endl;

            Point75 A75;

            A75.print75(21, 22);
            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(82 Конструктор копирования)
        case(76):
        {
           cout << "\n\nSimple_Code_lesson_(82 Конструктор копирования)\n" << endl;

            Myclass76 a(10);

            Myclass76 b(a);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(83 Перегрузка оператора присвоения)
        case(77):
        {
            cout << "\n\nSimple_Code_lesson_(83 Перегрузка оператора присвоения)\n" << endl;

            Myclass77 A77(10);
            Myclass77 B77(2);
            Myclass77 C77(5);
            C77 = A77 = B77;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(84 Перегрузка операторов _==_=!)
        case(78):
        {
          
            cout << "\n\nSimple_Code_lesson_(84 Перегрузка операторов _==_=!)\n" << endl;

            Point78 A78(5, 1);

            Point78 B78(9, 4);

            bool result1 = A78 == B78;

            result1 ? cout << "\tТочки равны! " << endl : cout << "\tТочки не равны! " << endl;

            bool result2 = A78 != B78;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(85 Перегрузка оператора +)
        case(79):
        {         
            cout << "\n\nSimple_Code_lesson_(85 Перегрузка оператора +)\n" << endl;

            point79 a(5, 1);

            point79 b(77, 12);

            bool result1 = a == b;

            result1 ? cout << "\tТочки равны! " << endl : cout << "\tТочки не равны! " << endl;

            point79 c = a + b;

            cout << " Точка C " << "с координатами - " << c.x << ", " << c.y << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(86-87 Перегрузка оператора индексирования. Инкримент. Дикримент.)
        case(80):
        {             
            cout << "\n\nSimple_Code_lesson_(86-87 Перегрузка оператора индексирования. Инкримент. Дикримент.)\n" << endl;

            point80 a(5, 1);

            point80 b(77, 12);

            cout << " Точка а (" << a.x << ", " << a.y << ");" << endl;

            cout << " Точка b (" << b.x << ", " << b.y << ");" << endl;

            a++;

            ++b;

            cout << " Точка а (" << a.x << ", " << a.y << ");" << endl;

            cout << " Точка b (" << b.x << ", " << b.y << ");" << endl;

            Testclass80 a1;

            cout << a1[0] << endl;

            a1[0] = 100;

            cout << a1[0] << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(88-89 Дружественные методы вне класса)
        case(81):
        {
           cout << "\n\nSimple_Code_lesson_(88-89 Дружественные методы вне класса)\n" << endl;

           Testclass81 a88;

           point81 a(5, 1);

           point81 b(77, 12);

           cout << a.x << ", " << a88.data81 << endl;

           ChangeX(a, a88);

           cout << a.x << ", " << a88.data81 << endl;

           MyClass81 a89;

           a89.Printmessage();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(90 Дружественные методы класса)
        case(82):
        {
            cout << "\n\nSimple_Code_lesson_(90 Дружественные методы класса)\n" << endl;

            Apple82 apple(150, "red");

            Human82 human;

            human.TakeApple(apple);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(91 Дружественные классы. ООП. friend class.)
        case(83):
        {
            cout << "\n\nSimple_Code_lesson_(91 Дружественные классы. ООП. friend class.)\n" << endl;

            Apple83 apple(150, "red");

            Human83 human;

            human.TakeApple(apple);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(92-93 Статические поля класса. Ключевое слово static. id generator. Генератор уникальных идентификаторов.)
        case(84):
        {
            cout << "\n\nSimple_Code_lesson_(92-93 Статические поля класса. Ключевое слово static. id generator. Генератор уникальных идентификаторов.)\n" << endl;

            Apple84 apple(150, "red");

            Apple84 apple2(250, "Green");

            Apple84 apple3(350, "Yellow");

            cout << apple.GetID() << endl;

            cout << apple2.GetID() << endl;

            cout << apple3.GetID() << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(94 Статические методы класса зачем нужны. Модификатор static.)
        case(85):
        {
            cout << "\n\nSimple_Code_lesson_(94 Статические методы класса зачем нужны. Модификатор static.)\n" << endl;

            Apple85 apple(150, "red");

            Apple85 apple2(250, "Green");

            Apple85 apple3(350, "Yellow");

            cout << " Номер яблока № " << apple.GetID() << " цвет яблока -" << apple.Getcolor() << endl;

            apple.changeColor(apple, "yellow");

            cout << " Номер яблока № " << apple.GetID() << " цвет яблока -" << apple.Getcolor() << endl;

            cout << Apple85::GetCount() << endl;


            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(95 Вложенные классы. Внутренние классы. inner class. ООП.)
        case(86):
        {
            cout << "\n\nSimple_Code_lesson_(95 Вложенные классы. Внутренние классы. inner class. ООП.)\n" << endl;

            Image86 img;

            img.GetImageInfo();

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(96 Массив объектов класса. Динамический. Статический. Создание Особенности.)
        case(87):
        {
            cout << "\n\nSimple_Code_lesson_(96 Массив объектов класса. Динамический. Статический. Создание Особенности.)\n" << endl;

            const int LENGHT = 5;

            Pixel87 arr[LENGHT]
            {
            Pixel87(11, 159, 222),
            Pixel87(12, 160, 223),
            Pixel87(13, 152, 224),
            Pixel87(14, 153, 225),
            Pixel87(15, 154, 226),
            };

            arr[0] = Pixel87(11, 159, 222);

            cout << arr[0].GetInfo() << " Массив обекта класса со статически выделяемой памятью" << endl;

            Pixel87* arr1 = new Pixel87[LENGHT];

            arr1[0] = Pixel87(11, 159, 222);

            cout << arr1[0].GetInfo() << " Массив обекта класса с динамически выделяемой памятью" << endl;

            delete[] arr1;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(97 Что такое агрегация и композиция. Отношения между классами и объектами.)
        case(88):
        {
            cout << "\n\nSimple_Code_lesson_(97 Что такое агрегация и композиция. Отношения между классами и объектами.)\n" << endl;

            cout << " Агрегация и композиция\n";

            Human88 human;

            human.Think(2);

            human.IspectTheCap();

            Model88 m;

            m.InspectMode();

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(98 Наследование в ООП пример. Что такое наследование.)
        case(89):
        {
            cout << "\n\nSimple_Code_lesson_(98 Наследование в ООП пример. Что такое наследование.)\n" << endl;

            cout << " Наследование в ООП\n";

            Student89 st;

            st.learn();

            cout << "Имя студента - " << st.GetName() << endl;

            st.SetName("Аристарх");

            cout << st.GetName() << endl;

            ExtremuralStudent89 extrst;

            extrst.learn();

            extrst.SetName("Евлампий");

            cout << " Имя студента - " << extrst.GetName() << endl;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(Модификаторы доступа при наследовании. private public protected)
        case(90):
        {
            cout << "\n\nSimple_Code_lesson_(Модификаторы доступа при наследовании. private public protected)\n" << endl;

            cout << " Модификаторы доступа при наследовании\n";

            B89 b;

            b.PrintMsg();

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(100-101 Порядок вызова конструкторов/деструктора при наследовании.)
        case(91):
        {
            cout << "\n\nSimple_Code_lesson_(100-101 Порядок вызова конструкторов/деструктора при наследовании.)\n" << endl;

            cout << "Порядок вызова конструктора и деструктора\n";

            C91 c;

            cout << endl << endl;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(102 Вызов конструктора базового класса из конструктора класса-наследника.)
        case(92):
        {
            cout << "\n\nSimple_Code_lesson_(102 Вызов конструктора базового класса из конструктора класса-наследника.)\n" << endl;

            /*cout << " Вызов конструктора базового класса\n";*/

            A92 a;

            a.PrintMsg();

            B92 b;

            b.PrintMsg();

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(103 Виртуальные методы класса c . Ключевое слово virtual. Ключевое слово override.)
        case(93):
        {
            cout << "\n\nSimple_Code_lesson_(103 Виртуальные методы класса c . Ключевое слово virtual. Ключевое слово override.)\n" << endl;

            cout << "Виртуальные методы класса!\n";

            Gun93 gun;

            SubmachineGun93 machineGun;

            Bazooka93 bazooka;

            Gun93* weapon = &gun;

            Gun93* weapon1 = &machineGun;

            Gun93* weapon2 = &bazooka;

			cout << "\n\n  Полиморфизм в С++!\n";

            weapon->Shoot(); 

            weapon1->Shoot();

            Player93 player;

            player.shoot(weapon);

            player.shoot(&gun);

            player.shoot(&machineGun);

            player.shoot(weapon2);

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(104 Абстрактный класс с пример. Чисто виртуальная функция. virtual. override.)
        case(94):
        {
            cout << "\n\nSimple_Code_lesson_(104 Абстрактный класс с пример. Чисто виртуальная функция. virtual. override.)\n" << endl;

            cout << "Абстрактный класс!\n";

            Knife94 knife;

            Bazooka94 bazooka;

            Player94 player;

            player.shoot(&knife);


            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(105 Виртуальный деструктор класса C . Что это такое. Наследование. Полиморфизм.)
        case(95):
        {
            cout << "\n\nSimple_Code_lesson_(105 Виртуальный деструктор класса C . Что это такое. Наследование. Полиморфизм.)\n" << endl;

            cout << "\tВиртуальный диструктор.\n";

            B95 b;

            A95* bptr = new B95;

            delete bptr;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(106 Чисто виртуальный деструктор c . Наследование. Полиморфизм. virtual. override.)
        case(96):
        {
            cout << "\n\nSimple_Code_lesson_(106 Чисто виртуальный деструктор c . Наследование. Полиморфизм. virtual. override.)\n" << endl;

            cout << "\tВиртуальный диструктор.\n";

            B96 b;

            A96* bptr = new B96;

            delete bptr;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(107 Делегирующие конструкторы c . Вызов конструктора из конструктора. ООП.)
        case(97):
        {
            cout << "\n\nSimple_Code_lesson_(107 Делегирующие конструкторы c . Вызов конструктора из конструктора. ООП.)\n" << endl;

            /*cout << "Делегирующие конструкторы\n";*/

            Human97 h("Аристарх", 20, 80);

            cout << " Имя: " << h.Name << "\n возраст: " << h.Age << "\n вес: " << h.Weight << endl;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(108 c вызов виртуального метода базового класса. ООП. Изучение с с нуля.)
        case(98):
        {
            cout << "\n\nSimple_Code_lesson_(108 c вызов виртуального метода базового класса. ООП. Изучение с с нуля.)\n" << endl;

            cout << "\tВызов виртуального метода  базового класса\n";

            BreketsMsg98 m("Привет");

            Printer98 p;

            p.Print(&m);

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(109 Множественное наследование c пример. ООП.)
        case(99):
        {
            cout << "\n\nSimple_Code_lesson_(109 Множественное наследование c пример. ООП.)\n" << endl;

            cout << "\t Множественное наследование\n";
            Car99 c;

            Airplain99 A;

            FlyingCar99 fc;

            fc.str;

            A.Fly();

            c.Drive();

            Car99* ptrC = &fc;

            Airplain99* ptrA = &fc;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(110 Порядок вызова конструкторов при множественном наследовании. ООП.)
        case(100):
        {
            cout << "\n\nSimple_Code_lesson_(110 Порядок вызова конструкторов при множественном наследовании. ООП.)\n" << endl;

            cout << "\t Порядок вызова конструктора при множественном наследовании\n";

            FlyingCar100 fc;

            cout << endl << endl;

            break;
        }
        //Simple_Code_lesson_(111 Порядок вызова деструкторов при множественном наследовании. ООП.)
        case(101):
        {
            cout << "\n\nSimple_Code_lesson_(111 Порядок вызова деструкторов при множественном наследовании. ООП.)\n" << endl;

            cout << "\t Порядок вызова конструктора при множественном наследовании\n";

            FlyingCar101 fc;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(112 С множественное наследование одинаковые методы. ООП.)
        case(102):
        {
            cout << "\n\nSimple_Code_lesson_(112 С множественное наследование одинаковые методы. ООП.)\n" << endl;

            cout << "\t Приведение типов при множественном наследовании\n";

            FlyingCar102 fc;

            ((Car102)fc).Use();

            ((Airplain102)fc).Use();

            ((FlyingCar102)fc).Use();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(113 Что такое интерфейс в ООП. Интерфейс c пример. Изучение С++ для начинающих.)
        case(103):
        {
            cout << "\n\nSimple_Code_lesson_(113 Что такое интерфейс в ООП. Интерфейс c пример. Изучение С для начинающих.)\n" << endl;

            cout << "\tИнтерфейсы ООП!\n";

            SimpleBicycle103 sb;

            SportBicycle103 sportB;

            Human103 h;

            h.RideOn(sb);

            h.RideOn(sportB);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(114 Виртуальное наследование c . Ромбовидное наследование c.)
        case(104):
        {
            cout << "\n\nSimple_Code_lesson_(114 Виртуальное наследование c++ . Ромбовидное наследование c++.)\n" << endl;

            // cout << "Виртуальное наследование. Ромбовидное наследование\n";
            // 
            //GraphicCard gc("AMD", "Sumsung"); 

            cout << " Ромбовидное наследование\n";

            OcrWarrior104 orc;// при наследовании в модификаторах паблик добавляем слово виртуал для того чтобы избежать задваивания данных


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(115 Работа с файлами с . Запись в файл. c ofstream.)
        case(105):
        {
            cout << "\n\nSimple_Code_lesson_(115 Работа с файлами с . Запись в файл. c ofstream.)\n" << endl;

            cout << "115 Работа с файлами с . Запись в файл. c ofstream. Изучение С для начинающих.\n";
            string path = "Files/myFile115.txt";
            ofstream fout;
            fout.open(path, fstream::app);

            if (!fout.is_open())
            {
                cout << "Ошибка открытия файла" << endl;
            }
            else
            {
                for (int i = 0; i < 5; i++)
                {
                    cout << "Введите число: " << i << "\t";
                    int a;
                    cin >> a;
                    fout << a;
                    fout << "\t";
                    cout << endl;
                }
            }
            fout.close();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(116 Работа с файлами с . Чтение из файла с ifstream.)
        case(106):
        {
            cout << "\n\nSimple_Code_lesson_(116 Работа с файлами с . Чтение из файла с ifstream.)\n" << endl;

            cout << "Работа с файлами чтение из файла\n";
            string path = "Files/myFile116.txt";
            ifstream fin;
            fin.open(path);
            if (!fin.is_open())
            {
                cout << " Ошибка открытия файла" << endl;
            }
            else
            {
                cout << "Файл открыт!" << endl;
                string str;
                /*   char ch;
                   while (fin.get(ch))// посимвольный счёт
                   {
                       cout << ch;
                   }*/
                while (!fin.eof())
                {
                    str = "";
                    getline(fin, str);// считывание построчно  при помощи функции getline с пространства имен std
                    cout << str << endl;
                }
            }
            cout << endl;
            fin.close();


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(117 Запись ОБЪЕКТА КЛАССА в файл с .)
        case(107):
        {
            cout << "\n\nSimple_Code_lesson_(117 Запись ОБЪЕКТА КЛАССА в файл с .)\n" << endl;

            cout << "Запись обекта класса в файл\n";

            string path = "Files/myFile117.txt";

            Point107 point(110, 111, 112);

            point.Print();

            /*ofstream fout;
            fout.open(path, ofstream::app);// ofstream::app = add
            if (!fout.is_open())
            {
                cout << " Ошибка открытия файла" << endl;
            }
            else
            {
                cout << " Файл открыт" << endl;
                fout.write((char*)&point, sizeof(Point));
            }
            fout.close();*/

            ifstream fin;

            fin.open(path);

            if (!fin.is_open())
            {
                cout << " Ошибка открытия файла" << endl;
            }
            else
            {
                cout << " Файл открыт" << endl;
                Point107 pnt;
                while (fin.read((char*)&pnt, sizeof(Point107)))
                {

                }
                fin.read((char*)&point, sizeof(Point107));
            }

            fin.close();


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(118 Чтение и запись в файл с используя класс fstream c.)
        case(108):
        {
            cout << "\n\nSimple_Code_lesson_(118 Чтение и запись в файл с используя класс fstream c.)\n" << endl;

            cout << " Чтение и запись в файл с и спользование класса fstream\n";

            string path = "Files/myFile118.txt";

            fstream fs;

            fs.open(path, fstream::in | fstream::out | fstream::app);//параметры для счёта и записи, и дозаписи

            if (!fs.is_open())
            {
                cout << "Ошибка открытия файла" << endl;
            }
            else
            {
                string msg;

                int value;

                cout << "Файл открыт" << endl;

                cout << "Введите 1 для записи сообщений в файл:" << endl;

                cout << "Введите 2 для считывания всех сообщений:" << endl;

                cin >> value;

                if (value == 1)
                {
                    cin >> msg;

                    fs << msg << "\n";
                }
                else
                    if (value == 2)
                    {
                        while (!fs.eof())
                        {
                            msg = "";

                            fs >> msg;

                            cout << msg << endl;
                        }
                    }
                    else
                    {
                        cout << "Введите коректные данные!" << endl;
                    }
            }
            fs.close();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(119 Потоковый ввод вывод в файл c перегрузка операторов.)
        case(109):
        {
            cout << "\n\nSimple_Code_lesson_(119 Потоковый ввод вывод в файл c . Перегрузка операторов.)\n" << endl;

            cout << "Потоковый ввод вывод, перегрузка оператора\n";

            Point109 point(121, 245, 241);

            //cout << point;//вывод обекта по перегрузке

            string path = "Files/myFile119.txt";

            fstream fs;

            fs.open(path, fstream::in | fstream::out | fstream::app);//параметры для счёта и записи, и дозаписи

            if (!fs.is_open())
            {
                cout << "Ошибка открытия файла" << endl;
            }
            else
            {
                cout << "Файл открыт" << endl;

                //fs << point << "\n";

                while (!fs.eof())
                {
                    Point109 p;

                    fs >> p;

                    if (fs.eof())
                    {
                        break;   //усли конец файла мы выходим из цикла
                    }
                    cout << p << endl;
                }
            }

            fs.close();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(120 С try catch. Обработка исключений С . try catch что это.)
        case(110):
        {
            cout << "\n\nSimple_Code_lesson_(120 С try catch. Обработка исключений С . try catch что это.)\n" << endl;

            cout << " Блок трай кетч обработка исключений\n";

            string path = "Files/myFile120.txt";
            ifstream fin;
            fin.exceptions(ifstream::badbit | ifstream::failbit);//специфика ifstream для подключения thry_catch
            try
            {
                cout << "Попытка открыть файл" << endl;
                fin.open(path);
                cout << "Файл успешно открыт" << endl;//сообщение не появится если файл не откроется
            }
            catch (const ifstream::failure& ex)
            {
                cout << ex.what() << endl;
                cout << " Ошибка открытия файла!" << endl;
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(121 Генерация исключений с пример. throw c пример.)
        case(111):
        {
            cout << "\n\nSimple_Code_lesson_(121 Генерация исключений с пример. throw c пример.)\n" << endl;

            cout << " Генерация исключений. Throw\n";
            try
            {
                Foo111(-55);
            }
            catch (exception& ex)
            {
                cout << " Мы поймали " << ex.what() << endl;
            }


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(122 Несколько блоков catch. Обработка исключений С .)
        case(112):
        {
            cout << "\n\nSimple_Code_lesson_(122 Несколько блоков catch. Обработка исключений С .)\n" << endl;

            cout << " Генерация исключений. Throw\n";
            try
            {               
                Foo112 (-55);
            }
            catch (exception& ex)
            {
                cout << " Мы поймали " << ex.what() << endl;
            }
            catch (const char* ex)
            {
                cout << " Блок 2 поймали " << ex << endl;

            }
            catch (...)//всё что бросило exception может быть поймано блоком catch после предыдыщих блоков catch
            {
                cout << " Что-то пошло не так " << endl;
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(123 Свой класс exception c . Создание собственного класса исключений.)
        case(113):
        {
            cout << "\n\nSimple_Code_lesson_(123 Свой класс exception c . Создание собственного класса исключений.)\n" << endl;

            cout << " Свой клас exception\n";

            try
            {                
                Foo113(-1);
            }
            catch (MyException113& ex)
            {
                cout << " Блок 1 Мы поймали " << ex.what() << endl;
                cout << " Состояние данных" << ex.GetDataState() << endl;
            }
            catch (exception& ex)
            {
                cout << " Блок 1 Мы поймали " << ex.what() << endl;
                //cout << " Состояние данных" << ex.GetDataState() << endl;
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(124 Перечисляемый тип enum С .)
        case(114):
        {
            cout << "\n\nSimple_Code_lesson_(124 Перечисляемый тип enum С .)\n" << endl;

            cout << "Перечисления Enum\n";

            Speed114 sp = Speed114::MIN;

            cout << sp << endl;

            cout << "-----------------------------" << endl;

            PC114 pc;

            pc.SetState(PC114::PCState::ON);

            switch (pc.GetState())

            {
            case PC114::PCState::OFF:

                cout << "Выключен!" << endl;

                break;

            case PC114::PCState::ON:

                cout << "Работает!" << endl;

                break;

            case PC114::PCState::SLEEP:

                cout << "Спит!" << endl;

                break;

            }


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(125 Пространства имен с . namespace c что это.)
        case(115):
        {
            cout << "\n\nSimple_Code_lesson_(125 Пространства имен с . namespace c что это.)\n" << endl;

            cout << " Использование пространства имён!\n";

            firstNS115::Foo115();

            secondNS115::Foo115();

           thirdNS115::secondNS115_2::Foo115();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(126 Шаблоны классов с примеры. Обобщенные классы.)
        case(116):
        {
            cout << "\n\nSimple_Code_lesson_(126 Шаблоны классов с примеры. Обобщенные классы.)\n" << endl;

            cout << " Шаблоны класов\n";

            double a = 5.1;

            int e = 3;

            Point116 a1, a2;

            MyClass116 <double, int> c116(a, e);

            MyClass116 <Point116, Point116> b116(a1, a2);

            c116.DataTypeSize();

            b116.DataTypeSize();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(127 Наследование шаблонных классов.)
        case(117):
        {
            cout << "\n\nSimple_Code_lesson_(127 Наследование шаблонных классов.)\n" << endl;

            cout << " Наследование шаблонов классов \n";

            Point117 a(22.22, 33.33, 44.44);

            TypeInfo <Point117> d(a);

            d.ShowTypeName();

            d.DataTypeSize();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(128 Специализация шаблона класса.)
        case(118):
        {
            cout << "\n\nSimple_Code_lesson_(128 Специализация шаблона класса.)\n" << endl;

            cout << " Специализация шаблонов класса \n";

            Printer118<char> p;

            p.Print('#');

            Printer118 <string> p1;

            p1.Print("Hello World");

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(129 Структуры в C _ struct C . Разница между структурой и классом.)
        case(119):
        {
            cout << "\n\nSimple_Code_lesson_(129 Структуры в C _ struct C . Разница между структурой и классом.)\n" << endl;

            cout << " Struct\n";

            MyClass119 mc1;

            MyStruct119 ms1;

            mc1.Foo();

            ms1.Foo();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(130 Умные указатели. Smart pointers.)
        case(120):
        {
            cout << "\n\nSimple_Code_lesson_(130 Умные указатели. Smart pointers.)\n" << endl;

            cout << "Smart_Pointers\n";

            int* ptr1 = new int(5);

            cout << " Число - " << *ptr1 << ";  По адресу - " << ptr1 << endl;

            delete ptr1;

            SmartPointer<int> pointer = new int(5);

            *pointer = 123456;

            cout << *pointer << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(131 auto_ptr _ unique_ptr _ shared_ptr _ Умные указатели.)
        case(121):
        {
            cout << "\n\nSimple_Code_lesson_(131 auto_ptr _ unique_ptr _ shared_ptr _ Умные указатели.)\n" << endl;

            cout << "Smart_Pointers_auto_ptr_unique_ptr_shared_ptr\n";
            /*
            SmartPointer121<int> sp1 = new int(5);// Должны вызывать ошибку при вызове деструктора в связи с удалением массива "Срабатывание точки останова."
            
            SmartPointer121<int> sp2 = sp1;
            */

            auto_ptr<int> ap1(new int(5));
            auto_ptr<int> ap2(ap1);
            
            //-------------------------------------------------------------------------------

            unique_ptr<int> p1(new int(5));

            unique_ptr<int> p2;

            p2 = move(p1);  // присвоение параметров функция std:move  для смены содержимого между p1<=>p2

            //p2.swap(p1);// аналогично std:move 
            
            //-------------------------------------------------------------------------------
            int *p = p1.get();//обычный указатель, функция доступна для unique_ptr auto_ptr
            int* p21 = new int(5);
            int *p211 = move(p21);
            unique_ptr<int> p3(p21);


            //p1.reset();// delete inform
            //p1.release();// danue v pamyti no ycazatel pro nih zabuvaet
            //--------------------------------------------------------------------------------

           shared_ptr<int> p4(new int(5));// общий указатель

           shared_ptr<int> p5(p4);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(132 Динамический массив и умные указатели.)
        case(122):
        {
            
            #include <iostream>
              #include <Windows.h>
              #include <string>
              #include <memory>
              using namespace std;
               
            
            cout << "\n\nSimple_Code_lesson_(132 Динамический массив и умные указатели.)\n" << endl;

            cout << "dinamicheskiy_massiv_i_ymnuy_ykazateli!\n";
            int SIZE;
            cout << "Введите SIZE>5:\t";
            cin >> SIZE;
            if (SIZE < 5) { SIZE = 5; cout << "Числа только больше 5" << endl; }
            shared_ptr<int[]>ptr(new int[SIZE] {1, 6, 44, 9, 8});
            
            for (int i = 0; i < SIZE; i++)
            {
                ptr[i] = rand() % 10;
                cout << ptr[i] << endl;
            }

            
            cout << endl << endl;
            
            break;
        }
        // Simple_Code_lesson_(133-134-135 Реализация односвязного списка c Часть 1, 2, 3)
        case(123):
        {
            cout << "\n\nSimple_Code_lesson_(133-134-135 Реализация односвязного списка c Часть 1, 2, 3)\n" << endl;

            List<int> lst;
            lst.push_front(5);
            lst.push_front(7);
            lst.push_front(101);

            for (int i = 0; i < lst.GetSize(); i++)
            {
                cout << lst[i] << endl;
            }

            cout << endl << "pop_back " << endl << endl;

            lst.pop_back();

            for (int i = 0; i < lst.GetSize(); i++)
            {
                cout << lst[i] << endl;
            }


            cout << endl << endl;
            
            break;
        }   
        // Simple_Code_lesson_(136 Ключевое слово auto)
        case(124):
        {

            cout << "\n\nSimple_Code_lesson_(136 Ключевое слово auto)\n" << endl;

            cout << " Ключевое слово auto \n";
            auto a = 10;
            auto b = 1.44;
            auto c = "string";
            auto d = true;
            std::vector<int> myVector124 = {11, 46, 9};
            std::vector<int>::iterator it_124 = myVector124.begin();
            auto it2 = myVector124.begin();
           
            cout << "\n sort out myVector124" << endl;
            for (auto iter = myVector124.begin(); iter != myVector124.end(); iter++)
            {
                std::cout << *iter << std::endl;
            }
             
            std::vector<int> v = { 1, 2, 3, 4, 5 };
            vector<int>::iterator iter = v.begin();  // получаем итератор
            
            cout << "\n sort out v" << endl;
            while (iter != v.end())    // пока не дойдем до конца
            {
                std::cout << *iter << std::endl;// получаем элементы через итератор
                ++iter;             // перемещаемся вперед на один элемент
            }
            
            std::vector<int> myVector;
            for (int count = 0; count < 5; ++count)
                myVector.push_back(count);

            std::vector<int>::const_iterator it; // объявляем итератор только для чтения
            it = myVector.begin(); // присваиваем ему начальный элемент вектора

            cout << "\nsort out myVector" << endl;
            while (it != myVector.end()) // пока итератор не достигнет последнего элемента
            {
                std::cout << *it << " "; // выводим значение элемента, на который указывает итератор
                ++it; // и переходим к следующему элементу
            }                      
         
            cout << endl << endl;
            
            break;
        }
        // Simple_Code_lesson_(137 Цикл foreach C _ range-based циклы)
        case(125):
        {
            
            cout << "\n\nSimple_Code_lesson_(137 Цикл foreach C _ range-based циклы)\n" << endl;

            cout << " For_ech_range_base_cuclu\n";
            int arr[] = {5,11,94,99,44};

            for (auto elemen : arr)
            {
                
                cout << elemen << "\t";
            }
            cout << endl;

            for (const auto elemen : arr)
            {
                cout << elemen << "\t";
            }
            
            list <int> myList = {1, 99, 4, 94, 799, 44, 6};

            for (const auto & element : myList)
            {
                
                cout << element << endl;
            }
            
            cout << endl << endl;
            
            break;
        }
        // Simple_Code_lesson_(138 typedef c что это )
        case(126):
        {
            cout << "\n\nSimple_Code_lesson_(138 typedef c что это )\n" << endl;

            std::vector<int> myVector;

            int_vector myVector2;
            float_vector myVector3;

            Person126 p126 = { "Алиса", 30 };
            std::cout << p126.name << " — " << p126.age << " лет" << std::endl;

            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(139-140 Многофайловый проект. Защита от повторного включения)
        case(127):
        {
            cout << "\n\nSimple_Code_lesson_(139140 Многофайловый проект. Защита от повторного включения)\n" << endl;

            //SetConsoleCP(1251);
            //SetConsoleOutputCP(1251);

            cout << " Многофайловый проект ч.1\n";

            int result = Sum127(2, 3);

            cout << " Выводим сумму двух чисел = " << result << endl;

            mynamespace::MyClass m;

            m.PrintMessage("Hello, World!");

            // system("Pause");
            // return 0;

            cout << endl << endl;

            break;
        }        
        // Simple_Code_lesson_(141 Union _ Использование в С++)
        case(128):
        {
            cout << "\n\nSimple_Code_lesson_(141 Union _ Использование в С)\n" << endl;

            MyUnion128 u;

            u.a = 5;

            u.b = 40000;

            u.c = 43.54;

            cout << "u.a = "<< u.a << "\n"<< endl << endl;

            break;
        }
        // Simple_Code_lesson_(142 std_function _ Полиморфная обёртка функции)
        case(129):
        {
            cout << "\n\nSimple_Code_lesson_(142 std_function _ Полиморфная обёртка функции)\n" << endl;

            cout << " std_function \n";
           
            vector<int> vc = { 1,51,4,10,44,98,8,12,22,29,49 };
            vector<function<void(int)>> fVector;
            fVector.emplace_back(Foo142);
            fVector.emplace_back(Bar);
            fVector.emplace_back(Baz);
            
            DoWork(vc, fVector);
            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(143 Лямбда-выражения _ Лямбда функции _ Анонимные функции)
        case(130):
        {
            /*
            Лямбда-выражения в C++ — это способ определить анонимную функцию прямо в месте её использования, особенно полезную для алгоритмов и обратных вызовов.
            Лямбда-выражение — это анонимная функция, то есть функция без имени, которую можно определить и использовать на месте. В C++ они появились с C++11 и развивались в C14, C17 и C++20.
            Структура лямбда-выражения
            [захват](параметры) -> возвращаемый_тип { тело }

            - [захват] — указывает, какие переменные из внешнего контекста доступны внутри лямбды.
            - (параметры) — список параметров, как у обычной функции.
            - -> возвращаемый_тип — необязательный, если тип можно вывести автоматически.
            - { тело } — код, который выполняется при вызове.

            📦 Захват переменных
            - [ ] — ничего не захватывается.
            - [=] — захват всех переменных по значению.
            - [&] — захват всех переменных по ссылке.
            - [x] — захват только x по значению.
            - [&x] — захват только x по ссылке.

            */
            cout << "\n\nSimple_Code_lesson_(143 Лямбда-выражения _ Лямбда функции _ Анонимные функции)\n" << endl;
            []() {
                cout << " lymbda_vurageniy \n";
            };
                        

            int p = 0;

            auto f = [&p]()
            {
               return  p = 5;
            };

            f();
           auto f1432 = [](int a)
            {
                return 1.2324;
            };

            auto q = f1432(12);
            
            vector<int> vc = { 1,51,4,10,44,98,8,12,22,29,49 };

            DoWork130(vc, [](int a) {cout << " Вызвана анонимная функция с параметрами - " << a << endl;});            

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(144 Захват контекста лямбдой _ Лямбда функции _ Лямбда-выражения _ Анонимные функции.)
        case(131):
        {
            cout << "\n\nSimple_Code_lesson_(144 Захват контекста лямбдой _ Лямбда функции _ Лямбда-выражения _ Анонимные функции.)\n" << endl;

            int a = 55;

            int b = 10;

            
            auto f = [&a, b]() {
                // захват в контексте переменных

                cout << " a - " << a << endl;

                //a = 1313;

                cout << " b - " << b << endl;

                //b = 11; 
            };
            
            f();
            /*
            [=] означает захват всех используемых переменных по значению — то есть в лямбду копируются значения a и b, которые были на момент её создания.

            Лямбда внутри имеет свои собственные копии a и b.
            [=] — захват по значению (копии переменных).

            mutable — разрешает менять копии внутри лямбды.

            Изменения не влияют на внешние переменные.
            [&] — захват всех используемых переменных по ссылке.
            Это значит, что внутри лямбды ты работаешь с самими переменными, а не с их копиями.
            [=] — создаёт копии переменных. Удобно, если хочешь защитить оригиналы.

            [&] — даёт доступ к настоящим переменным. Удобно, если нужно менять их значения.
            */
            auto f131 = [=]()mutable {
                // захват в контексте переменных

                cout << a << endl;

                a = 1313;

                cout << a << endl;

                cout << b << endl;

                b = 11; 

                cout << b << endl;
            };

            f131();

            auto f2 = []() {
                return 0;
            };
            auto result2 = f2();

            auto f3 = []()->int {
                return 0;
            };
            auto result3 = f3();

            /*
            auto f = [&a,b]()mutable {
                // захват в контексте переменных

                cout << a << endl;

                a = 1313;

                cout << a << endl;

                cout << b << endl;

                b = 11;

                cout << b << endl;
            };

            f();
            
            */
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(145 Как измерить время выполнения кода)
        case(132):
        {
            cout << "\n\nSimple_Code_lesson_(145 Как измерить время выполнения кода)\n" << endl;
            

            //auto start = chrono::high_resolution_clock::now();

            SimpleTimer st;

            cout << " time_made \n";

            int result;

            thread t([&result]() {result = Sum145(2, 5); });

            //result = Sum145(2, 5);

            for (size_t i = 1; i <= 10; i++)
            {
                cout << "ID потока = " << this_thread::get_id() << "\tmain works\t" << i << endl;
                this_thread::sleep_for(chrono::microseconds(200));

            }

            //auto end = chrono::high_resolution_clock::now();
            
           // chrono::duration<float> duration = end - start;
           
           // cout << " Duration " << duration.count()<<" s " << endl;

            t.join();

            cout << "Sum Result = " << result << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(146 Функторы в с _ Что такое функтор)
        case(133):
        {
            cout << "\n\nSimple_Code_lesson_(146 Функторы в с _ Что такое функтор)\n" << endl;

            cout << " functor \n";//функтор перегруженый оператор () с возможностью хранить данные

           /*MyFunctor f;
           for (int i = 1; i <= 20; i++)
            {
            f();
            }
            int result = f(5, 2);*/

            int arr[] = { 1,2,55,99,44,3,6 };

            EvenFunctor ef;

            for (auto element : arr)
            {
                ef(element);
            }

            ef.ShowEvenCount();

            ef.ShowEvenSum();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(147 Предикаты с _ Что такое предикат)
        case(134):
        {
            cout << "\n\nSimple_Code_lesson_(147 Предикаты с _ Что такое предикат)\n" << endl;

            cout << " predicatu \n";//функция или функтор который возвращает логическое значение
            // vector<int> v = { 1,-2,-55,9,-3,8,2 };
            //cout << GraterThanZero(-10) << endl;
            // int result = count_if(v.begin(), v.end(), LessThanZero);
            //cout << result << endl;

            vector<Person134> people
            {
                Person134("Вася",181),
                Person134("Петя",30),
                Person134("Маша",179),
                Person134("Даша",200),
                Person134("Катя",198),
                Person134("Андрей",181),
                Person134("Сергей",50),
                Person134("Иван",150),
            };

            int result = count_if(people.begin(), people.end(), people.front());
            cout << "\t result - " << result << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(148_Dinamicheskie_structuru_dannuh)
        case(135):
        {

            cout << "\n\nSimple_Code_lesson_(148_DSD_1-4_Odnosvaznuy_spisok_kak_structyra_dannuh;)\n" << endl;

            cout << "\n\nSimple_Code_lesson_(148_DSD_5_Dvysvaznuy_Spisik_kak_structyra_dannuh;)\n" << endl;

            cout << "\n\nSimple_Code_lesson_(148_DSD_6_Binarnoe_Derevo_kak_structyra_dannuh;)\n" << endl;

            cout << "\n\nSimple_Code_lesson_(148_DSD_7_Stec_kak_structyra_dannuh;)\n" << endl;

            cout << "\n\nSimple_Code_lesson_(148_DSD_8_Ochered_kak_structyra_dannuh;)\n" << endl;

            cout << "\n\nSimple_Code_lesson_(148_DSD_9_Ochered_s_prioretetom__kak_structyra_dannuh;)\n" << endl;

            cout << "\n\nSimple_Code_lesson_(148_DSD_10_Deque__kak_structyra_dannuh;)\n" << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(149_STL(Библиотека стандартных шаблонов)_1_Vector)
        case(136):
        {
            cout << "\n\nSimple_Code_lesson_(149_STL(Библиотека стандартных шаблонов)_1_Vector)\n" << endl;
            /*
            
            1)  assign 	                    Удаляет вектор и копирует указанные элементы в пустой вектор.
            2)  at 	                        Возвращает ссылку на элемент в заданном положении в векторе.
            3)  back 	                    Возвращает ссылку на последний элемент вектора.
            4)  begin 	                    Возвращает итератор произвольного доступа, указывающий на первый элемент в векторе.
            5)  capacity 	                Возвращает число элементов, которое вектор может содержать без выделения дополнительного пространства.
            6)  cbegin 	                    Возвращает постоянный итератор произвольного доступа, указывающий на первый элемент в векторе.
            7)  cend 	                    Возвращает константный итератор произвольного доступа, указывающий на позицию, следующую за концом вектора.
            8)  crbegin 	                Возвращает константный итератор, который указывает на первый элемент в обратном векторе.
            9)  crend 	                    Возвращает константный итератор, который указывает на последний элемент в обратном векторе.
           10)  clear    	                Очищает элементы вектора.
           11)  data 	                    Возвращает указатель на первый элемент в векторе.
           13)  emplace 	                Вставляет элемент, созданный на месте, в указанное положение в векторе.
           14)  emplace_back 	            Добавляет элемент, созданный на месте, в конец вектора.
           15)  empty 	                    Проверяет, пуст ли контейнер вектора.
           16)  end 	                    Возвращает итератор произвольного доступа, который указывает на конец вектора.
           17)  erase       	            Удаляет элемент или диапазон элементов в векторе из заданных позиций.
           18)  front       	            Возвращает ссылку на первый элемент в векторе.
           19)  get_allocator 	            Возвращает объект классу allocator, используемому вектором.
           20)  insert 	                    Вставляет элемент или многие элементы в вектор по заданной позиции.
           21)  max_size 	                Возвращает максимальную длину вектора.
           22)  pop_back 	                Удаляет элемент в конце вектора.
           23)  push_back    	            Добавляет элемент в конец вектора.
           24)  rbegin       	            Возвращает итератор, указывающий на первый элемент в обратном векторе.
           25)  rend 	                    Возвращает итератор, который указывает на последний элемент в обратном векторе.
           26)  reserve 	                Резервирует минимальную длину хранилища для объекта вектора.
           27)  resize 	                    Определяет новый размер вектора.
           28)  shrink_to_fit 	            Удаляет лишнюю емкость.
           29)  size        	            Возвращает количество элементов в векторе.
           30)  swap 	                    Меняет местами элементы двух векторов.
           31)  operator[]                  доступ к элементу без проверки границ.
           32)  assign(initializer_list)    присваивание из списка инициализации.
           33)  insert(initializer_list)    вставка из списка инициализации.

           34)  const_reference             типы, связанные с элементами.
                reference
                pointer
                const_pointer

           35) value_type                   тип элементов.
           36) allocator_type               тип аллокатора.
           37) difference_type              типы для индексации и размеров
               size_type
            */

            vector<int> myVector = { 0,484,484,999 };

            vector<int> myVector2(20, 55); //количество елементов в векторе фиксированое, 55 инициализвция вектора по умолчанию

            vector<int> myVector1;

            vector<int> v1, v2, v3;

            cout << "\n---------------------------------------------- r e s i z e  ----------------------------------------------------------------" << endl;

            // resize 	    Определяет новый размер вектора.

            myVector1.resize(20, 81);// инициализация вектора числом 448

            cout << " Функция capacity в векторе - " << myVector1.capacity() << endl << endl;

            cout << " Функция size в векторе - " << myVector1.size() << endl << endl;
            
            for (int i = 0; i < myVector1.size(); i++)
            {
                cout << myVector1[i] << " - ";
            }

            cout << "\n---------------------------------------------- r e s e r v e  --------------------------------------------------------------" << endl;

            //reserve 	    Резервирует минимальную длину хранилища для объекта вектора.

            myVector.reserve(100);//запас пустых ячеек под вектор
            /*
            - Выделяет память для как минимум указанного количества элементов.
            - Не изменяет текущий размер вектора — количество элементов остаётся прежним.
            - Если указанное значение больше текущей ёмкости, вектор перераспределяет память.
            - Если значение меньше или равно текущей ёмкости, ничего не происходит.
            */
                       

            cout << "\n---------------------------------------------- p u s h _ b a c k  ----------------------------------------------------------" << endl;

            //   Добавляет элемент в конец вектора.

            myVector.push_back(2);

            myVector.push_back(44);

            myVector.push_back(77);

            myVector.push_back(9);

            myVector[3] = 1000;

            cout << "\n---------------------------------------------- A t -------------------------------------------------------------------------" << endl;

            // Возвращает ссылку на элемент в заданном положении в векторе.

            cout << "  Метод .at - " << myVector.at(1) << endl << endl;
            /*
            • 	где  — это позиция элемента (нумерация с 0).
            • 	Возвращает ссылку на элемент по указанному индексу.
            • 	В отличие от оператора , метод  выполняет проверку выхода за пределы.
            • 	Если индекс некорректный (меньше 0 или больше/равен ), выбрасывается исключение .
            */

            cout << "\n---------------------------------------------- p o p _ b a c k --------------------------------------------------------------" << endl;

            //  Удаляет элемент в конце вектора.
            /*
            pop_back() — это член класса std::vector (в <vector>). 
            Он удаляет последний элемент, вызывает его деструктор и уменьшает размер контейнера на единицу. 
            Операция имеет амортизированную/постоянную сложность (constant complexity) и не изменяет ёмкость вектора.
            */

            cout << " Метод pop_back " << endl << endl;

            myVector.pop_back();

            cout << "Выводим содержание вектора - " << " - ";

            for (int i = 0; i < myVector.size(); i++)
            {
                cout << myVector[i] << " - ";
            }

            cout << endl;

            cout << "\n---------------------------------------------- c l e a r ---------------------------------------------------------------------" << endl;

            // Очищает элементы вектора.
            /*
            clear() — член класса std::vector из заголовка <vector>. 
            Функция уничтожает все элементы контейнера и делает его пустым (size == 0); при этом внутренний буфер остаётся выделенным, 
            то есть capacity не меняется автоматически. Операция гарантированно линейна по числу удаляемых элементов (вызовы деструкторов) 
            и не бросает исключений сама по себе, кроме случаев, когда деструкторы элементов выбрасывают исключения.
            */

            myVector2.clear();

            cout << endl;

            cout << "\n---------------------------------------------- s i z e -----------------------------------------------------------------------" << endl;

            // Возвращает количество элементов в векторе.

            /*
            size() — это константный метод std::vector, который возвращает количество элементов в контейнере (эквивалент std::distance(begin(), 
            end())) и не изменяет контейнер. Для пустого вектора возвращается 0.
            */

            cout << " Количество элементов в массиве/векторе - myVector" << myVector.size() << endl << endl << "\t";

            for (int i = 0; i < myVector.size(); i++)
            {
                cout << myVector[i] << "  ";
                if (i > 9) cout << endl;
            }

            cout << "\n---------------------------------------------- m a x _ s i z e ----------------------------------------------------------------" << endl;

            // 	Возвращает максимальную длину вектора.

            cout << "Выводим максимальную длинну вектора my Vector - " << myVector.max_size() << endl << endl;

            cout << "\n---------------------------------------------- c a p a c i t y ----------------------------------------------------------------" << endl;

            //  Возвращает число элементов, которое вектор может содержать без выделения дополнительного пространства.

            cout << " Функция capacity в векторе - " << myVector.capacity() << endl << endl;

            cout << "\n---------------------------------------------- s h r i n k _ t o _ f i t ------------------------------------------------------" << endl;

            // shrink_to_fit 	Удаляет лишнюю емкость.

            myVector1.reserve(100);

            cout << "  Удаляет лишнюю емкость - " << myVector1.capacity() << endl << endl;

            myVector1.shrink_to_fit();

            cout << "	Удаляет лишнюю емкость - " << myVector1.capacity() << endl << endl;

            cout << " Количество элементов в массиве/векторе - myVector1" << myVector1.size() << endl << endl << "\t";

            for (int i = 0; i < myVector1.size(); i++)
            {
                cout << myVector1[i] << "  ";

                if (i > 9 && i % 10 == 0) cout << "\n\n\t";
            }

            cout << "\n---------------------------------------------- e m p t y ----------------------------------------------------------------------" << endl;

            // Функция empty() в контейнере std::vector в C++ — это метод, который проверяет, пуст ли вектор.

            cout << " Функция empty в векторе проверка на наличие елементов булевая - " << myVector.empty() << endl;

            cout << "\n---------------------------------------------- d a t a ------------------------------------------------------------------------" << endl;

            // Метод data() в контейнере std::vector в C++ возвращает указатель на первый элемент массива, который хранится внутри вектора.

            cout << "\n\ndata - Возвращает указатель на первый элемент в векторе." << *myVector.data() << endl;

            cout << "\n---------------------------------------------- b a c k ------------------------------------------------------------------------" << endl;

            //  Метод back() в контейнере std::vector в C++ возвращает ссылку на последний элемент вектора.

            cout << "\n\nback 	Возвращает ссылку на последний элемент вектора." << myVector.back() << endl;

            try//блок try/catch для просмотра типа ошибки (выход за границы массива)
             {
                 cout << "  - " << myVector.at(10) << endl << endl;
             }
             catch (const std::out_of_range & ex)
             {
                 cout << ex.what() << endl << endl;
             }

            cout << "\n---------------------------------------------- e m p l a c e -----------------------------------------------------------------" << endl;

            // Метод begin() в контейнере std::vector в C++ возвращает итератор на первый элемент вектора.
            
            for (int i = 0; i < 10; i++)
            {
                myVector1[i] = i;
            }
            
            vector<int>::iterator iter1 = myVector1.begin();

            myVector1.emplace(iter1, 112);

            cout << "\n emplace 	Вставляет элемент, созданный на месте, в указанное положение в векторе." << endl;

            cout << " Количество элементов в массиве/векторе - myVector1" << myVector1.size() << endl << endl << "\t";

            for (int i = 0; i < myVector1.size(); i++)
            {
                cout << myVector1[i] << "  ";

                if (i > 9 && i % 10 == 0) cout << "\n\n\t";
            }

            cout << "\n ----------------------------------------- e m p l a c e _b a c k -------------------------------------------------------------" << endl;

            // Добавляет элемент, созданный на месте, в конец вектора.
            /*
            Функція  додає новий елемент у кінець контейнера, конструюючи його безпосередньо на місці.
            Коли ви викликаєте її без аргументів:
            • 	Якщо тип елементів вектора має конструктор за замовчуванням, то буде створено новий об’єкт саме цим конструктором.
            • 	Якщо тип елементів не має конструктора за замовчуванням, виклик  без параметрів призведе до помилки компіляції.
            */

            myVector1.emplace_back(113);

            for (int i = 0; i < myVector1.size(); i++)
            {
                cout << myVector1[i] << "  ";

                //if (i > 9 && i % 10 == 0) cout << "\n\n\t";
            }

            cout << "\n---------------------------------------------- i n s e r t --------------------------------------------------------------------" << endl;

            // Вставляет элемент или несколько элементов в вектор по заданной позиции.
            /*
            Функція  у C++ STL контейнері  використовується для вставки елементів у довільну позицію вектора. 
            Це одна з ключових операцій, яка дозволяє додавати нові значення не лише в кінець (як ), а й у будь-яке місце.

            iterator insert (const_iterator pos, const T& value);
            iterator insert (const_iterator pos, T&& value);
            iterator insert (const_iterator pos, size_type count, const T& value);
            template <class InputIterator>
            iterator insert (const_iterator pos, InputIterator first, InputIterator last);
            iterator insert (const_iterator pos, std::initializer_list<T> il);

            Пояснення параметрів
            • 	 – ітератор, що вказує на позицію, перед якою буде вставлено елемент(и).
            • 	 – значення, яке вставляється.
            • 	 – кількість копій значення, які потрібно вставити.
            • 	 – діапазон елементів, які потрібно вставити.
            • 	 – список ініціалізації (наприклад ).
            */

            myVector1.insert(myVector1.begin(), 40, 333);

            for (int i = 0; i < myVector1.size(); i++)
            {
                if (i % 20 == 0 || i == 0) cout << "\n\n\t";

                cout << myVector1[i] << "  ";

            }

            cout << "\n---------------------------------------------- f r o n t -----------------------------------------------------------------------" << endl;

            // Возвращает ссылку на первый элемент в векторе.

            cout << " \n\n front 	Возвращает ссылку на первый элемент в векторе " << myVector1.front() << endl << endl;

            cout << "\n---------------------------------------------- a s s i g n ---------------------------------------------------------------------" << endl;

            //  Удаляет вектор и копирует указанные элементы в пустой вектор.

            /*
            Метод в контейнере используется для переприсвоения содержимого вектора новыми значениями.
            Он очищает текущий вектор и заполняет его новыми элементами.
            */


            for (int i = 0; i < myVector1.size(); i++)
            {
                if (i % 20 == 0 || i == 0) cout << "\n\n\t";

                cout << myVector1[i] << "  ";

            }

            v2.assign(myVector1.begin(), myVector1.end());

            cout << " \n\n assign  Удаляет вектор и копирует указанные элементы в пустой вектор - " << endl;

            for (auto& v : v2) {
                cout << v << " ";
            }

            cout << "\n---------------------------------------------- b e g i n -----------------------------------------------------------------------" << endl;

            // Возвращает итератор произвольного доступа, указывающий на первый элемент в векторе.

            myVector1.insert(myVector1.begin(), 1, 500);

            for (auto& v : myVector1) {
                cout << v << " ";
            }

            cout << "\n---------------------------------------------- e n d ---------------------------------------------------------------------------" << endl;

            // Метод end() у контейнера std::vector в C++ возвращает итератор на элемент, следующий за последним.

            myVector1.insert(myVector1.end(), 1, 500);

            for (auto& v : myVector1) {
                cout << v << " ";
            }

            cout << "\n---------------------------------------------- r b e g i n ---------------------------------------------------------------------" << endl;

            // Возвращает итератор, указывающий на первый элемент в обратном векторе.
            /*
            * Метод rbegin() у контейнера std::vector в C++ возвращает обратный итератор на последний элемент.
            - Указывает на последний элемент контейнера, но используется для обхода в обратном порядке (от конца к началу).
            */

            vector<int>::reverse_iterator myVector1_it_rbegin = myVector1.rbegin();

            for (auto& v : myVector1) {

                cout << v << " ";

            }

            myVector1_it_rbegin += 2;

            cout << "\n\nrbegin() - Выводим значение итератора - " << *myVector1_it_rbegin << endl;

            cout << "\n---------------------------------------------- r e n d -------------------------------------------------------------------------" << endl;

            // Возвращает итератор, который указывает на последний элемент в обратном векторе.
            /*
            Метод rend() у контейнера std::vector в C++ возвращает обратный итератор на элемент, 
            который находится перед первым элементом (то есть "за пределами" начала контейнера).
            - Что делает:
            Возвращает итератор, который указывает на фиктивную позицию перед началом контейнера.
            Используется вместе с rbegin() для обхода контейнера в обратном порядке.
            Обычно применяется для организации цикла по контейнеру в обратном порядке.
            */

            vector<int>::reverse_iterator myVector1_it_rend = myVector1.rend();

            myVector1_it_rend -= 2;

            cout << "\n\nrend 	  Возвращает итератор, который указывает на последний элемент в обратном векторе.\t " << *myVector1_it_rend << endl;

            //cout << "\n\nrbegin() - Выводим значение итератора - " << *myVector1_it_rend << endl;

            cout << "\n---------------------------------------------- c b e g i n ---------------------------------------------------------------------" << endl;

            // Возвращает постоянный итератор произвольного доступа, указывающий на первый элемент в векторе.
            /*
            В C++ метод  используется для получения константного итератора, указывающего на первый элемент контейнера. 
            В вашем случае — если у вас есть объект  (например, ), вызов  вернёт итератор, который:
            • 	Начинается с начала контейнера.
            • 	Является read-only — через него нельзя изменять элементы, только читать.
            • 	Обычно применяется в циклах или алгоритмах стандартной библиотеки, когда нужно гарантировать, что данные не будут изменены.
            */

            vector<int>::const_iterator myVector1_it_cbegin = myVector1.cbegin();

            for (auto& v : myVector1) {

                cout << v << " ";

            }

            //myVector1_it_cbegin += 2;

            cout << "\n\ncbegin() - Выводим значение итератора - " << *myVector1_it_cbegin << endl;

            cout << "\n---------------------------------------------- c e n d -------------------------------------------------------------------------" << endl;

            // Возвращает константный итератор произвольного доступа, указывающий на позицию, следующую за концом вектора.    
            /*
            Метод  в C++ возвращает константный итератор, указывающий на элемент, следующий за последним в контейнере.
            Основные моменты:
            • 	Используется вместе с , чтобы задать диапазон итераторов для перебора контейнера.
            • 	Итератор, возвращаемый , не указывает на реальный элемент, а служит "границей конца".
            • 	Как и , он возвращает read-only итератор — элементы нельзя изменять.
            • 	Обычно применяется в циклах и алгоритмах стандартной библиотеки (, , и т.д.).
            */

            auto myVector1_it_cend = myVector1.cend();

            cout << "\n\nrend 	  Возвращает итератор, который указывает на последний элемент.\t " << endl;

            for (auto it = myVector1.cbegin(); it != myVector1.cend(); ++it)

            std::cout << ' ' << *it;

            std::cout << '\n';

            cout << "\n---------------------------------------------- c r b e g i n -------------------------------------------------------------------" << endl;

            // Возвращает константный итератор, который указывает на первый элемент в обратном векторе.
            /*
            Метод crbegin() в C++ возвращает константный обратный итератор, 
            который указывает на последний элемент контейнера и двигается в обратном направлении (от конца к началу).
            Основные характеристики
            - Начинает обход с последнего элемента.
            - Итератор является read-only — элементы нельзя изменять.
            - Используется для безопасного чтения контейнера в обратном порядке.
            - Обычно применяется вместе с crend(), чтобы задать диапазон итераторов для обратного перебора.
            */

            for (auto it = myVector1.crbegin(); it != myVector1.crend(); ++it)
                std::cout << ' ' << *it;
            std::cout << '\n';

            cout << "\n---------------------------------------------- c r e n d -----------------------------------------------------------------------" << endl;

            // Возвращает константный итератор, который указывает на последний элемент в обратном векторе.
            /*
            Метод crend() в C++ возвращает константный обратный итератор, который указывает на позицию перед первым элементом контейнера. 
            То есть это «граница конца» для обратного обхода контейнера.
            Основные характеристики
            - Используется вместе с crbegin(), чтобы задать диапазон итераторов для обратного чтения.
            - Итератор, возвращаемый crend(), не указывает на реальный элемент, а служит маркером конца.
            - Как и все c* методы, он возвращает read-only итератор — элементы нельзя изменять.
            - Применяется в циклах и алгоритмах стандартной библиотеки для безопасного обратного перебора.
            */
            for (auto it = myVector1.crbegin(); it != myVector1.crend(); ++it)
                std::cout << ' ' << *it;
            std::cout << '\n';

            cout << "\n---------------------------------------------- e r a s e -----------------------------------------------------------------------" << endl;

            // Удаляет элемент или диапазон элементов в векторе из заданных позиций.
            /*
            Возвращаемое значение
            Метод возвращает итератор на элемент, следующий за удалённым:
            • 	Если удаляется один элемент, возвращается итератор на следующий.
            • 	Если удаляется диапазон, возвращается итератор на первый элемент после диапазона.
            • 	Если удаляются последние элементы, возвращается .
            Важные моменты
            • 	При удалении элементы сдвигаются, чтобы заполнить "дыру". Это может быть дорого по времени для больших векторов.
            • 	Все итераторы и ссылки на элементы после удалённого становятся недействительными.
            • 	Для массовых удалений лучше использовать алгоритмы вроде  вместе с  (так называемый erase-remove idiom).
            */

            vector <int>::iterator Iter;

            for (auto it = myVector1.begin(); it != myVector1.end(); ++it)
            {                
                int count = 0;
                count++;
                if (count == 9) { std::cout << '\n'; }

                std::cout << ' ' << *it;  
            }
            cout << " \n\n Вывидем количество елементов в векторе - "<< myVector1.size() << endl << endl;

            myVector1.erase(myVector1.begin());

            for (auto it = myVector1.begin(); it != myVector1.end(); ++it)
            {
                int count = 0;
                count++;
                if (count == 9) { std::cout << '\n'; }

                std::cout << ' ' << *it;
            }

            cout << " \n\n Вывидем количество елементов в векторе - " << myVector1.size() << endl << endl;

            myVector1.erase(myVector1.begin() + 1, myVector1.begin() + 3);

            for (auto it = myVector1.begin(); it != myVector1.end(); ++it)
            {
                int count = 0;
                count++;
                if (count == 9) { std::cout << '\n'; }

                std::cout << ' ' << *it;
            }

            cout << " \n\n Вывидем количество елементов в векторе - " << myVector1.size() << endl << endl;
           
            cout << endl;
            
            cout << "\n---------------------------------------------- g e t _ a l l o c a t o r -------------------------------------------------------" << endl;

            //  Возвращает объект классу allocator, используемому вектором." << endl;
            /*
            Что он делает
            • 	Возвращает объект аллокатора, который используется данным вектором для управления памятью.
            • 	Тип возвращаемого значения —  (обычно это  по умолчанию, где  — тип элементов вектора).
            • 	С помощью этого аллокатора можно вручную выделять и освобождать память в том же стиле, как это делает сам контейнер.
            */

            vector <int> v11;
            vector <int>::iterator v1Iter;
            vector <int>::allocator_type v1Alloc;

            int i1;
            for (i1 = 1; i1 <= 7; i1++)
            {
                v11.push_back(2 * i1);
            }

            cout << "The original vector v1 is:\n ( ";
            for (v1Iter = v11.begin(); v1Iter != v11.end(); v1Iter++)
                cout << *v1Iter << " ";
            cout << ")." << endl;

            allocator<int>::const_pointer v1Ptr;
            const int k = 8;
            v1Ptr = v1Alloc.address(*find(v11.begin(), v11.end(), k));
            // v1Ptr = v1Alloc.address( k );
            cout << "The integer addressed by v1Ptr has a value of: "
                << "*v1Ptr = " << *v1Ptr << "." << endl;



            vector<int, allocator<int> > v21 = vector<int, allocator<int> >(allocator<int>());

            // v3 will use the same allocator class as v1
            vector <int> v31(v11.get_allocator());

            vector<int>::allocator_type xvec = v31.get_allocator();
            // You can now call functions on the allocator class used by vec


            cout << "\n---------------------------------------------- s w a p --------------------------------------------------------------------------" << endl;

            // Метод swap у контейнера std::vector в C++ используется для обмена содержимым двух векторов.
           
            vector <int> v1swap, v2swap;

            v1swap.push_back(1);
            v1swap.push_back(2);
            v1swap.push_back(3);
            v1swap.push_back(4);

            v2swap.push_back(10);
            v2swap.push_back(20);
            
            cout << "\n v1swap = " ;
            for (auto it = v1swap.begin(); it != v1swap.end(); ++it) {
                std::cout << "\t" << * it;
            }

            cout << endl;

            cout << "\n v2swap = ";
            for (auto it = v2swap.begin(); it != v2swap.end(); ++it) {
                std::cout << "\t" << *it;
            }
            
            cout << endl << endl;

            cout << "The number of elements in v1swap = " << v1swap.size() << endl;
            cout << "The number of elements in v2swap = " << v2swap.size() << endl;
            cout << endl;
            
            v1swap.swap(v2swap);

            cout << "\n v1swap = ";
            for (auto it = v1swap.begin(); it != v1swap.end(); ++it) {
                std::cout << "\t" << *it;
            }

            cout << endl;

            cout << "\n v2swap = ";
            for (auto it = v2swap.begin(); it != v2swap.end(); ++it) {
                std::cout << "\t" << *it;
            }

            cout << endl << endl;

            cout << "The number of elements in v1swap = " << v1swap.size() << endl;
            cout << "The number of elements in v2swap = " << v2swap.size() << endl;
            cout << endl;
            
            cout << endl;
            cout << "\n---------------------------------------------- operator[] --------------------------------------------------------------------------" << endl;
            // operator[] - доступ к элементу без проверки границ
            std::vector<int> v136 = { 10, 20, 30 };

            std::cout << v136[0] << "\n"; // 10
            std::cout << v136[2] << "\n"; // 30

            // Ошибка: индекс вне диапазона
            //std::cout << v[5] << "\n"; // неопределённое поведение!
            cout << endl;
            cout << "\n---------------------------------------------- const_reference --------------------------------------------------------------------------" << endl;
            /*
            В C++ часто используется термин ссылка на константу (). Это не отдельный тип функции, а способ передачи аргументов или возврата значений:
            • 	 — ссылка на объект типа , которую нельзя изменять внутри функции.
            • 	Обычно применяется для:
            • 	избежания копирования больших объектов (например, , );
            • 	гарантии, что функция не изменит переданный объект.
            */
            /*void printMessage136(const std::string & msg) {
                // msg нельзя изменить внутри функции
                std::cout << msg << std::endl;
            }
            std::string text136 = "Hello, C++!";
            printMessage136(text136); // передаём по const-ссылке
            */ // закоментировано из-за недопустимости локальних опредлений
            cout << endl;
            cout << "\n---------------------------------------------- reference --------------------------------------------------------------------------" << endl;
            /*
            🔹 Что такое reference ?
            В стандартной библиотеке C++ контейнеры (например,std::vector ,std::map ) определяют тип reference, 
            который обычно является псевдонимом для ссылки на элемент контейнера:

            То есть:
            • reference	 позволяет изменять элемент контейнера.
            • const_reference	 разрешает только чтение.
            */
            std::vector<int> v136_2 = { 10, 20, 30 };

            // reference = int&
            std::vector<int>::reference ref136 = v136_2[1];
            ref136 = 99; // можно изменить элемент

            // const_reference = const int&
            std::vector<int>::const_reference cref = v136_2[2];
            // cref = 77; // ошибка: нельзя изменить

            for (const auto& x : v136_2) {
                std::cout << x << " ";
            }

            cout << endl;
            cout << "\n---------------------------------------------- pointer --------------------------------------------------------------------------" << endl;
            /*
            🔹 Указатели в `std::vector`
            В стандартной библиотеке у контейнера `std::vector<T>` есть типы:
             - `pointer` → обычно это `T*` (указатель на элемент, который можно изменять).
             - `const_pointer` → обычно это `const T*` (указатель на элемент, который нельзя изменять).

            Эти типы определены внутри `std::vector` как псевдонимы (typedef/using). Они используются для совместимости и единообразия в STL.
            */

            std::vector<int> v = { 10, 20, 30 };

            // pointer = int*
            std::vector<int>::pointer p = &v[0];
            *p = 99; // изменяем первый элемент через указатель

            // const_pointer = const int*
            std::vector<int>::const_pointer cp = &v[1];
            // *cp = 77; // ошибка: нельзя изменять через const_pointer

            for (int x : v) {
                std::cout << x << " ";
            }
            cout << endl;
            cout << "\n---------------------------------------------- const_pointer --------------------------------------------------------------------------" << endl;
            std::vector<int> v_const_pointer = { 10, 20, 30, 40 };

            // Получаем const_pointer на первый элемент
            std::vector<int>::const_pointer p_const_pointer = v_const_pointer.data();

            // Выводим элементы через const_pointer
            for (size_t i = 0; i < v_const_pointer.size(); ++i) {
                std::cout << *(p_const_pointer + i) << " ";  // доступ только для чтения
            }
            std::cout << std::endl;

            // *(p + 1) = 100;  // Ошибка! const_pointer не позволяет изменять значения

            cout << endl;
            cout << "\n---------------------------------------------- assign(initializer_list) --------------------------------------------------------------------------" << endl;
            // initializer_list - Полностью заменяет содержимое контейнера новыми элементами из 

            std::vector<int> v_initializer_list = { 1, 2, 3 };

            // Перезаписываем содержимое вектора
            v_initializer_list.assign({ 10, 20, 30, 40 });

            for (int x : v_initializer_list) {
                std::cout << x << " ";
            }
            std::cout << std::endl;


            break;
        }
        // Simple_Code_lesson_(150_STL(Библиотека стандартных шаблонов)_2_Итераторы)
        case(137):
        {
            cout << "\n\nSimple_Code_lesson_(150_STL(Библиотека стандартных шаблонов)_2_Итераторы)\n" << endl;

            cout << " iteratoru \n";
            cout << "\tИтератор — это объект, который способен перебирать элементы контейнерного класса\n" <<
                    "\tбез необходимости пользователю знать реализацию определенного контейнерного класса.\n" <<
                    "\tВо многих контейнерах(особенно в списке и в ассоциативных контейнерах) итераторы\n" <<
                    "\tявляются основным способом доступа к элементам этих контейнеров." << endl;

            cout << " ============================================================================================" << endl << endl;
            
            vector<int> myVector137 = { 1,9,44,422,676,78 };

            cout << "\tВыводим первое значение вектора - " << myVector137[1] << endl << endl;

            vector<int>::iterator it;

            it = myVector137.begin();

            it++;//здвигаемся на 1 позицию

            it += 2;// даигаемся по коллекции на 2 елемента в право
            it-=3; // двигаемся по колеекции на один елемент в лево

            *it = 1000;// присваеваем нулевому значению вектора значение 1000

            for (int i = 0; i < myVector137.size(); i++)
            {
                cout << " " << myVector137[i];
                if (!(i % 10) && !(i == 0)) { cout << endl; }
            }

            cout << endl;
            
            cout << " ============================================================================================" << endl << endl;

            cout << "\tВыводим значение итератора на котором остановились в векторе - ";

            cout << *it << endl << endl;
            
            cout << " ============================================================================================" << endl << endl;

            cout << "\tВыводим значение  вектора - ";

            for (vector<int>::const_iterator i = myVector137.cbegin(); i != myVector137.cend(); i++)// итератор тип vector<int>::iterator имя итератора i конец списка != myVector.end();
            {
                cout << *i << "\t";
            }

            cout << "\n" << endl;
           
            
            cout << " ============================================================================================" << endl << endl;

            cout << " \tReverse_Iterator - ";

            for (vector<int>::reverse_iterator i = myVector137.rbegin(); i != myVector137.rend(); i++)// итераторируемся с конца в начало
            {
                cout << *i << "\t";
            }

            cout << "\n" << endl;
            
            cout << " ============================================================================================" << endl << endl;

            cout << "\tПоложение в векторе после перемещения на одну позицию назад it-- - " << *it << endl << endl;

            cout << "\tПоложение в векторе после перемещения на три позиции впёред - " << *(it + 3) << endl << endl;

            cout << "\tВывод действующего положения - " << *it << endl << endl;
            
            cout << " ============================================================================================" << endl << endl;

            advance(it, 0);// перемещение по вектору

            cout << "\tПоложение 0 после перемещения по вектору через фукцию  advance(it,0); - " << *it << endl << endl;
            

            cout << " ============================================================================================" << endl << endl;

            myVector137.insert(it, 999);

            cout << "\tВектор после функции вставтки (вставка значения) myVector137.insert(it, 999); - \n\t";

            for (vector<int>::iterator i = myVector137.begin(); i != myVector137.end(); i++)// итератор тип vector<int>::iterator имя итератора i конец списка != myVector137.end();
            {
                cout << *i << "\t";
            }

            cout << "\n";
            
            cout << " ============================================================================================" << endl << endl;

            cout << "\tФункция  - myVector.erase(itErase, itErase) удаление значене вектора в котором находится интератор - \n\t";

            vector<int>::iterator itErase = myVector137.begin();

            myVector137.erase(itErase, itErase + 3);

            for (vector<int>::iterator i = myVector137.begin(); i != myVector137.end(); i++)// итератор тип vector<int>::iterator имя итератора i конец списка != myVector137.end();
            {
                cout << *i << "\t";
            }
            cout << "\n" << endl;
            cout << " ============================================================================================" << endl << endl;

            int arr[] = { 2,6,9 };
            cout << arr[1] << endl;
            cout << *(arr + 1) << endl;
            
            cout << "++++++++++++++++++++++++++++++++ Т р е н и р о в к а _ V e c t o r _ I n t e r a t o r+++++++++++++++++++++++++++++++" << endl << endl;
           
            std::vector<int> My_array_1{ 0 }, MyVector2{ 0 }, MyVector3{ 0 };

            vector<int>::iterator it1 = My_array_1.begin();

            cout << "Выводим значение итератора - "<< *it1 +1 << endl;

            std::cout << "The size is: " << My_array_1.size() << '\n';// выведем длинну вектора
            
            My_array_1.push_back(1);

            for (size_t i = 2; i <= 31; i++)
            {
                My_array_1.push_back(i);
            }

            for (int i = 0; i < My_array_1.size(); i++)
            {
                cout << " " << My_array_1[i];
                if (!(i % 10)&& !(i==0)) { cout << endl; }
            }
            My_array_1.pop_back();
            
            std::cout << "\n The length is: " << My_array_1.size() << '\n';

            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(151_STL(Библиотека стандартных шаблонов)_3_LIST)
        case(138):
        {
         
            cout << "\n\nSimple_Code_lesson_(151_STL(Библиотека стандартных шаблонов)_3_LIST)\n" << endl;

            cout << "\n\t\t\t\t\tLIST_(DVUSVAZNUY_SPISOK)\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tThe C++ Standard Library list class is a class template of sequence containers \n\n" <<
                "\tthat maintain their elements in a linear arrangement and allow efficient insertions\n\n" <<
                "\tand deletions at any location within the sequence.The sequence is stored as \n\n" <<
                "\ta bidirectional linked list of elements, each containing a member of some type Type.\n" << endl;

            cout << " ==================================================================================================" << endl << endl;

            list<int> mylist138 = { 99,15,64,99,979,54,99,99,99 };
            
            //list<int>::iterator it138 = mylist.begin();

            auto it138 = mylist138.begin();// list<int>::iterator = auto сокращение кода

            cout << "\tВывод певого елемента начала списка - " << *it138 << endl << endl;

            cout << "\tВывод списка целиком - ";
            
             for (auto i = mylist138.begin(); i != mylist138.end(); i++)
             {
                 cout << *i << "\t";
             }

             cout << "\n\n";
            
            PrintList138(mylist138);

            cout << " ==================================================================================================" << endl << endl;
            
            cout << "\tВывод на списка после функции mylist.sort();\n\n\t - сортировки от наименьшего к наибольшему\t";

            mylist138.sort();

            PrintList138(mylist138);
            
            cout << " ==================================================================================================" << endl << endl;

            cout << "\tВывод на списка после функции mylist.reverse();\n\n\t - сортировки от наибольшего к наименьшему\t";

            mylist138.reverse();

            PrintList138(mylist138);
            
            cout << " ==================================================================================================" << endl << endl;

            cout << "\t Метод mylist.push_back(5) добавляет число в конец списка.\n\n";

            mylist138.push_back(5);

            cout << "\t Метод mylist.push_front(151) добавляет число в начало списка.\n\n";

            mylist138.push_front(151);

            cout << "\t Вывод списка целиком - ";

            PrintList138(mylist138);

            cout << "\t Метод  mylist.pop_front() удаляет число в начале списка.\n\n";

            mylist138.pop_front();

            cout << "\t Метод mylist.pop_back() удаляет число в конце списка.\n\n";

            mylist138.pop_back();

            cout << "\t Вывод списка целиком - ";

            PrintList138(mylist138);
           
            cout << " ==================================================================================================" << endl << endl;

            cout << "\t Вывод количество елементов в нашем списке - " << mylist138.size() << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            cout << "\t Метод mylist138.unique() удаление последовательных дубликатов - \n\n\t ";

            mylist138.unique();

            PrintList138(mylist138);
            
            cout << " ==================================================================================================" << endl << endl;

            auto it1 = mylist138.begin();

            ++it1;// доступ к произвольному индеку не поддерживается

            advance(it1, 3);// смещение индекса через итератор

            mylist138.insert(it1, 111);

            cout << "\t Метод mylist138.insert(it,111) вставка значения через итератор - \n\n\t ";

            PrintList138(mylist138);
            
            cout << " ==================================================================================================" << endl << endl;

            cout << "\t Метод mylist.erase(it) удаление значения через итератор - \n\n\t ";

            advance(it1, -3);

            mylist138.erase(it1);

            PrintList138(mylist138);
            
            cout << " ==================================================================================================" << endl << endl;
            cout << "\t Метод mylist.remove(15) удаление значения 15 из листа - \n\n\t ";

            mylist138.remove(15);

            PrintList138(mylist138);

            cout << " ==================================================================================================" << endl << endl;

            cout << "\t Метод mylist.assign(3,15) удаляеь предыдущие значения, 3 кол елементов, 15 значения по умолчанию \n\n\t ";

            mylist138.assign(3, 15);

            PrintList138(mylist138);
            
            cout << " ==================================================================================================" << endl << endl;

            cout << "\t Метод mylist2.assign(myList2.begin(), myList2.end) копирование одного листа в другой \n\n\t ";

            list<int> mylist2;

            mylist2.assign(mylist138.begin(), mylist138.end());

            PrintList138(mylist2);

            cout << " ==================================================================================================" << endl << endl;


            cout << "\tВывод на списка после функции mylist.clear()\n\n\t - очистка листа\t";

            mylist138.clear();

            PrintList138(mylist138);

            cout << " ==================================================================================================" << endl << endl;

            cout << endl << endl;
            
            break;
        }
        // Simple_Code_lesson_(152_STL(Библиотека стандартных шаблонов)_4_Итераторы_prefix_vs_postfix)
        case(139):
        {
            cout << "\n\nSimple_Code_lesson_(152_STL(Библиотека стандартных шаблонов)_4_Итераторы_prefix_vs_postfix)\n" << endl;

            cout << "\n\t\t\t\t\tLesson_158_STL_4_prefix_vs_postfix\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tРазница в использовании префиксного и постфиксного инкремента/декримента для интераторов в том, что в\n\n" <<
                "\tслучае префиксного интератора, в теории, просто изменяется состояние объекта, и потом он возвращается, а при\n\n" <<
                "\tиспользовании постфиксного инкримента, состояние также изменяется, но возвращается объект с предыдущим\n\n" <<
                "\tсостоянием, т.е. для этого компилятору необходимо создать ещё 1 объект. Это влияет на скорость работы. Но,\n\n" <<
                "\tвроде как современные компиляторы уже могут сами оптимизировать подобные случаи, и скорость работы не\n\n" <<
                "\tотличается. Но для себя я всё же сделал вывод, что если использование префиксного и постфиксного\n\n" <<
                "\tинкримента не влияет на правильность ответа, то предпочтительно использовать префиксный инкримент." << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            list<int> mylist139 = { 99,15,64,99,979,54,99,99,99 };
            list<int>::iterator it = mylist139.begin();

            ++it;

            PrintList139(mylist139);

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(153_STL(Библиотека стандартных шаблонов)_5_forward list)
        case(140):
        {
            cout << "\n\nSimple_Code_lesson_(153_STL(Библиотека стандартных шаблонов)_5_forward list)\n" << endl;

            cout << "\n\t\t\t\t\tForward_list\n\n";

            cout << " ==================================================================================================" << endl << endl;


            cout << "\tstd::forward_list - это контейнер, который поддерживает быструю вставку и удаление элементов из \n\n" <<
                "\tлюбой точки контейнера. Быстрый произвольный доступ не поддерживается.Он реализован в виде \n\n" <<
                "\tодносвязного списка и, по существу, не имеет никаких накладных расходов по сравнению с его \n\n" <<
                "\tреализацией в C.По сравнению с std::list этот контейнер обеспечивает более эффективное хранение, \n\n" <<
                "\tкогда двунаправленная итерация не требуется.\n\n\n" <<
                "\tДобавление, удаление и перемещение элементов в списке или в нескольких списках не делает \n\n" <<
                "\tнедействительными итераторы, которые в настоящее время ссылаются на другие элементы в списке.\n\n" <<
                "\tОднако итератор или ссылка, ссылающаяся на элемент, становится недействительной, когда\n\n" <<
                "\tсоответствующий элемент удаляется(через erase_after) из списка.\n" << endl;

            cout << " ==================================================================================================" << endl << endl;

            forward_list<int> fl = { 45,56,89 };

            fl.push_front(1);

            fl.push_front(4);

            fl.push_front(6);

            cout << "\tВыводим forward_list  - ";

            forward_list<int>::iterator it = fl.begin();

            for (auto el : fl)
            {
                cout << el << "\t";
            }

            cout << "\n\n\tПоложение инкримента итератора - " << *it;

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tВывод списка после курсора функция fl.insert_after(it, 9999) - \n\n\t - сортировки от наименьшего к наибольшему\t";

            fl.insert_after(it, 9999);

            for (auto el : fl)
            {
                cout << el << "\t";
            }

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(154_STL(Библиотека стандартных шаблонов)_6_array))
        case(141):
        {
            cout << "\n\nSimple_Code_lesson_(STL(154_Библиотека стандартных шаблонов_6_array))\n" << endl;
            cout << "\n\t\t\t\t\tArray\n\n";

            cout << " ==================================================================================================" << endl << endl;


            cout << "\tstd::array — это фиксированный массив, который не распадается в указатель при передаче в функцию.\n\n" <<
                "\tstd::array определяется в заголовочном файле array, внутри пространства имен std. \n\n" << endl;

            cout << " ==================================================================================================" << endl << endl;

            array<int, 4> arr141 = { 0,1,2,3 };

            cout << "\tВыводим 0-й елемент массива  - " << arr141[0] << endl;

            cout << "\tВыводим 1-й елемент массива чрез метод at() - " << arr141.at(1) << endl;

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tВыводим массив через цикл for - ";

            for (int i = 0; i < arr141.size(); i++)
            {
                cout << arr141[i] << "\t";
            }

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tВыводим массив через цикл for_each - ";

            for (auto el : arr141)
            {
                cout << el << "\t";
            }

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tЗаполняем массив методом arr.fill(-1) и выводим циклом for_each - ";

            arr141.fill(-1);

            for (auto el : arr141)
            {
                cout << el << "\t";
            }

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;

            arr141[0] = 12;

            arr141[3] = 13;

            cout << "\tВыводим первое значение массива методом arr.front() - " << arr141.front() << endl << endl;

            cout << "\tВыводим последнее значение массива методом arr.back() - " << arr141.back() << endl << endl;

            cout << "\tВыводим количество елементов в массиве arr.size() - " << arr141.size();

            cout << "\n\n";

            cout << " ==================================================================================================" << endl << endl;



            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(155_STL(Библиотека стандартных шаблонов)_7_Контейнеры STL и операторы сравнения.)
        case(142):
        {
            cout << "\n\nSimple_Code_lesson_(155_STL(Библиотека стандартных шаблонов)_7_Контейнеры STL и операторы сравнения.)\n" << endl;

            cout << "\n\t\t\t\t\tOperatoru_Sravneniy\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tОператор 	  Символ 	Пример 	          Операция\n\n" <<
                "\tБольше               >           x > y            true, если x больше y, в противном случае — false\n\n" <<
                "\tМеньше               <           x < y 	          true, если x меньше y, в противном случае — false\n\n" <<
                "\tБольше или равно     >=          x >= y 	  true, если x больше / равно y, в противном случае — false\n\n" <<
                "\tМеньше или равно     <=          x <= y 	  true, если x меньше / равно y, в противном случае — false\n\n" <<
                "\tРавно                ==          x == y 	  true, если x равно y, в противном случае — false\n\n" <<
                "\tНе равно             !=          x != y 	  true, если x не равно y, в противном случае — false\n\n" << endl;

            cout << " ==================================================================================================" << endl << endl;

            array<int, 4> arr = { 1,3,5,7 };

            array<int, 4> arr1 = { 1,3,5,7 };

            array<int, 4> arr2 = { 2,4,6,8 };

            bool result = (arr > arr1);

            cout << "\tВыводим результат сравнения двух массивов - " << result << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(156_STL(Библиотека стандартных шаблонов)_8_deque)
        case(143):
        {
            cout << "\n\nSimple_Code_lesson_(156_STL(Библиотека стандартных шаблонов)_8_deque)\n" << endl;

            cout << "\n\t\t\t\t\tDeque\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tDeque представляет двухстороннюю очередь. " << endl << endl <<
                "\tДля использования данного контейнера нужно подключить заголовочный файл deque." << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            deque<int> dq143 = { 1,9,94 };

            deque<int>::iterator c1_it = dq143.begin();

            cout << " ==================================================================================================" << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(157_STL(Библиотека стандартных шаблонов)_9_SET_MULTISET )
        case(144):
        {
            cout << "\n\nSimple_Code_lesson_(157_STL(Библиотека стандартных шаблонов)_9_SET_MULTISET)\n" << endl;

            cout << "\n\t\t\t\t\tSTL_9_SET_MULTISET\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tset — это контейнер, который автоматически сортирует добавляемые элементы" << endl << endl <<
                "\t      в порядке возрастания.Но при добавлении одинаковых значений, set будет хранить" << endl << endl <<
                "\t      только один его экземпляр.По другому его еще называют множеством." << endl << endl <<

                "\tmultiset — это контейнер, который также будет содержать элементы в отсортированном" << endl << endl <<
                "\t      порядке при добавлении, но он хранит повторяющееся элементы, по сравнению с множеством set." << endl << endl <<
                "\t      Часто его называют мультимножество." << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            set<int>mySet = { 2,5, 44, 6, -2, 43 };

            mySet.insert(5);

            mySet.insert(1);

            mySet.insert(12);

            mySet.insert(4);

            mySet.insert(-1);

            cout << "\t Выводим бинарное дерево mySet - \t";

            for (auto& item : mySet)
            {
                cout << item << "\t";
            }

            cout << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            set<int>mySet1;

            for (int i = 0; i < 20; i++)
            {
                mySet1.insert(rand() % 100);
            }

            cout << "\t Выводим бинарное дерево mySet1 - \t";

            int bb = 0;

            for (auto& item1 : mySet1)
            {
                cout << item1 << "\t";

                bb++;
                if (bb == 5 || bb == 10 || bb == 15)
                {
                    cout << "\n\n\t\t\t\t\t\t";
                }

            }

            cout << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            auto it = mySet.find(5); //ищем число 10, исли его нету то получим  mySet.end() указатель в никуда

           // mySet.end();

            //cout << " ==================================================================================================" << endl << endl;

            int value;

            cout << "\tВведите число для поиска:";

            cin >> value;

            if (mySet.find(value) != mySet.end())
            {
                cout << "\tЧисло: " << value << " найдено!" << endl << endl;
            }
            else
            {
                cout << "\tЧисло: " << value << " отсутствует" << endl << endl;
            }

            cout << " ============================= =====================================================================" << endl << endl;

            cout << "\t Удаление елемента бинарного дерева методм mySet.erase(5)\n\n\t";

            mySet.erase(5);

            mySet.insert(64);

            mySet.erase(4444);// В случае попытки удаления несуществующего числа ничего не произойдет

            auto result = mySet.erase(4444);

            for (auto& item : mySet)
            {
                cout << item << "\t";
            }

            cout << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            multiset<int> myMyltiset = { 1,1,66,16,48,99 };

            cout << "\t Выводим контейнер myMyltiset\n\n\t";

            auto it1 = myMyltiset.lower_bound(1);

            auto it2 = myMyltiset.upper_bound(1);

            auto it3 = myMyltiset.equal_range(1);// возвращает итератор на диапазон .lower_bound - upper_bound

            for (auto& item1 : myMyltiset)
            {
                cout << item1 << "\t";

                bb++;
                if (bb == 5 || bb == 10 || bb == 15)
                {
                    cout << "\n\n\t\t\t\t\t\t";
                }

            }

            cout << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(158_STL(Библиотека стандартных шаблонов)_10_MAP_MULTIMAP)
        case(145):
        {
            cout << "\n\nSimple_Code_lesson_(158_STL(Библиотека стандартных шаблонов)_10_MAP_MULTIMAP)\n" << endl;

            cout << "\n\t\t\t\t\tSTL_9_SET_MULTISET\n\n";

            cout << " ==================================================================================================" << endl << endl;

            cout << "\tКонтейнер map, очень похож на остальные контейнеры, такие как vector, list, deque, но с небольшим отличием." << endl << endl <<
                "\tВ этот контейнер можно помещать сразу два значения.Если у Вас когда - то была мечта написать свой словарь," << endl << endl <<
                "\tто лучше чем map, вам альтернативы не найти." << endl << endl <<

                "\tMultimap - это ассоциативный контейнер, который содержит отсортированный список пар ключ - значение и" << endl << endl <<
                "\tразрешает несколько записей с одним и тем же ключом.Сортировка производится по функции сравнения Compare," << endl << endl <<
                "\tпримененной к клавишам.Операции поиска, вставки и удаления имеют логарифмическую сложность." << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            pair<int, string> p{ 1, "fone" };

            cout << "\tПервый елемент пары:" << p.first << endl << endl;

            cout << "\tВторой елемент пары:" << p.second << endl;

            cout << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            map<int, string> myMap;// { 1, "fone" };

            myMap.insert(make_pair(1, "fone"));

            myMap.insert(pair<int, string>(2, "laptop"));

            myMap.emplace(3, "Монитор");

            myMap.emplace(22, "Клавиатура");

            // myMap.emplace(22, "dfsdf"); // новый елемент добавлен не будет


            cout << "\tПервый елемент пары:" << p.first << endl << endl;

            cout << "\tВторой елемент пары:" << p.second << endl;

            cout << endl << endl;

            cout << " ==================================================================================================" << endl << endl;

            auto it = myMap.find(3);

            if (it != myMap.end())
            {
                cout << "\tВыводим пару при помощи итератора: " << it->first << "\t" << it->second << endl << endl;
            }
            cout << " ==================================================================================================" << endl << endl;

            cout << "\t" << myMap[22] << endl;

            cout << " ==================================================================================================" << endl << endl;

            map<string, int> myMap1;

            myMap1.emplace("Петя", 1313);

            myMap1.emplace("Маша", 222);

            myMap1.emplace("Миша", 4441);

            cout << "\t" << myMap1["Петя"] << endl << endl;

            myMap1["Петя"] = 200;

            cout << "\t" << myMap1["Петя"] << endl << endl;

            myMap1["Вася"] = 963;// Замена или добавление значения

            try
            {
                myMap1.at("коля") = 30;// в случае отсутствия ключа оператор at вызовет исключение
            }
            catch (const std::exception& ex)
            {
                cout << "\t" << ex.what() << endl << endl;
                cout << "\tКлючь отсутствует в контейнере map" << endl << endl;
            }
            cout << " ==================================================================================================" << endl << endl;

            multimap<string, int> myMyltimap;// контейнер multimap может хранить дублирующиеся ключи

            myMyltimap.emplace("Петя", 1313);

            myMyltimap.emplace("Маша", 222);

            myMyltimap.emplace("Миша", 4441);


            auto it2 = myMyltimap.find("Петя");

            if (it2 != myMyltimap.end())
            {
                cout << "\tВыводим пару при помощи итератора: " << it2->first << "\t - " << it2->second << endl << endl;
            }

            cout << " ==================================================================================================" << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(159_STL(Библиотека стандартных шаблонов)_11_Stack_Адаптеры контейнеров)
        case(146):
        {
            cout << "\n\nSimple_Code_lesson_(159_STL(Библиотека стандартных шаблонов)_11_Stack_Адаптеры контейнеров)\n" << endl;

            cout << "\n\t\t\t\t\tStack _Adapter_conteynerow\n\n";

            cout << "\t=================================================================================================================" << endl << endl;


            cout << "\tstd::stack называется адаптером контейнера, который может действовать как оболочка стандартных контейнеров," << endl << endl <<
                "\tно обеспечивает ограниченную и специализированную функциональность.Например, класс std::stack предоставляет" << endl << endl <<
                "\tструктуру данных LIFO(последний вход, первый выход), и он может быть сопоставлен с контейнером std::vector" << endl << endl <<
                "\tили std::deque внизу.std::stack может быть инициализирован другим объектомstack или совместимыми контейнерами" << endl << endl <<
                "\tпоследовательностей, такими как deque, vector и list.Однако обратите внимание, что контейнер по умолчанию," << endl << endl <<
                "\tиспользуемый для хранения элементов stack, -этоdeque.Кроме того, отсутствует конструктор, поддерживающий" << endl << endl <<
                "\tпрямую передачу списка инициализаторов или элементов.Нам нужно использовать метод push после объявления" << endl << endl <<
                "\tобъекта stack." << endl << endl <<

                "\tОбратите внимание, что объект стек не может быть повторен с помощью цикла на основе диапазона.Таким образом," << endl << endl <<
                "\tмы реализуем специальный цикл while для вывода каждого элемента в поток cout.Функция printStack принимает" << endl << endl <<
                "\tаргумент stack, но st1, инициализированный объектом vector, не может быть передан ей, так как типы этих" << endl << endl <<
                "\tдвух объектов различаются и компилятор выдает ошибку." << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            stack<int, vector<int>> st;

            st.push(5);

            st.push(1);

            st.push(12);

            st.push(4);

            st.emplace(-1);

            cout << "\t Последнее значение стека - \t" << st.top() << endl << endl;

            st.pop();// удаление елмента из стека

            cout << "\t Последнее значение стека после st.pop() - \t" << st.top() << endl << endl;

            cout << "\t Выводим содержимое - \t";

            while (!st.empty())
            {
                cout << st.top() << "\t";
                st.pop();
            }


            /*auto a = st._Get_container();

             cout << "\t Выводим содержимое a = deque<int> - \t" << a[0] << endl;*/

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(160_STL(Библиотека стандартных шаблонов)_12_queue_priority queue_Адаптеры контейнеров)
        case(147):
        {
            cout << "\n\nSimple_Code_lesson_(160_STL(Библиотека стандартных шаблонов)_12_queue_priority queue_Адаптеры контейнеров)\n" << endl;

            cout << "\n\t\t\t\t\tQueue _ priority,_Queue\n\n";

            cout << "\t=================================================================================================================" << endl << endl;

            cout << "\tКласс queue - шаблон адаптера контейнера, который предоставляет ограничение функциональности для некоторого" << endl << endl <<
                "\tбазового типа контейнера, ограничивая доступ к его передним и задним элементам.Элементы можно добавлять" << endl << endl <<
                "\tв задней части или удалять с переднего queue края, элементы можно проверять в любом конце элемента.\n" << endl << endl <<

                "\tКласс priority_queue - шаблон адаптера контейнера, который предоставляет ограничение функциональности," << endl << endl <<
                "\tограничивая доступ к верхнему элементу некоторого базового типа контейнера, который всегда является самым" << endl << endl <<
                "\tбольшим или имеет высший приоритет.Новые элементы можно добавить в priority_queue верхний элемент priority_queue," << endl << endl <<
                "\tкоторый можно проверить или удалить." << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            queue<int, list<int>> q;// vector не может быть основой очереди

            q.push(56);

            q.push(4);

            q.push(7);

            q.push(99);

            cout << "\tПоследнее значение очереди -\t" << q.back() << endl << endl;

            cout << "\tПервый елемент очереди -\t" << q.front() << endl << endl;

            cout << "\tElements_count - " << q.size() << "\t" << endl << endl;

            auto a = q._Get_container();

            while (!q.empty())//цикл while работает пока очередь не пуста
            {
                cout << "\tQueue - " << q.front() << "\n\n";
                q.pop();
                cout << "\tElements_count - " << q.size() << "\n\n";

            }

            cout << endl << endl;

            cout << "\t================================================================================================================\t" << endl << endl;

            priority_queue<int> pq;//list not us, only vector and deque

            pq.push(56);

            pq.push(4);

            pq.push(7);

            pq.push(99);

            while (!pq.empty())//цикл while работает пока очередь не пуста
            {
                cout << "\tQueue - " << pq.top() << "\n\n";
                pq.pop();
                cout << "\tElements_count - " << pq.size() << "\n\n";

            }


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(161_STL(Библиотека стандартных шаблонов)_13_Алгоритмы сортировки_Бинарный предикат_Лямбда функции)
        case(148):
        {
            cout << "\n\nSimple_Code_lesson_(161_STL(Библиотека стандартных шаблонов)_13_Алгоритмы сортировки_Бинарный предикат_Лямбда функции)\n" << endl;

            cout << "\n\t\t\t\t\tCopy_copy_if_find\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tАлгоритмы сортировки _ Бинарный предикат _ Лямбда функции _ C " << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;
            
            vector<int> v148 = { 9,4,94,6,1,3,7 };// vector не может быть основой очереди

            cout << "\tVector v148 - ";
            sort(v148.begin(), v148.end(), [](int a, int b) {return a < b; }); // сортировка от начала до конца вектора с использование предикатной функции
            for (auto element : v148)
            {
                cout << element << "\t";
            }

            cout << endl << endl;

            cout << "\t================================================================================================================\t" << endl << endl;

            const int SIZE148 = 7;

            int arr148[SIZE148] = { 9,4,94,6,1,3,7 };// vector не может быть основой очереди

            sort(arr148, arr148 + SIZE148);

            for (auto element : arr148)
            {
                cout << "\t" << element;
            }

            cout << endl << endl;

            cout << "\t================================================================================================================\t" << endl << endl;
            
            vector<Person_148> people_148
            {
                Person_148("Вася",181),
                Person_148("Петя",30),
                Person_148("Маша",179),
                Person_148("Даша",200),
                Person_148("Катя",198),
                Person_148("Андрей",181),
                Person_148("Сергей",50),
                Person_148("Иван",150),
            };

            sort(people_148.begin(), people_148.end(), [](const Person_148 & p1, const Person_148& p2)
                {
                    //return p1.Name < p2.Name;
                    return p1.Score < p2.Score;
                });
            for (auto element : people_148)
            {
                cout << "\tИмя: " << element.Name << "\tбалы: " << element.Score << endl << endl;
            }
            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(162_STL(Библиотека стандартных шаблонов)_14_Алгоритмы_поиска_find_|_find_if_|_find_if_not)
        case(149):
        {
            cout << "\n\nSimple_Code_lesson_(162_STL(Библиотека стандартных шаблонов)_14_Алгоритмы_поиска_find_|_find_if_|_find_if_not)\n" << endl;

            cout << "\n\t\t\t\t\t find _ find_if _ find_if_not\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tАлгоритмы поиска  find _ find_if _ find_if_not " << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;
            
            vector<int> v = { 8,13,92,6,2,4,10 };// vector не может быть основой очереди

            cout << "\tАлгоритмы поиска  find " << endl << endl;

            auto result = find(v.begin(), v.end(), 12);

            if (result == v.end())
            {
                cout << "\tИскомое число отсутствует" << endl << endl;
            }
            else
            {
                cout << "\tИскомое число присутствует" << endl << endl;
            }

            cout << "\t================================================================================================================" << endl << endl;

            auto result1 = find_if(v.begin(), v.end(), [](int a)
                {
                    //return a % 2 == 0;
                    //return a % 2 != 0;
                    //return a % 2 > 0;
                    //return a % 2 < 0;
                   // return a % 2 < 0;
                    return a == 7;

                });

            cout << "\tАлгоритмы поиска  find_if " << endl << endl;


            if (result1 == v.end())
            {
                cout << "\tИскомое число отсутствует" << endl << endl;
            }
            else
            {
                cout << "\tИскомое число присутствует" << endl << endl;
            }

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tАлгоритмы поиска  find_if_not " << endl << endl;

            auto result2 = find_if_not(v.begin(), v.end(), [](int a)
                {
                    //return a % 2 == 0;
                    //return a % 2 != 0;
                    //return a % 2 > 0;
                    //return a % 2 < 0;
                   // return a % 2 < 0;
                   // return a == 7;
                    return a < 0;
                });//инвертирование результата

            if (result2 == v.end())
            {
                cout << "\tИскомое число отсутствует" << endl << endl;
            }
            else
            {
                cout << "\tИскомое число присутствует" << endl << endl;
            }

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tАлгоритмы поиска  find_if в  vector<Person> people" << endl << endl;
            
            vector<Person149> people
            {
                Person149("Вася",181),
                Person149("Петя",30),
                Person149("Маша",179),
                Person149("Даша",200),
                Person149("Катя",198),
                Person149("Андрей",181),
                Person149("Сергей",50),
                Person149("Иван",150),
            };
            
            auto result3 = find_if(people.begin(), people.end(), [](const Person149 & p)
                {
                    // return p.Name == "Маша";
                    // return p.Score == 50;
                    // return p.Score == 50 && p.Name =="Сергей";
                    return p.Score == 51 || p.Name == "Сергей";

                });

            if (result3 == people.end())
            {
                cout << "\tИскомый запрос отсутствует" << endl << endl;
            }
            else
            {
                cout << "\tИскомый запрос присутствует" << endl << endl;
            }
            cout << "\t================================================================================================================" << endl << endl;
            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(163_STL(Библиотека стандартных шаблонов)_15_Сopy_|_stl_copy_if_|_Выборка_данных_по_условию)
        case(150):
        {
            cout << "\n\nSimple_Code_lesson_(163_STL(Библиотека стандартных шаблонов)_15_Сopy_|_stl_copy_if_|_Выборка_данных_по_условию)\n" << endl;

            cout << "\n\t\t\t\t\t STL_15_stl copy _ stl copy_if\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tАлгоритмы поиска  copy_if " << endl << endl;

            vector<Person150> people150
            {
                Person150("Вася",181,17),
                Person150("Петя",30,22),
                Person150("Маша",179,19),
                Person150("Даша",205,25),
                Person150("Катя",198,24),
                Person150("Андрей",181,23),
                Person150("Сергей",50,30),
                Person150("Денис",180,40),
                Person150("Иван",150,32),
                Person150("Иван",199,31),
                Person150("Петя",1000,53),
            };

            vector<Person150> result;
            vector<Person150> result2;

            copy(people150.begin(), people150.end(), back_inserter(result));

            auto result3 = find_if(people150.begin(), people150.end(), [](const Person150& p)
                {
                    // return p.Name == "Маша";
                    // return p.Score == 50;
                    // return p.Score == 50 && p.Name =="Сергей";
                    return p.Score == 51 || p.Name == "Сергей";
                });

            if (result3 == people150.end())
            {
                cout << "\tИскомый запрос отсутствует" << endl << endl;
            }
            else
            {
                cout << "\tИскомый запрос присутствует" << endl << endl;
            }
            cout << "\t================================================================================================================" << endl << endl;

            copy_if(people150.begin(), people150.end(), back_inserter(result2), [](const Person150& p)
                {
                    //return p.Name =="Иван";
                    //return p.Score >100;
                    return p.Age > 35 && p.Score > 200 && p.Name == "Петя";
                });

            sort(result2.begin(), result2.end(), [](const Person150& p1, const Person150& p2)
                {
                    // return p1.Age < p2.Age;
                    return p1.Name < p2.Name;
                });

            for (auto element : result2)
            {
                cout << "\tИмя:\t" << element.Name << "\tбаллы\t" << element.Score << "\tвозраст\t" << element.Age << endl << endl;
            }

            cout << "\tВсего елементов:\t" << result2.size() << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tВсего елементов:\t" << result.size() << endl;

            for (auto element : result)
            {
                cout << "\tИмя:\t" << element.Name << "\tбаллы\t" << element.Score << endl << endl;
            }

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(164_STL(Библиотека стандартных шаблонов)_16_remove_|_stl_remove_if_|_stl_удаление элемента по условию)
        case(151):
        {
            cout << "\n\nSimple_Code_lesson_(164_STL(Библиотека стандартных шаблонов)_16_remove_|_stl_remove_if_|_stl_удаление элемента по условию)\n" << endl;

            cout << "\n\t\t\t\t\t stl remove _ remove_if _ удаление элемента по условию _ Библиотека\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tУдаление элемента по условию  " << endl << endl;

            vector<int> v151 = { 5,9,1,46,4,9,4 };

            auto result = remove(v151.begin(), v151.end(), 9);//указынные значения перемещает в конец вектора

            v151.erase(result, v151.end());//удаление все елементы с вектора v.end()с ненужного до конца вектора

            cout << "\t================================================================================================================" << endl << endl;

            vector<Person151> people151
            {
                Person151("Вася",181,17),
                Person151("Петя",30,22),
                Person151("Маша",179,19),
                Person151("Даша",205,25),
                Person151("Катя",198,24),
                Person151("Андрей",181,23),
                Person151("Сергей",50,30),
                Person151("Денис",180,40),
                Person151("Иван",150,32),
                Person151("Иван",199,31),
                Person151("Петя",1000,53),
            };

            cout << "\tВсего елементов:\t" << people151.size() << endl;

            people151.erase(remove_if(people151.begin(), people151.end(), [](const Person151& p) {return p.Score < 50 && p.Age == 30; }), people151.end());

            for (auto element : people151)
            {
                cout << "\tИмя:\t" << element.Name << "\tбаллы\t" << element.Score << "\tвозраст\t" << element.Age << endl << endl;
            }

            cout << "\tВсего елементов:\t" << people151.size() << endl;

            cout << "\t================================================================================================================" << endl << endl;

            string str = "\tТекст с несколькими  пробелами";

            cout << str << endl << endl;

            str.erase(remove(str.begin(), str.end(), ' '), str.end());

            cout << str << endl;

            cout << endl << endl;



            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tSTL_remove _ stl remove_if _ stl удаление элемента по условию" << endl << endl;

            int arr[] = { 11,10,3,4,5,7 };

            int arr2[] = { 10,3,4,5,7,11 };

            sort(begin(arr), end(arr));

            sort(begin(arr2), end(arr2));

            bool result151 = equal(begin(arr), end(arr), begin(arr2), end(arr2));// алгоритм проверяет нахождение по тем же самым индексам тех же елементов  

            result151 == 1 ? cout << "\tКоллекции (массивов) равны!\t" << endl << endl : cout << "\tКоллекции (массивов) не равны!\t" << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            vector<int> arr3 = { 10,3,4,5,7,11 };

            vector<int> arr4 = { 10,3,4,5,7,11 };

            bool result2 = equal(begin(arr2), end(arr2), begin(arr3), end(arr3));

            result2 == 1 ? cout << "\tКоллекциb (vector) равны!\t" << endl << endl : cout << "\tКоллекций (vector) не равны!\t" << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tАлгоритм mismatch который возвращает несоответствие!\t" << endl << endl;

            vector<int> arr5 = { 11,3,4,5,6,7,10 };

            vector<int> arr6 = { 1,3,4,5,6,7,10 };

            auto result3 = mismatch(begin(arr5), end(arr5), begin(arr6), end(arr6));// алгоритм проверяет нахождение по тем же самым индексам тех же елементов  

            (result3.first == end(arr5)) && (result3.second == end(arr6)) ? cout << "\tКоллекции (массивов) равны!\t" << endl << endl : cout << "\tКоллекции (массивов) не равны!\t" << endl << endl;


            cout << "\t================================================================================================================" << endl << endl;


            break;
        }
        // Simple_Code_lesson_(165_STL(Библиотека стандартных шаблонов)_17_Поиск_максимального_элемента_|_max_element)
        case(152):
        {
            cout << "\n\nSimple_Code_lesson_(165_STL(Библиотека стандартных шаблонов)_17_Поиск_максимального_элемента_|_max_element)\n" << endl;

            cout << "\n\t\t\t\t\tПоиск максимального элемента _ max_element c _ Библиотека стандартных шаблонов\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tУдаление элемента по условию  " << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            vector<int> v152 = { 10, 1, -55, 11, 13, 58 };

            list<int> lst152 = { 4, 7, 77, -3, 44, 74 };

            auto result152 = max_element(v152.begin(), v152.end());

            auto result2_152 = max_element(lst152.begin(), lst152.end());

            cout << "\t" << *result152 << endl << endl;

            cout << "\t" << *result2_152 << endl << endl;

            const int size = 6;

            int arr152[size] = { 10, 1, -55, 11, 13, 58 };

            auto result3_152 = max_element(arr152, arr152 + 6);

            cout << "\t" << *result3_152 << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(166_STL(Библиотека стандартных шаблонов)_18_Поиск_минимального_элемента_|_min_element)
        case(153):
        {
            cout << "\n\nSimple_Code_lesson_(166_STL(Библиотека стандартных шаблонов)_18_Поиск_минимального_элемента_|_min_element)\n" << endl;

            cout << "\n\t\t\t\t\tПоиск минимального элемента _ min_element c _ Библиотека стандартных шаблонов\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            vector<int> v153 = { 10, 1, -55, 11, 13, 58 };

            list<int> lst153 = { 4, 7, 77, -3, 44, 74 };

            auto result_153 = min_element(v153.begin(), v153.end());

            auto result2_153 = min_element(lst153.begin(), lst153.end());

            cout << "\t" << *result_153 << endl << endl;

            cout << "\t" << *result2_153 << endl << endl;

            const int size = 6;

            int arr153[size] = { 10, 1, -55, 11, 13, 58 };

            auto result3_153 = min_element(arr153, arr153 + size);

            cout << "\t" << *result3_153 << endl << endl;

            auto result4_153 = minmax_element(v153.begin(), v153.end());

            cout << "\tmin:\t" << *result4_153.first << "\tmax:\t" << *result4_153.second << endl << endl;


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(167_STL(Библиотека стандартных шаблонов)_19_Accumulate_c++_|_сумма_и_произведение_элементов_массива )
        case(154):
        {
            cout << "\n\nSimple_Code_lesson_(167_STL(Библиотека стандартных шаблонов)_19_Accumulate_c++_|_сумма_и_произведение_элементов_массива )\n" << endl;


            cout << "\n\t\t\t\t\tAccumulate c _ сумма и произведение элементов массива _ Библиотека (stl) C #19\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tCумма и произведение элементов массива" << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            vector<int> v = { 2, 3, 4, 5, 7, 10 };

            auto result = accumulate(v.begin(), end(v), 0);

            cout << "\tRESULT\t" << result << endl;

            cout << "\t================================================================================================================" << endl << endl;

            auto result1 = accumulate(v.begin(), end(v), 1, [](int a, int b)
                {
                    return a * b;
                });

            cout << "\tRESULT\t" << result1 << endl;

            cout << "\t================================================================================================================" << endl << endl;

            auto result2 = accumulate(v.begin(), end(v), 0, [](int a, int b)
                {
                    if (b % 2 == 0)
                    {
                        return a + b;
                    }
                    else
                    {
                        return a;
                    }
                });

            cout << "\tRESULT\t" << result2 << endl;

            cout << "\t================================================================================================================" << endl << endl;

            auto result3 = accumulate(next(v.begin()), end(v), to_string(v[0]), [](string a, int b)
                {
                    return a + "-" + to_string(b);
                });

            cout << "\tRESULT\t" << result3 << endl;


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(168_STL(Библиотека стандартных шаблонов)_20_Equal_и_mismatch_|_Сравнение_массивов )
        case(155):
        {
            cout << "\n\nSimple_Code_lesson_(168_STL(Библиотека стандартных шаблонов)_20_Equal_и_mismatch_|_Сравнение_массивов )\n" << endl;

            cout << "\n\t\t\t\t\tAequal_predicate\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tEqual predicate" << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;
            vector<Point155> arr
            {
                Point155(1,3),
                Point155(4,5),
                Point155(5,7),
            };

            vector<Point155> arr2
            {
                Point155(1,3),
                Point155(4,5),
                Point155(5,7),
            };

            // алгоритм equal сравнивает индексы и последовательности

            bool result = equal(begin(arr), end(arr), begin(arr2), end(arr2), [](const Point155& p1, const Point155& p2)
                {
                    return p1.x == p2.x && p1.y == p2.y;
                });

            result == 1 ? cout << "\tКоллекции равны!" << endl << endl : cout << "\tКоллекции не равны!" << endl << endl;

            vector<int> v155 = {2, 3, 4, 5, 7, 10};

            auto result155 = accumulate(v155.begin(), end(v155), 0);

            cout << "\tRESULT\t" << result155 << endl;

            cout << "\t================================================================================================================" << endl << endl;
            
            auto result1_155 = accumulate(v155.begin(), end(v155), 1, [](int a, int b)
                {
                    return a * b;
                });

            cout << "\tRESULT\t" << result1_155 << endl;

            cout << "\t================================================================================================================" << endl << endl;

            auto result2_155 = accumulate(v155.begin(), end(v155), 0, [](int a, int b)
                {
                    if (b % 2 == 0)
                    {
                        return a + b;
                    }
                    else
                    {
                        return a;
                    }
                });

            cout << "\tRESULT\t" << result2_155 << endl;

            cout << "\t================================================================================================================" << endl << endl;

            auto result3_155 = accumulate(next(v155.begin()), end(v155), to_string(v155[0]), [](string a, int b)
                {
                    return a + "-" + to_string(b);
                });

            cout << "\tRESULT\t" << result3_155 << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(169_STL(Библиотека стандартных шаблонов)_21_Equal_predicate )
        case(156):
        {
            cout << "\n\nSimple_Code_lesson_(169_STL(Библиотека стандартных шаблонов)_21_Equal_predicate )\n" << endl;

            cout << "\n\t\t\t\t\tfor_each\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tfor_each" << endl << endl;
            
            int arr156[] = { 1,2,10,55 };
            
            for_each(begin(arr156), end(arr156), function156);

            cout << endl << endl;
            
            for (auto a : arr156)
            {
                function156(a);
            }

            cout << endl << endl;
            
            cout << "\t================================================================================================================" << endl << endl;

            for_each(begin(arr156), end(arr156), [](int a) { cout << "\t" << a; });// передача по значению каждый елемент коллекции копируется в эту переменную

            cout << endl << endl;

            for (auto a : arr156)
            {
                function156(a);
            }

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            for_each(begin(arr156), end(arr156), [](int& a) { cout << "\t" << a; a++; });// передача по значению каждый елемент коллекции копируется в эту переменную

            cout << endl << endl;

            for (auto& a : arr156)
            {
                function156(a);
            }
            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(170_STL(Библиотека стандартных шаблонов)_22_Алгоритм_for_each)
        case(157):
        {
            cout << "\n\nSimple_Code_lesson_(170_STL(Библиотека стандартных шаблонов)_22_Алгоритм_for_each)\n" << endl;

            cout << "\tfor_each" << endl << endl;

            vector<int> v = { 1,2,2,2,5,4,4 };

            auto result1 = unique(begin(v), end(v));// алгоритм unique отсортировует нужные и не нужные елементы и указывает границу

            v.erase(result1, v.end());

            /*for_each(begin(v), result1, [](int a1)
                {
                    cout << "\t" << a1;
                });*/

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tfor_each" << endl << endl;

            vector<int> v1 = { 1,2,2,2,5,4,4 };

            list<int> v2;

            unique_copy(begin(v), end(v), back_inserter(v2));

            auto result2 = unique(begin(v), end(v));// алгоритм unique отсортировует нужные и не нужные елементы и указывает границу

            v.erase(result2, v.end());

            for_each(begin(v), result2, [](int a1)
                {
                    cout << "\t" << a1;
                });

            cout << endl << endl;


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(171_STL(Библиотека стандартных шаблонов)_23_Unique_|_Удалить повторяющиеся элементы )
        case(158):
        {
            cout << "\n\nSimple_Code_lesson_(171_STL(Библиотека стандартных шаблонов)_23_Unique_|_Удалить повторяющиеся элементы )\n" << endl;

            cout << "\n\t\t\t\t\tUnique _ Удалить повторяющиеся элементы _ Библиотека стандартных шаблонов\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tfor_each" << endl << endl;

            int arr[] = { 1,2,2,2,5,4,4 };

            auto result = unique(begin(arr), end(arr));// алгоритм unique отсортировует нужные и не нужные елементы и указывает границу

            for_each(begin(arr), result, [](int a)
                {
                    cout << "\t" << a;
                });

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;

            

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(171_STL(Библиотека стандартных шаблонов)_24_Отсортировать_массив_в_случайном порядке_|_random_shuffle)
        case(159):
        {
            cout << "\n\nSimple_Code_lesson_(171_STL(Библиотека стандартных шаблонов)_24_Отсортировать_массив_в_случайном порядке_|_random_shuffle)\n" << endl;

            cout << "\n\t\t\t\t\tRandom_shuffle\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tRandom_shuffle" << endl << endl;

            int arr[] = { 1,2,3,4,5 };

            srand(time(NULL));

            random_shuffle(begin(arr), end(arr));// рандомное расположение елементов коллекции

            for (auto el : arr)
            {
                cout << "\t" << el;
            }

            cout << endl << endl;

            cout << "\t================================================================================================================" << endl << endl;


            IAction* arr1[] =
            {
            new CatAction(),
            new DogAction(),
            new TeaAction(),
            new SleepAction()

            };
            random_shuffle(begin(arr1), end(arr1));// рандомное расположение елементов коллекции

            for (auto& element : arr1)
            {
                element->Action();
            }


            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(172_Многопоточное программирование (thread)_1_Многопоточность)
        case(160):
        {
            cout << "\n\nSimple_Code_lesson_(172_Многопоточное программирование (thread)_1_Многопоточность)\n" << endl;


            cout << "\n\t\t\t\t\tМногопоточность _ Потоки _ thread _ Многопоточное программирование \n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tМногопоточность _ Потоки _ thread _ Многопоточное программирование " << endl << endl;

            /*cout << "\tSTART MAIN" << endl << endl;

            this_thread::sleep_for(chrono::milliseconds(1000));

            cout << "\tИдентификатор потока - " << this_thread::get_id() << endl << endl;

            cout << "\tEND_MAIN" << endl;*/
            //DoWork();

            thread th(DoWork160);// отдельный поток для функции

            thread th2(DoWork160);

            //th.detach();// поток пожет выполнятся самостоятельно, если поток что-то делал он просто оборвётся



            for (size_t i = 0; i < 10; i++)
            {
                cout << " ID потока = " << this_thread::get_id() << "\tmain\t" << i << endl;
                this_thread::sleep_for(chrono::milliseconds(500));
            }

            th.join();// метод позволяет дождатся выполнения конца работы потока, ондолжен находится в соответствующемместе кода
            // основной метод тоже блокируется
            th2.join();
            cout << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(173_Многопоточное программирование (thread)_2_Потоки с параметрами)
        case(161):
        {
            cout << "\n\nSimple_Code_lesson_(173_Многопоточное программирование (thread)_2_Потоки с параметрами)\n" << endl;


            cout << "\n\t\t\t\t\tМногопоточность _ Потоки с параметрами \n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tПотоки с параметрами" << endl << endl;

            thread th(DoWork161, 2, 3, "Our message");// отдельный поток для функции

            //thread th2(DoWork161);

            //th.detach();// поток пожет выполнятся самостоятельно, если поток что-то делал он просто оборвётся

           // DoWork161(2, 3);

            for (size_t i = 0; i < 30; i++)
            {
                cout << "\tID потока = " << this_thread::get_id() << "\tmain\t" << i << endl;
                this_thread::sleep_for(chrono::milliseconds(500));
            }

            th.join();// метод позволяет дождатся выполнения конца работы потока, ондолжен находится в соответствующемместе кода
            // основной метод тоже блокируется

            //th2.join();

            cout << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(174_Многопоточное программирование (thread)_3_Возврат результата из потока по ссылке)
        case(162):
        {
            cout << "\n\nSimple_Code_lesson_(174_Многопоточное программирование (thread)_3_Возврат результата из потока по ссылке)\n" << endl;

            cout << "\n\t\t\t\t\tМногопоточность _ Возврат результата из потока по ссылке  \n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tВозврат результата из потока по ссылке " << endl << endl;

            int q = 5;

            thread t(DoWork162, std::ref(q));// отдельный поток для функции/ std::ref(q) работает с потоком через ссылку

            for (size_t i = 0; i < 10; i++)
            {
                cout << "\tID потока = " << this_thread::get_id() << "\tmain\t" << i << endl << endl;
                this_thread::sleep_for(chrono::milliseconds(500));
            }

            t.join();

            cout << "\tПеременная q = " << q << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(175_Многопоточное программирование (thread)_4_Лямбда выражения и возврат результата выполнения потока)
        case(163):
        {
            cout << "\n\nSimple_Code_lesson_(175_Многопоточное программирование (thread)_4_Лямбда выражения и возврат результата выполнения потока)\n" << endl;

            cout << "\n\t\t\t\t\tЛямбда выражения и возврат результата выполнения потока\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tЛямбда выражения и возврат результата выполнения потока" << endl << endl;

            int result;

            thread t([&result]() {result = Sum163(2, 5); });
            //cout << "\tSum result: " << result << endl << endl;

            for (size_t i = 0; i < 10; i++)
            {
                cout << "\tID потока = " << this_thread::get_id() << "\tmain\t" << i << endl << endl;
                this_thread::sleep_for(chrono::milliseconds(500));
            }

            t.join();

            cout << "\tSum result: " << result << endl << endl;

            cout << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(176_Многопоточное программирование (thread)_5_Потоки и методы класса)
        case(164):
        {
            cout << "\n\nSimple_Code_lesson_(176_Многопоточное программирование (thread)_5_Потоки и методы класса)\n" << endl;

            cout << "\n\t\t\t\t\tPotoki_i_metodu_classa\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tПногопоточное програмирование" << endl << endl;

            int result1 = 0;
            int result2 = 0;
            int result3 = 0;

            MyClass164 m;

            thread t2([&]() {result2 = m.DoWork2164(2); });

            //thread t2(&MyClass::DoWork2, m, 5);

            thread t1(&MyClass164::DoWork164, m);

            //thread t([&]() {m.DoWork(); });

            thread t3([&]() {result3 = m.Sum164(2, 5); });//лямда функция может захватывать в контекст всё что выше неё находится 
            cout << "\tSum_result3: " << result3 << endl << endl;

            for (size_t i = 0; i < 10; i++)//основная задача
            {
                cout << "\tID потока = " << this_thread::get_id() << "\tmain\t" << i << endl << endl;
                this_thread::sleep_for(chrono::milliseconds(500));
            }

            t1.join();
            t2.join();
            t3.join();

            //cout << "\tResult = " << result << endl << endl;

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(177_Многопоточное программирование (thread)_6_Что_такое_mutex_|_Cинхронизация потоков)
        case(165):
        {
            
            cout << "\n\nSimple_Code_lesson_(177_Многопоточное программирование (thread)_6_Что_такое_mutex_|_Cинхронизация потоков)\n" << endl;

            cout << "\n\t\t\t\t\tPotoki_i_metodu_classa\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tПногопоточное програмирование" << endl << endl;            
            
            SimpleTimerMutex165 timer165;

            thread t1(Print165, '*');

            thread t2(Print165, '#');

            thread t3(Print165, '@');

            t1.join();

            t2.join();

            t3.join();

            timer165.~SimpleTimerMutex165();            
            
            cout << endl << endl;            
            
            break;
        }
        // Simple_Code_lesson_(178_Многопоточное программирование (thread)_7_lock_guard_mutex_|_Cинхронизация потоков)
        case(166):
        {
            cout << "\n\nSimple_Code_lesson_(178_Многопоточное программирование (thread)_7_lock_guard_mutex_|_Cинхронизация потоков)\n" << endl;
            
            cout << "\n\t\t\t\t\tLock_guard\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tLock_guard" << endl << endl;
            
            SimpleTimerMutex165 timer166;

            thread t1(Print166, '*');

            thread t2(Print166, '#');

            thread t3(Print166, '@');

            t1.join();

            t2.join();

            t3.join();

            timer166.~SimpleTimerMutex165();
            
            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(179_Многопоточное программирование (thread)_8_Deadlock_Взаимная_блокировка )
        case(167):
        {
            cout << "\n\nSimple_Code_lesson_(179_Многопоточное программирование (thread)_8_Deadlock_Взаимная_блокировка )\n" << endl;
            
            cout << "\n\t\t\t\t\tDeadlock \n\n";

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\tDeadlock " << endl << endl;

            SimpleTimerMutex165 timer167;

            thread t1(Print_167);

            thread t2(Print2_167);

            t1.join();

            t2.join();

            timer167.~SimpleTimerMutex165();
            
            cout << endl << endl;
            
            break;
        }
        // Simple_Code_lesson_(180_Многопоточное программирование (thread)_9_Recursive_mutex_|_Рекурсивный_мьютекс)
        case(168):
        {
            cout << "\n\nSimple_Code_lesson_(180_Многопоточное программирование (thread)_9_Recursive_mutex_|_Рекурсивный_мьютекс)\n" << endl;

            cout << "\t================================================================================================================" << endl << endl;

            cout << "\trecursive_mutex C _ Рекурсивный мьютекс" << endl << endl;

            thread t1168(Foo168, 10);

            thread t2168(Foo168, 10);

            t1168.join();

            t2168.join();

            cout << endl << endl;

            break;
        }
        // Simple_Code_lesson_(181_Многопоточное программирование (thread)_10_unique_lock_mutex_|_unique_lock_vs_lock_guard)
        case(169):
        {
            cout << "\n\nSimple_Code_lesson_(181_Многопоточное программирование (thread)_10_unique_lock_mutex_|_unique_lock_vs_lock_guard)\n" << endl;

            cout << "\n\t\t\t\t\tunique_lock mutex _ unique_lock vs lock_guard\n\n";

            cout << "\t================================================================================================================" << endl << endl;

            SimpleTimerMutex165 timer169;

            thread t1(Print_169, '*');

            thread t2(Print_169, '#');

            t1.join();

            t2.join();

            timer169.~SimpleTimerMutex165();

            cout << endl << endl;

            cout << endl << endl;

            break;
        }
        default:
        {
            cout << " Введите только предлагаемые числа с 0 до 169 !!! ";
            cout << " " << endl;
            cin >> values;
        }
        }
        }
        goto tryAgain;        
    } while (values > 0);
    system("PAUSE");
    cin.get();
exit_1:    return 0;
}
