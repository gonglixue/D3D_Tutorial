/*
#include <Windows.h>
#include <windowsx.h>

// the WindowProc function prototype
LRESULT CALLBACK WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);

// the entry point for any Windows program
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	// the handle for the window, filled by a function
	HWND hWnd;
	// this struct holds information for the window class
	WNDCLASSEX wc;

	// clear out the window class for use
	ZeroMemory(&wc, sizeof(WNDCLASSEX));

	// fill in the struct with the needed information
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.lpfnWndProc = WindowProc;
	wc.hInstance = hInstance;
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	wc.hbrBackground = (HBRUSH)COLOR_WINDOW;
	wc.lpszClassName = L"WindowClass1";

	// register the window class
	RegisterClassEx(&wc);

	// create the window and use the result as the handle
	hWnd = CreateWindowEx(NULL,
		L"WindowClass1",  // name of the window class
		L"Our First Windowed Program", // title of the window
		WS_OVERLAPPEDWINDOW, // window style
		300, // x-position of the window
		300, // y-position of the window
		500, // width of the window
		400, // height of the window
		NULL, // we have no parent window
		NULL, // we aren'tusing menus,
		hInstance,  // application handle
		NULL  // used with multiple windows
	);

	// display the window on the screen
	ShowWindow(hWnd, nCmdShow);

	// enter the main loop
	// this struct holds Windows event messages
	MSG msg;

	// wait for the next message in the queue, store the result in 'msg'
	while (GetMessage(&msg, NULL, 0, 0))
	{
		// translate keystroke message into the right format
		TranslateMessage(&msg);
		// send the message to the WindowProc function
		DispatchMessage(&msg);

	}

	return msg.wParam;
}

LRESULT CALLBACK _3WindowProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
	switch (message)
	{
	case WM_DESTROY:
	{
		// close the application entirely
		PostQuitMessage(0);
		return 0;
	}
	break;
	}


	// handle any messages the switch statement didn't
	return DefWindowProc(hWnd, message, wParam, lParam);
}*/