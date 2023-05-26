#include <windows.h>
#include <iostream>
// https://github.com/HTS69
// F
#define VK_F 0x46

// 3
#define VK_3 0x33

// Mouse Right
#define VK_RBUTTON 0x02

// 1
#define VK_1 0x31

int main()
{
    std::cout << "Minecraft Demons Fishing Rod Macro" << std::endl;
    system("color a");

    while (true)
    {
        if (GetAsyncKeyState(VK_F) & 0x8000)
        {
            // F
            keybd_event(VK_3, 0, 0, 0);  // 3'e basma
            keybd_event(VK_3, 0, KEYEVENTF_KEYUP, 0);

            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);  // Mouse Right
            Sleep(500);  // 0.5 saniye bekleme
            mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);  // Mouse Right

            keybd_event(VK_1, 0, 0, 0);  // 1
            keybd_event(VK_1, 0, KEYEVENTF_KEYUP, 0);
        }
    }

    return 0;
}