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
        ofstream fo;   // 쓰기용 파일 

        fo.open("user.txt"); // 쓰기용 파일 열기 

        if (!fo) {   // if(fo.fail())
            cerr << "쓰기용 파일 오픈에 실패했습니다!" << endl;
            exit(1);
        }

        cout << "◆◆◆◆◆◆◆주문 정보 입력◆◆◆◆◆◆◆◆◆";
        getline(cin, what);
        fo <<what << endl;

        cout << var << endl;
        cout << "주문자의 이름을 입력하세요: ";
        getline(cin, name);
        fo << name << endl;

        cout<<name << "님의 주소를 입력하세요: ";
        getline(cin, add);
        fo << add << endl;
        
        cout << "※하이픈(-)을 포함해주세요!" << endl;
        cout<<name << "님의 전화번호를 입력하세요: ";
        getline(cin, phon);
        fo << phon << endl;

        fo.close();

        fstream fi("user.txt");

        cout << var << endl;
        cout << "◆◆◆◆◆◆◆!주문전 재확인!◆◆◆◆◆◆" << endl;
        cout << var << endl;

        cout << " ";
        getline(fi, what);

        cout << "\t주문자 성함: ";
        getline(fi, name);
        cout << name << endl;
        cout << var << endl;

        cout <<"\t"<< name << "님의 주소: ";
        getline(fi, add);
        cout << add << endl;
        cout << var << endl;

        cout << "\t" << name << "님의 전화번호: ";
        getline(fi, phon);
        cout << phon << endl;
        cout << var << endl;
        cout << "\t 정보가 일치합니까?"<<endl;
        cout << "\t 1. 예" << endl;
        cout << "\t 2. 아니오" << endl;
        cout << "\t: ";
        cin >> ch;
        if (ch == 1) {
            cout << "\t주문이 완료되었습니다. " << endl;
            cout << var << endl;
        }
        else if (ch == 2) {
            join j;
            j.scanner();
            cout << var << endl;
        }
        else {
            cout << "잘못입력하셨습니다.";
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
            cout << "◆◆◆◆메인 메뉴◆◆◆◆" << endl;
            cout << "\t1. 치킨" << endl;
            cout << "\t2. 피자" << endl;
            cout << "\t3. 분식" << endl;
            cout << "\t4. 디저트" << endl;
            cout << "\t0. 종료" << endl;
            cout << "◆◆◆◆◆◆◆◆◆◆◆◆◆" << endl;
       
        cout << "메뉴를 선택해주세요: ";
        cin >> main_menu;
        cout << var << endl;
        if (main_menu < 0 || main_menu>4) {
            cout << var << endl;
            cout << "잘못 입력하셨습니다. 다시 입력해주세요: " << endl;
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
        fo2.open("price.txt"); // 쓰기용 파일 열기 

        if (!fo) {   // if(fo.fail())
            cerr << "쓰기용 파일 오픈에 실패했습니다!" << endl;
            exit(1);
        }

        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;
        cout << "□ 1. 후라이드 치킨 | 16000원" << endl;
        cout << "□ 2. 양념 치킨 | 17000원" << endl;
        cout << "□ 3. 치즈 시즈닝 치킨 | 19000원" << endl;
        cout << "□ 4. 갈릭 시즈닝 치킨 | 19000원" << endl;
        cout << "□ 0. 종료" << endl;
        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;
    
        cout << "메뉴를 선택해주세요(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "메뉴의 이름을 입력해주세요(ex 후라이드 치킨): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "수량을 선택해주세요: ";
       getline(cin, num);
       fo << num << endl;
    if (sub_menu < 0 || sub_menu >4) {
        cout << "잘못 입력하셨습니다. 다시 입력해주세요: " << endl;
        cout << var << endl;
    }
    else {
        cout << sub_name << " " << num << "개를 장바구니에 넣었습니다." << endl;
        cout << "장바구니로 이동합니다" << endl;
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
        fo2.open("price.txt"); // 쓰기용 파일 열기 

        if (!fo) {   // if(fo.fail())
            cerr << "쓰기용 파일 오픈에 실패했습니다!" << endl;
            exit(1);
        }

        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;
        cout << "□ 1. 치즈 피자 | 6000원" << endl;
        cout << "□ 2. 페퍼로니 피자 | 9000원" << endl;
        cout << "□ 3. 포테이토 피자 | 12000원" << endl;
        cout << "□ 4. 하와이안 피자  | 15000원" << endl;
        cout << "□ 0. 종료" << endl;
        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;

        cout << "메뉴를 선택해주세요(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "메뉴의 이름을 입력해주세요(ex 후라이드 치킨): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "수량을 선택해주세요: ";
        getline(cin, num);
        fo << num << endl;
        if (sub_menu < 0 || sub_menu>4) {
            cout << "잘못 입력하셨습니다. 다시 입력해주세요: " << endl;
            cout << var << endl;
        }
        else {
            cout << sub_name << " " << num << "개를 장바구니에 넣었습니다." << endl;
            cout << "장바구니로 이동합니다" << endl;
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
        fo2.open("price.txt"); // 쓰기용 파일 열기 

        if (!fo) {   // if(fo.fail())
            cerr << "쓰기용 파일 오픈에 실패했습니다!" << endl;
            exit(1);
        }

        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;
        cout << "□ 1. 떡볶이(1인분)  | 3000원" << endl;
        cout << "□ 2. 오뎅(1인분) | 2500원" << endl;
        cout << "□ 3. 순대(1인분) | 3500원" << endl;
        cout << "□ 4.  모둠 튀김 | 2000원" << endl;
        cout << "□ 0. 종료" << endl;
        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;

        cout << "메뉴를 선택해주세요(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "메뉴의 이름을 입력해주세요(ex 후라이드 치킨): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "수량을 선택해주세요: ";
        getline(cin, num);
        fo << num << endl;
        if (sub_menu < 0 || sub_menu>4) {
            cout << "잘못 입력하셨습니다. 다시 입력해주세요: " << endl;
            cout << var << endl;
        }
        else {
            cout << sub_name << " " << num << "개를 장바구니에 넣었습니다." << endl;
            cout << "장바구니로 이동합니다" << endl;
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
        fo2.open("price.txt"); // 쓰기용 파일 열기 

        if (!fo) {   // if(fo.fail())
            cerr << "쓰기용 파일 오픈에 실패했습니다!" << endl;
            exit(1);
        }

        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;
        cout << "□ 1. 아이스 아메리카노 | 4500원" << endl;
        cout << "□ 2. 아이스 카페라떼 | 5500원" << endl;
        cout << "□ 3. 치즈케익 | 6500원" << endl;
        cout << "□ 4. 퀘사디아 | 6500원" << endl;
        cout << "□ 0. 종료" << endl;
        cout << "□□□□□□□□□□□□□□□□□□□□" << endl;

        cout << "메뉴를 선택해주세요(ex 1): ";
        cin >> sub_menu;
        cout << var << endl;
        getline(cin, what);
        fo << what << endl;
        cout << "메뉴의 이름을 입력해주세요(ex 후라이드 치킨): ";
        getline(cin, sub_name);
        fo << sub_name << endl;

        cout << "수량을 선택해주세요: ";
        getline(cin, num);
        fo << num << endl;

        if (sub_menu < 0 || sub_menu>4) {
            cout << "잘못 입력하셨습니다. 다시 입력해주세요: " << endl;
            cout << var << endl;
        }
        else {
            cout << sub_name << " " << num << "개를 장바구니에 넣었습니다." << endl;
            cout << "장바구니로 이동합니다" << endl;
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
        cout << "◆◆◆◆◆◆◆◆◆!장바구니!◆◆◆◆◆◆◆◆◆◆◆" << endl;
        cout << var << endl;
        cout << " ";
        getline(fi, what);
        getline(fi, sub_name);
        cout << "\t"<<sub_name;
        getline(fi, num);
        cout << " "<< num<< "개"  << endl;


        cout << var << endl;

        cout << "\t 1. 결제" << endl;
        cout << "\t 2. 다시 선택" << endl;
        cout << var << endl;
        cout << "\t실행할 번호를 입력해주세요: ";
        cin >> choice;
        cout << var << endl;
        cout << "◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆" << endl;
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
            cout << "다시 선택해주세요." << endl;
            void basket();
        }

    }
    void Calculation() {
        int card_c;
        int choice = 0;
        cout << var << endl;
        cout << "※코로나19로 인해 카드 결제만 가능합니다." << endl;
        cout << var << endl;
        cout << "□ 1. 현대카드" << endl;
        cout << "□ 2. 농협카드" << endl;
        cout << "□ 3. 국민카드 " << endl;
        cout << "□ 4. 삼성카드" << endl;
        cout << "□ 5. 신한카드" << endl;
        cout << "□ 6. 하나카드" << endl;
        cout << "□ 7. BC카드" << endl;
        cout << "□ 8. 롯데카드" << endl;
        cout << var << endl;
        cout << "결제할 카드사를 선택해주세요: ";
        cin >> card_c;
        switch (card_c)
        {
        case 1:
            cout << "현대카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 2:
            cout << "농협카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 3:
            cout << "국민카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 4:
            cout << "삼성카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 5:
            cout << "신한카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 6:
            cout << "하나카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 7:
            cout << "BC카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
                Menu m;
                m.Calculation();
                break;
            }
        case 8:
            cout << "롯데카드를 선택하였습니다." << endl;
            cout << "맞으면 1, 다시 고르시려면 2를 눌러주세요." << endl;
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
                cout << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
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
        cout <<"카드번호를 입력하세요(4자리씩 끊어서 입력): ";
        getline(cin, card_num);
        fo3 <<card_num << endl;
        cout << "카드 유효기간( mm/yy): ";
        getline(cin, card_year);
        fo3 << card_year << endl;
        cout << "카드 ccv(3자리): ";
        getline(cin, ccv);
        fo3 << ccv << endl;
        cout << var << endl;
        join j;
        j.scanner();
    }
};

void print_start() {
    int ch = 0;
        cout << "◆◆◆◆!ORDER ME!◆◆◆◆◆◆◆◆◆◆◆" << endl;
        cout << "\t 1. 종료" << endl;
        cout << "\t 2. 시작" << endl;
        cout << "◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆◆" << endl;
    cout << var << endl;
    cout << "실행할 번호를 입력해주세요: ";
    cin >> ch;

    if (ch < 0 || ch>2) {
        cout << var << endl;
        cout << "잘못 입력하셨습니다. 다시 입력해주세요: " << endl;
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
   