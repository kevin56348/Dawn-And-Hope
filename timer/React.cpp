#include <bits/stdc++.h>
#include <stdio.h>
#include <windows.h>
#include <time.h> //time_t time()  clock_t clock()  
#include <Mmsystem.h>             //timeGetTime()  
#pragma comment(lib, "Winmm.lib")   //timeGetTime()  
using namespace std;
int main() {
	printf("Please enter a letter now and a Enter after the '!!!!!!' appeared\n");
	for(int i=0; i<4; i++) {
		printf("%s ","*");
		Sleep(1000);
	}
	string p;
	printf("%s\n","*");
	int a;
	a=(rand()%8)+1;
	clock_t  clockBegin, clockEnd;
	Sleep(a*1000);
	printf("!!!!!!\n");
	clockBegin = clock();
	cin >> p;
	clockEnd = clock();
	cout << clockEnd - clockBegin;
	cout << " 输入字符以及回车结束\n";
	cin >> p; 
	return 0;
}
