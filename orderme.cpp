#include "fstream"
#include "iostream"
#include "string"

using namespace std;
string var = "\n";

class user {
public:
    string name;
    string add;
    string phon;
    string what;
};

class join : user {
public:
    void scanner() {
        int ch = 0;
        ofstream fo;   // ����� ���� 

        fo.open("user.txt"); // ����� ���� ���� 

        if (!fo) {   // if(fo.fail())
            cerr << "����� ���� ���¿� �����߽��ϴ�!" << endl;
            exit(1);
        }

        cout << "�ߡߡߡߡߡߡ��ֹ� ���� �Է¡ߡߡߡߡߡߡߡߡ�";
        getline(cin, what);
        fo <<what << endl;

        cout << var << endl;
        cout << "�ֹ����� �̸��� �Է��ϼ���: ";
        getline(cin, name);
        fo << name << endl;

        cout<<name << "���� �ּҸ� �Է��ϼ���: ";
        getline(cin, add);
        fo << add << endl;
        
        cout << "��������(-)�� �������ּ���!" << endl;
        cout<<name << "���� ��ȭ��ȣ�� �Է��ϼ���: ";
        getline(cin, phon);
        fo << phon << endl;

        fo.close();

        fstream fi("user.txt");

        cout << var << endl;
        cout << "�ߡߡߡߡߡߡ�!�ֹ��� ��Ȯ��!�ߡߡߡߡߡ�" << endl;
        cout << var << endl;

        cout << " ";
        getline(fi, what);

        cout << "\t�ֹ��� ����: ";
        getline(fi, name);
        cout << name << endl;
        cout << var << endl;

        cout <<"\t"<< name << "���� �ּ�: ";
        getline(fi, add);
        cout << add << endl;
        cout << var << endl;

        cout << "\t" << name << "���� ��ȭ��ȣ: ";
        getline(fi, phon);
        cout << phon << endl;
        cout << var << endl;
        cout << "\t ������ ��ġ�մϱ�?"<<endl;
        cout << "\t 1. ��" << endl;
        cout << "\t 2. �ƴϿ�" << endl;
        cout << "\t: ";
        cin >> ch;
        if (ch == 1) {
            cout << "\t�ֹ��� �Ϸ�Ǿ����ϴ�. " << endl;
            cout << var << endl;
        }
        else if (ch == 2) {
            join j;
            j.scanner();
            cout << var << endl;
        }
        else {
            cout << "�߸��Է��ϼ̽��ϴ�.";
            join j;
            j.scanner();
            cout << var << endl;
        }
        
        fi.close();
         }
    };
class Menu : user{
public:
    int main_menu = 0;
    int sub_menu = 0;
    string sub_name = "";
    string num="";
    string price = "";
    ofstream fo;
    ofstream fo2;
    ifstream fi;
    void main() {
            cout << var << endl;
            cout << "�ߡߡߡ߸��� �޴��ߡߡߡ�" << endl;
            cout << "\t1. ġŲ" << endl;
            cout << "\t2. ����" << endl;
            cout << "\t3. �н�" << endl;
            cout << "\t4. ����Ʈ" << endl;
            cout << "\t0. ����" << endl;
            cout << "�ߡߡߡߡߡߡߡߡߡߡߡߡ�" << endl;
       
        cout << "�޴��� �������ּ���: ";
        cin >> main_menu;
        cout << var << endl;
        if (main_menu < 0 || main_menu>4) {
            cout << var << endl;
            cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: " << endl;
        }

    switch (main_menu) {
    case 1:
        chicken();
        break;
    case 2:
        pizza();
        break;
    case 3:
        snack();
        break;
    case 4:
        dessert();
        break;
    case 0:
        exit(0);
        break;
      }  
   }
    void chicken() {
        fo.open("food.txt");
        fo2.open("price.txt"); // ����� ���� ���� 

        if (!fo) {   // if(fo.fail())
            cerr << "����� ���� ���¿� �����߽��ϴ�!" << endl;
            exit(1);
        }

        cout << "���������������������" << endl;
        cout << "�� 1. �Ķ��̵� ġŲ | 16000��" << endl;
        cout << "�� 2. ��� ġŲ | 17000��" << endl;
        cout << "�� 3. ġ�� ����� ġŲ | 19000��" << endl;
        cout << "�� 4. ���� ����� ġŲ | 19000��" << endl;
        cout << "�� 0. ����" << endl;
        cout << "���������������������" << endl;
    
        cout << "�޴��� �������ּ���(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "�޴��� �̸��� �Է����ּ���(ex �Ķ��̵� ġŲ): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "������ �������ּ���: ";
       getline(cin, num);
       fo << num << endl;
    if (sub_menu < 0 || sub_menu >4) {
        cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: " << endl;
        cout << var << endl;
    }
    else {
        cout << sub_name << " " << num << "���� ��ٱ��Ͽ� �־����ϴ�." << endl;
        cout << "��ٱ��Ϸ� �̵��մϴ�" << endl;
        basket();
        }
    if (sub_menu == 1) {
        fo2 << 16000*stoi(num) << endl;
     }
    if (sub_menu == 2) {
        fo2 << 17000 * stoi(num) << endl;
    }
    if (sub_menu == 3) {
        fo2 << 19000 * stoi(num) << endl;
    }
    if (sub_menu == 4) {
        fo2 << 19000 * stoi(num) << endl;
    }

    }
    void pizza() {
        fo.open("food.txt");
        fo2.open("price.txt"); // ����� ���� ���� 

        if (!fo) {   // if(fo.fail())
            cerr << "����� ���� ���¿� �����߽��ϴ�!" << endl;
            exit(1);
        }

        cout << "���������������������" << endl;
        cout << "�� 1. ġ�� ���� | 6000��" << endl;
        cout << "�� 2. ���۷δ� ���� | 9000��" << endl;
        cout << "�� 3. �������� ���� | 12000��" << endl;
        cout << "�� 4. �Ͽ��̾� ����  | 15000��" << endl;
        cout << "�� 0. ����" << endl;
        cout << "���������������������" << endl;

        cout << "�޴��� �������ּ���(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "�޴��� �̸��� �Է����ּ���(ex �Ķ��̵� ġŲ): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "������ �������ּ���: ";
        getline(cin, num);
        fo << num << endl;
        if (sub_menu < 0 || sub_menu>4) {
            cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: " << endl;
            cout << var << endl;
        }
        else {
            cout << sub_name << " " << num << "���� ��ٱ��Ͽ� �־����ϴ�." << endl;
            cout << "��ٱ��Ϸ� �̵��մϴ�" << endl;
            basket();
        }
        if (sub_menu == 1) {
            fo2 << 6000 * stoi(num) << endl;
        }
        if (sub_menu == 2) {
            fo2 << 9000 * stoi(num) << endl;
        }
        if (sub_menu == 3) {
            fo2 << 12000 * stoi(num) << endl;
        }
        if (sub_menu == 4) {
            fo2 << 15000 * stoi(num) << endl;
        }
    }
    void snack() {
        fo.open("food.txt");
        fo2.open("price.txt"); // ����� ���� ���� 

        if (!fo) {   // if(fo.fail())
            cerr << "����� ���� ���¿� �����߽��ϴ�!" << endl;
            exit(1);
        }

        cout << "���������������������" << endl;
        cout << "�� 1. ������(1�κ�)  | 3000��" << endl;
        cout << "�� 2. ����(1�κ�) | 2500��" << endl;
        cout << "�� 3. ����(1�κ�) | 3500��" << endl;
        cout << "�� 4.  ��� Ƣ�� | 2000��" << endl;
        cout << "�� 0. ����" << endl;
        cout << "���������������������" << endl;

        cout << "�޴��� �������ּ���(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "�޴��� �̸��� �Է����ּ���(ex �Ķ��̵� ġŲ): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "������ �������ּ���: ";
        getline(cin, num);
        fo << num << endl;
        if (sub_menu < 0 || sub_menu>4) {
            cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: " << endl;
            cout << var << endl;
        }
        else {
            cout << sub_name << " " << num << "���� ��ٱ��Ͽ� �־����ϴ�." << endl;
            cout << "��ٱ��Ϸ� �̵��մϴ�" << endl;
            basket();
        }
        if (sub_menu == 1) {
            fo2 << 3000 * stoi(num) << endl;
        }
        if (sub_menu == 2) {
            fo2 << 2500 * stoi(num) << endl;
        }
        if (sub_menu == 3) {
            fo2 << 3500 * stoi(num) << endl;
        }
        if (sub_menu == 4) {
            fo2 << 2000 * stoi(num) << endl;
        }
    }
    void dessert() {
        fo.open("food.txt");
        fo2.open("price.txt"); // ����� ���� ���� 

        if (!fo) {   // if(fo.fail())
            cerr << "����� ���� ���¿� �����߽��ϴ�!" << endl;
            exit(1);
        }

        cout << "���������������������" << endl;
        cout << "�� 1. ���̽� �Ƹ޸�ī�� | 4500��" << endl;
        cout << "�� 2. ���̽� ī��� | 5500��" << endl;
        cout << "�� 3. ġ������ | 6500��" << endl;
        cout << "�� 4. ������ | 6500��" << endl;
        cout << "�� 0. ����" << endl;
        cout << "���������������������" << endl;

        cout << "�޴��� �������ּ���(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "�޴��� �̸��� �Է����ּ���(ex �Ķ��̵� ġŲ): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "������ �������ּ���: ";
        getline(cin, num);
        fo << num << endl;

        if (sub_menu < 0 || sub_menu>4) {
            cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: " << endl;
            cout << var << endl;
        }
        else {
            cout << sub_name << " " << num << "���� ��ٱ��Ͽ� �־����ϴ�." << endl;
            cout << "��ٱ��Ϸ� �̵��մϴ�" << endl;
            basket();
        }
        if (sub_menu == 1) {
            fo2 << 4500 * stoi(num) << endl;
        }
        if (sub_menu == 2) {
            fo2 << 5500 * stoi(num) << endl;
        }
        if (sub_menu == 3) {
            fo2 << 6500 * stoi(num) << endl;
        }
        if (sub_menu == 4) {
            fo2 << 6500 * stoi(num) << endl;
        }
    }
    void basket() {
        int choice = 0;
        fi.open("food.txt");

        cout << var << endl;
        cout << "�ߡߡߡߡߡߡߡߡ�!��ٱ���!�ߡߡߡߡߡߡߡߡߡߡ�" << endl;
        cout << var << endl;
        cout << " ";
        getline(fi, what);
        getline(fi, sub_name);
        cout << "\t"<<sub_name;
        getline(fi, num);
        cout << " "<< num<< "��"  << endl;


        cout << var << endl;

        cout << "\t 1. ����" << endl;
        cout << "\t 2. �ٽ� ����" << endl;
        cout << var << endl;
        cout << "\t������ ��ȣ�� �Է����ּ���: ";
        cin >> choice;
        cout << var << endl;
        cout << "�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�" << endl;
        fi.close();

        if (choice == 1) {
            Calculation();
        }
        if (choice == 2) {
            Menu m;
            m.main();
        }
        else
        {
            cout << "�ٽ� �������ּ���." << endl;
            void basket();
        }

    }
    void Calculation() {
        int card_c;
        int choice = 0;
        cout << var << endl;
        cout << "���ڷγ�19�� ���� ī�� ������ �����մϴ�." << endl;
        cout << var << endl;
        cout << "�� 1. ����ī��" << endl;
        cout << "�� 2. ����ī��" << endl;
        cout << "�� 3. ����ī�� " << endl;
        cout << "�� 4. �Ｚī��" << endl;
        cout << "�� 5. ����ī��" << endl;
        cout << "�� 6. �ϳ�ī��" << endl;
        cout << "�� 7. BCī��" << endl;
        cout << "�� 8. �Ե�ī��" << endl;
        cout << var << endl;
        cout << "������ ī��縦 �������ּ���: ";
        cin >> card_c;
        switch (card_c)
        {
        case 1:
            cout << "����ī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 2:
            cout << "����ī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 3:
            cout << "����ī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 4:
            cout << "�Ｚī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 5:
            cout << "����ī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 6:
            cout << "�ϳ�ī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 7:
            cout << "BCī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 8:
            cout << "�Ե�ī�带 �����Ͽ����ϴ�." << endl;
            cout << "������ 1, �ٽ� ���÷��� 2�� �����ּ���." << endl;
            cout << ": " << endl;
            cin >> choice;
            if (choice == 1) {
                card();
                break;
            }
            else  if (choice == 2) {
                Menu m;
                m.Calculation();
                break;
            }
            else {
                cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        }
    }
    void card() {
        string card_num = "";
        string card_year = "";
        string ccv = "";
        cout << var << endl;
        ofstream fo3("card.txt");
        cout << " ";
        getline(cin, what);
        cout <<"ī���ȣ�� �Է��ϼ���(4�ڸ��� ��� �Է�): ";
        getline(cin, card_num);
        fo3 <<card_num << endl;
        cout << "ī�� ��ȿ�Ⱓ( mm/yy): ";
        getline(cin, card_year);
        fo3 << card_year << endl;
        cout << "ī�� ccv(3�ڸ�): ";
        getline(cin, ccv);
        fo3 << ccv << endl;
        cout << var << endl;
        join j;
        j.scanner();
    }
};

void print_start() {
    int ch = 0;
        cout << "�ߡߡߡ�!ORDER ME!�ߡߡߡߡߡߡߡߡߡߡ�" << endl;
        cout << "\t 1. ����" << endl;
        cout << "\t 2. ����" << endl;
        cout << "�ߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡߡ�" << endl;
    cout << var << endl;
    cout << "������ ��ȣ�� �Է����ּ���: ";
    cin >> ch;

    if (ch < 0 || ch>2) {
        cout << var << endl;
        cout << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���: " << endl;
    }
    else {
        switch (ch) {
        case 1:
            exit(0);
            break;
        case 2:
            Menu m;
            m.main();
            break;
          
        }
    }
}

int main() {
    print_start();

    return 0;
}
   