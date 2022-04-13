#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	int ClickerTimesInClick;
	int ClickerSpeedClick;
	int MainNumber = 0;

	HANDLE GREEN = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(GREEN, FOREGROUND_GREEN);
	cout << "The AutoClicker: Version 1.0" << endl;
	cout << "The Creator: AsxngeAttacked.[1]" << endl << endl;

	HANDLE RED = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(RED, FOREGROUND_RED);
	cout << "[F1] - Enable Autoclicker" << endl;
	cout << "[F4] - Disable a Autoclicker" << endl << endl;

	cout << "Speed in Milliseconds: ";
	cin >> ClickerSpeedClick;

	cout << "Clicker's Times: ";
	cin >> ClickerTimesInClick;
	bool MainClickerSet = false;

	while (MainNumber < ClickerTimesInClick)
	{
		if (GetAsyncKeyState(VK_F1))
		{
			MainClickerSet = true;
			cout << "Clicker: Enable" << endl;
		}
		if (GetAsyncKeyState(VK_F4)) {
			MainClickerSet = false;
			cout << "Clicker: Disable" << endl;
			cout << "[F1] - Continue" << endl;
		}
		if (MainClickerSet == true)
		{
			mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
			mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
			Sleep(ClickerSpeedClick);
			MainNumber++;
		}

	}

}