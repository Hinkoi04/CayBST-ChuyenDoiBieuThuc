#include"Header.h"
int main() {
	string bt;
	cout << "===========================================================\n";
	cout << "|| Chuyen doi bieu thuc trung to sang tien to va hau to! ||" << endl;
	cout << "===========================================================\n";
	cout << "Nhap bieu thuc: ";
	cin >> bt;
	while (ktDongNhat(bt) == false||(kiemTraChuoi(bt) == false && kiemTraChuoiSo(bt) == false)) {
		cout << "\nBieu thuc sai! Nhap lai." << endl;
		cout << "Nhap bieu thuc: ";
		cin >> bt;
	}

	if (ktChuoiSohayChu(bt) == true) {
		int so = 0;
		Node root = cayBST(bt, so);
		int x = 40, y = 2, d = 20;
		system("cls");
		inCay(root, x, y, d);		
		cout << "\n\n\n\n\n\n\n\n";
		cout << "==============================================";
		cout << "\nBieu thuc vua nhap la: "<<bt;
		cout << "\nBieu thuc trung to: ";
		duyetLNR(root);
		cout << "\nBieu thuc tien to: ";
		duyetNLR(root);
		cout << "\nBieu thuc hau to: ";
		duyetLRN(root);
		cout << "\n==============================================";

	}
	else {
		int so = 0;
		Node root = cayBSTso(bt, so);
		int x = 40, y = 2, d = 20;
		system("cls");
		inCaySo(root, x, y, d);
		cout << "\n\n\n\n\n\n\n\n";
		cout << "==============================================";
		cout << "\nBieu thuc vua nhap la: " << bt;
		cout << "\nBieu thuc trung to: ";
		duyetLNRso(root);
		cout << "\nBieu thuc tien to: ";
		duyetNLRso(root);
		cout << "\nBieu thuc hau to: ";
		duyetLRNso(root);
		cout << "\n==============================================";
	}
	return 0;
}
