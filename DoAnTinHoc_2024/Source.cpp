#include "Header.h"

Node tao_Node(char x) {
    Node p = new TreeNode;
    p->value = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

Node tao_NodeSo(string x) {
    Node p = new TreeNode;
    p->x = x;
    p->left = NULL;
    p->right = NULL;
    return p;
}

void gotoxy(short x, short y) {
#ifdef _WIN32
    HANDLE Con = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;
    pos.X = x - 1;
    pos.Y = y - 1;
    SetConsoleCursorPosition(Con, pos);
#else
    printf("\033[%d;%dH", y, x); // dùng escape code di chuyển con trỏ
#endif
}

bool kiemTraKiTu(char x) {
    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z') || (x >= '0' && x <= '9');
}

bool kiemTraToanTu(char x) {
    return (x == '*' || x == '/' || x == '+' || x == '-');
}

bool kiemTraSo(char x) {
    return (x >= '0' && x <= '9');
}

Node cayBST(const string& bt, int& so) {
    Node left = nullptr;
    while (so < bt.length() && kiemTraKiTu(bt[so])) {
        left = tao_Node(bt[so]);
        so++;
        break;
    }
    while (so < bt.length()) {
        if (bt[so] == '(') {
            so++;
            left = cayBST(bt, so);
            so++;
            continue;
        }
        if (so >= bt.length()) break;
        char h = bt[so];
        if (!kiemTraToanTu(h)) break;
        so++;
        Node right = cayBST(bt, so);
        if (left && right) {
            Node p = tao_Node(h);
            p->left = left;
            p->right = right;
            left = p;
        }
    }
    return left;
}

void inCay(Node T, int x, int y, int d) {
    if (T != nullptr) {
        gotoxy(x, y);
        cout << "(" << T->value << ")";
        if (T->left != nullptr) {
            gotoxy(x + 1, y + 1);
            cout << '|';
            for (int i = x - d / 2 + 2; i <= x + 2; i++) {
                gotoxy(i, y + 2);
                cout << '-';
            }
            inCay(T->left, x - d / 2, y + 3, d - 4);
        }
        if (T->right != nullptr) {
            gotoxy(x + 1, y + 1);
            cout << '|';
            for (int i = x + 2; i <= x + d / 2 + 2; i++) {
                gotoxy(i, y + 2);
                cout << '-';
            }
            inCay(T->right, x + d / 2, y + 3, d - 4);
        }
    }
}

void duyetNLR(Node T) {
    if (T != nullptr) {
        cout << T->value << " ";
        duyetNLR(T->left);
        duyetNLR(T->right);
    }
}

void duyetLRN(Node T) {
    if (T != nullptr) {
        duyetLRN(T->left);
        duyetLRN(T->right);
        cout << T->value << " ";
    }
}

void duyetLNR(Node T) {
    if (T != nullptr) {
        duyetLNR(T->left);
        cout << T->value << " ";
        duyetLNR(T->right);
    }
}

bool kiemTraChuoi(const string& bt) {
    int dem = 0;
    for (int i = 0; i < bt.length(); i++) {
        char x = bt[i];
        if (!(kiemTraKiTu(x) || kiemTraToanTu(x) || x == '(' || x == ')'))
            return false;
        if (x == '(') {
            dem++;
            if (i > 0 && (bt[i - 1] == ')' || kiemTraKiTu(bt[i - 1])))
                return false;
        }
        else if (x == ')') {
            dem--;
            if (dem < 0)
                return false;
            if (i > 0 && kiemTraToanTu(bt[i - 1]))
                return false;
        }
        if (kiemTraKiTu(x)) {
            if (i > 0 && (kiemTraKiTu(bt[i - 1]) || bt[i - 1] == ')'))
                return false;
        }
        if (kiemTraToanTu(x)) {
            if (i == 0 || i == bt.length() - 1 || kiemTraToanTu(bt[i - 1]) || bt[i - 1] == '(')
                return false;
        }
    }
    return dem == 0;
}

Node cayBSTso(const string& bt, int& so) {
    Node left = nullptr;
    while (so < bt.length() && kiemTraKiTu(bt[so])) {
        int dem = so;
        string x = "";
        while (kiemTraSo(bt[so])) {
            so++;
        }
        for (int i = dem; i < so; i++) {
            x += bt[i];
        }
        left = tao_NodeSo(x);
        break;
    }
    while (so < bt.length()) {
        if (bt[so] == '(') {
            so++;
            left = cayBSTso(bt, so);
            so++;
            continue;
        }
        if (so >= bt.length()) break;
        char h = bt[so];
        if (!kiemTraToanTu(h)) break;
        so++;
        Node right = cayBSTso(bt, so);
        if (left && right) {
            string x = "";
            x += h;
            Node p = tao_NodeSo(x);
            p->left = left;
            p->right = right;
            left = p;
        }
    }
    return left;
}

void inCaySo(Node T, int x, int y, int d) {
    if (T != nullptr) {
        gotoxy(x, y);
        cout << "(" << T->x << ")";
        if (T->left != nullptr) {
            gotoxy(x + 1, y + 1);
            cout << '|';
            for (int i = x - d / 2 + 2; i <= x + 2; i++) {
                gotoxy(i, y + 2);
                cout << '-';
            }
            inCaySo(T->left, x - d / 2, y + 3, d - 4);
        }
        if (T->right != nullptr) {
            gotoxy(x + 1, y + 1);
            cout << '|';
            for (int i = x + 2; i <= x + d / 2 + 2; i++) {
                gotoxy(i, y + 2);
                cout << '-';
            }
            inCaySo(T->right, x + d / 2, y + 3, d - 4);
        }
    }
}

void duyetNLRso(Node T) {
    if (T != nullptr) {
        cout << T->x << " ";
        duyetNLRso(T->left);
        duyetNLRso(T->right);
    }
}

void duyetLRNso(Node T) {
    if (T != nullptr) {
        duyetLRNso(T->left);
        duyetLRNso(T->right);
        cout << T->x << " ";
    }
}

void duyetLNRso(Node T) {
    if (T != nullptr) {
        duyetLNRso(T->left);
        cout << T->x << " ";
        duyetLNRso(T->right);
    }
}

bool ktChuoiSohayChu(const string& bt) {
    for (int i = 0; i < bt.length(); i++) {
        if (kiemTraSo(bt[i])) return false;
    }
    return true;
}

bool ktDongNhat(const string& bt) {
    int demKT = 0, demSo = 0;
    for (int i = 0; i < bt.length(); i++) {
        if (kiemTraSo(bt[i]))
            demSo++;
        else if (kiemTraKiTu(bt[i]))
            demKT++;
    }
    if (demKT == demSo) return false;
    if (demSo > 0 && demKT > 0) return false;
    return true;
}

bool kiemTraChuoiSo(const string& bt) {
    int dem = 0;
    for (int i = 0; i < bt.length(); i++) {
        char x = bt[i];
        if (!(kiemTraSo(x) || kiemTraToanTu(x) || x == '(' || x == ')'))
            return false;
        if (x == '(') {
            dem++;
            if (i > 0 && (bt[i - 1] == ')' || kiemTraSo(bt[i - 1])))
                return false;
        } else if (x == ')') {
            dem--;
            if (dem < 0)
                return false;
            if (i > 0 && kiemTraToanTu(bt[i - 1]))
                return false;
        }
        if (kiemTraSo(x)) {
            if (i > 0 && bt[i - 1] == ')')
                return false;
        }
        if (kiemTraToanTu(x)) {
            if (i == 0 || i == bt.length() - 1 || kiemTraToanTu(bt[i - 1]) || bt[i - 1] == '(')
                return false;
        }
    }
    return dem == 0;
}
