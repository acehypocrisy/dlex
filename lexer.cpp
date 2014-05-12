// lexer.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "FiniteAutomata.h"
#include <iostream>

using namespace std;

char text[] = "int double long";

enum{Identifier};

DFATransfer f[] = {
	{0, ' ', 0, NULL},
	{0, 'i', 1, NULL},
	{0, 'n', 1, NULL},
	{0, 't', 1, NULL},
	{0, 'd', 1, NULL},
	{0, 'o', 1, NULL},
	{0, 'u', 1, NULL},
	{0, 'l', 1, NULL},
	{0, 'e', 1, NULL},
	{0, 'g', 1, NULL},
	{1, 'i', 1, NULL},
	{1, 'n', 1, NULL},
	{1, 't', 1, NULL},
	{1, 'd', 1, NULL},
	{1, 'b', 1, NULL},
	{1, 'o', 1, NULL},
	{1, 'u', 1, NULL},
	{1, 'l', 1, NULL},
	{1, 'e', 1, NULL},
	{1, 'g', 1, NULL},
};
DFATransfer f2[] = {
	{0, ' ', 0, NULL},
	//{1, ' ', 2, LexerRunner::actionFallBackAndAccept},
};

int map[1][2] = {{2, Identifier}};

Lexer l = {
	f, sizeof(f) / sizeof(DFATransfer),
	f2, sizeof(f2) / sizeof(DFATransfer),
	map,
	1
};

int _tmain(int argc, _TCHAR* argv[])
{
	DFAFeeder feeder(text, sizeof(text));
	LexerRunner runner(&feeder);


	runner.setLexer(&l);

	cout<<runner.getNextToken().token<<endl;
	
	cout<<runner.getNextToken().token<<endl;
	
	cout<<runner.getNextToken().token<<endl;
	return 0;
}

