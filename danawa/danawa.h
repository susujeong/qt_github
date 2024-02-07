#ifndef DANAWA_H
#define DANAWA_H

#include <QWidget>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QLabel>
#include <QDebug>
#include <QMessageBox>
#include <QLineEdit>
#include <QMovie>


QT_BEGIN_NAMESPACE
namespace Ui {
class danawa;
}
QT_END_NAMESPACE

class danawa : public QWidget
{
    Q_OBJECT

public:
    danawa(QWidget *parent = nullptr);
    ~danawa();

private slots:
    void login_clicked(); //로그인페이지에서 로그인 버튼 눌렀을때 성공유무 함수
    void slot_checkID(); //회원가입 아이디 중복체크
    void slot_checkPW2(); //비밀번호 재확인
    void slot_phone(); //회원가입 전화번호 중복체크
    void slot_e_mail(); //회원가입 이메일 중복체크
    void slot_member(); //회원가입버튼 누를때
    void slot_ID_Find(); // 아이디찾기
    void slot_PW_Find();
    void Move_Page0(); //메인페이지
    void Move_Page1(); //자동차백과
    void Move_Page2();
    void Move_Page4(); //로그인페이지
    void Move_Page5(); //회원가입페이지
    void Move_Page6(); //아이디찾기페이지
    void Move_Page7(); //비밀번호찾기페이지
    void Move_Page8(); //약관
    void Move_Page9(); //개인정보동의

    void Move_P1_stackedWidget_1();
    void Move_P1_stackedWidget_2();
    void Move_P1_stackedWidget_3();
    void Move_P1_stackedWidget_4();
    void Move_P1_stackedWidget_5();
    void Move_P1_stackedWidget_6();
    void Move_P1_stackedWidget_7();
    void Move_P1_stackedWidget_8();

    void Move_P2_stackedWidget_1();
    void Move_P2_stackedWidget_2();




    void D_HD_Btn(); //자동차 백과 현대
    void D_KIA_Btn(); //자동차 백과 기아
    void D_GENESIS_Btn();//자동차 백과 제네시스
    void D_BMW_Btn();//자동차 BMW 제네시스
    void D_BENZ_Btn();//자동차 벤츠 제네시스
    void car_info(QAbstractButton* );
    void car_brand_table(QAbstractButton* );
    void car_model_table(QAbstractButton* );
    void sum_brand(QAbstractButton*);//자동차 판매량 조회 해당 월 총판매량
    void over_month(QAbstractButton*);//전월대비 판매량 비교
    void brand_logo(QAbstractButton*);//판매량 조회 결과창 로고띄우기

    void on_mainbtn_clicked();


    void on_inquirybtn_2_clicked();

    void on_inquirybtn_4_clicked();

private:
    Ui::danawa *ui;
    QSqlDatabase db;
    QString name;
    QString id;
    QString pw;
    QString Phone;
    QString e_mail;

};
#endif // DANAWA_H
