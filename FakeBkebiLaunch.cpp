#include <iostream>
#include <string>
#include <windows.h>
#include <random>
#include <thread>
#include <chrono>
#include <stdexcept>
#include <cstdlib>
#include <filesystem>
#include <fstream>
using namespace std;
int main()
{
    // 创建一个随机设备
    std::random_device rd;

    // 用随机设备初始化一个mt19937生成器
    std::mt19937 gen(rd());

    // 创建一个从A到Z和a到z和0到9和+/=的均匀分布
    std::uniform_int_distribution<> dis(0, 63);

    // 生成44个随机字符
    std::string s;
    for (int i = 0; i < 44; ++i) {
        int r = dis(gen);
        if (r < 26) {
            s += 'A' + r;
        }
        else if (r < 52) {
            s += 'a' + r - 26;
        }
        else if (r < 62) {
            s += '0' + r - 52;
        }
        else if (r == 62) {
            s += '+';
        }
        else {
            s += '=';
        }
    }
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 2);
    cout << R"(               ,,*(((((((*,
             *//((((( ((((((,              ____  _        _     _
           *///*((((((((( ((((,           |  _ \| |      | |   (_)
         ,////,(((((((&&&((  ((,          | |_) | | _____| |__  _
        ,//////,((((((&&&&((((((,         |  _ <| |/ / _ \ '_ \| |
        ,,/////,(((( ((&&&((((((,         | |_) |   <  __/ |_) | |
        *,,/////*((((( (((((((((*         |____/|_|\_\___|_.__/|_|
         ,,,,/////,((((((((((((,         Proudly Free, Never For Sale
             *,/////,*((((((*

This is your HWID: [)";
    cout << s << "]";
    SetConsoleTextAttribute(hConsole, 11);
    cout << R"(
Copy HWID above and be sure to generate your free key at Bkebi Discord! <3
        ----------------8<------------------------------------------)";
    cout << endl << "Logs:" << endl;
    cout << "[Info][main.cpp:92] Looking for Crack.LIC";
    this_thread::sleep_for(chrono::seconds(4)); // 等待1秒
    const char* p = "Crack.LIC"; // 要检查的文件名
    std::fstream file(p);
    if (file.good()) // 检查文件是否成功打开
    {
        std::cout <<endl<< "[Info] [main.cpp             :151  ] License is valid! Thanks for using BKEBI!\n";
        file.close();
    }
    else
    {
        std::cout <<endl<< p << "[Info] [main.cpp            :153  ] License is not found ! \n";
        MessageBox(NULL,L"There is a problem with the Crack.LIC, please makesure you got it from Bkebi Discord Retry ? Cancel will end Bkebi", L"Bkebi", MB_OK | MB_ICONERROR); // 弹出假的错误信息
        file.close();
        return 0;
    }
    ifstream files; // 创建一个ifstream对象
    files.open("Crack.LIC"); // 打开Crack.LIC文件
    if (files.is_open()) // 检查文件是否成功打开
    {
        string a; // 创建一个字符串变量a
        while (getline(files, a)) // 读取文件中的每一行，并存储到a中
        {
            cout << a << endl; // 输出a的内容
        }
        files.close(); // 关闭文件
    }
    this_thread::sleep_for(chrono::seconds(3)); // 等待1秒
    cout << R"([Info] [main.cpp             :323  ] UserAssembly.dll isn't initialized, waiting for 5 sec.
[Info] [main.cpp             :330  ] Waiting 20.000 sec for game to initialize.
                                       If Genshin crashes after this line, try longer delay in <cfg.ini>.)" << "\n";
    this_thread::sleep_for(chrono::seconds(6)); // 等待1秒
    cout << R"([Error] [ProtectionBypass.cpp :90   ] closed mhyprot2 handle! Happy hacker of Genshin
[Info] [InteractiveMap.cpp   :1371 ] Interactive map data loaded successfully.
[Info] [renderer.cpp         :214  ] Initializing ImGUI.
[Info] [main.cpp             :342  ] Config path is at cfg.json
[Warn] [GameSpeed.cpp        :76   ] Exception 0xc0000005.
[Warn] [GameSpeed.cpp        :76   ] Exception 0xc0000005.
[Info] [renderer.cpp         :493  ] ImGUI: DirectX11 backend initialized successfully.)";
    this_thread::sleep_for(chrono::seconds(5)); // 等待1秒
    return 0;
}