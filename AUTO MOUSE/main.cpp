#include <Windows.h>
void MouseMove(int x, int y, int fScreenWidth, int fScreenHeight)//移动到绝对位置并双击
{
	double fx = x * (65535 / fScreenWidth);
	double fy = y * (65535 / fScreenHeight);
	mouse_event(MOUSEEVENTF_ABSOLUTE | MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP | MOUSEEVENTF_MOVE, fx, fy, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}
int main()
{
	double fScreenWidth = ::GetSystemMetrics(SM_CXSCREEN) - 1;
	double fScreenHeight = ::GetSystemMetrics(SM_CYSCREEN) - 1;
	MouseMove(33, 1056, fScreenWidth, fScreenHeight);
	Sleep(500);
	MouseMove(581, 986, fScreenWidth, fScreenHeight);
	Sleep(500);
	MouseMove(583, 913, fScreenWidth, fScreenHeight);
}