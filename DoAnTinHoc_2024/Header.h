#include<iostream>
#include <string>
#include <Windows.h>
using namespace std;
struct TreeNode {
	char value;
	string x;
	TreeNode* left;
	TreeNode* right;
};
typedef TreeNode* Node;
Node tao_Node(char x);
Node tao_NodeSo(string x);
void gotoxy(short x, short y);
bool kiemTraKiTu(char x);
bool kiemTraToanTu(char x);
Node cayBST(const string& bt, int& so);
void inCay(Node T, int x, int y, int d);
void duyetNLR(Node T);
void duyetLRN(Node T);
void duyetLNR(Node T);
bool kiemTraChuoi(const string& bt);
Node cayBSTso(const string& bt, int& so);
bool ktChuoiSohayChu(const string& bt);
bool kiemTraSo(char x);
void inCaySo(Node T, int x, int y, int d);
void duyetNLRso(Node T);
void duyetLRNso(Node T);
void duyetLNRso(Node T);
bool kiemTraChuoiSo(const string& bt);
bool ktDongNhat(const string& bt);
