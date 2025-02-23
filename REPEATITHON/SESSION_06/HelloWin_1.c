#include <Windows.h> 

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam); 

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int nShowCmd) 
{
    static TCHAR szClassName[] = TEXT("The Standard Window"); 
    static TCHAR szAppName[] = TEXT("Sarthak Jaiswal"); 

    WNDCLASSEX wnd; 
    MSG msg; 

    HWND hwnd; 

    memset(&wnd, 0, sizeof(wnd)); 
    memset(&msg, 0, sizeof(msg)); 

    wnd.cbSize = sizeof(wnd); 
    wnd.cbClsExtra = 0; 
    wnd.cbWndExtra = 0; 
    wnd.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH); 
    wnd.hCursor = LoadCursor(NULL, IDC_ARROW); 
    wnd.hIcon = LoadIcon(NULL, IDI_APPLICATION); 
    wnd.hIconSm = LoadIcon(NULL, IDI_APPLICATION); 
    wnd.hInstance = hInstance; 
    wnd.lpfnWndProc = WndProc; 
    wnd.lpszClassName = szClassName; 
    wnd.lpszMenuName = NULL; 
    wnd.style = CS_HREDRAW | CS_VREDRAW; 

    RegisterClassEx(&wnd); 

    hwnd = CreateWindowEx(
            WS_EX_APPWINDOW, 
            szClassName, 
            szAppName, 
            WS_OVERLAPPEDWINDOW, 
            CW_USEDEFAULT, 
            CW_USEDEFAULT, 
            CW_USEDEFAULT, 
            CW_USEDEFAULT, 
            NULL, 
            NULL, 
            hInstance, 
            NULL 
        ); 

    ShowWindow(hwnd, nShowCmd); 
    UpdateWindow(hwnd); 

    while(GetMessage(&msg, NULL, 0, 0)) 
    {
        TranslateMessage(&msg); 
        DispatchMessage(&msg); 
    }

    return (msg.wParam); 
}

LRESULT CALLBACK WndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) 
{
    switch(uMsg) 
    {
        case WM_DESTROY: 
            PostQuitMessage(0); 
            break; 

        default: 
            break; 
    }

    return (DefWindowProc(hwnd, uMsg, wParam, lParam)); 
}

