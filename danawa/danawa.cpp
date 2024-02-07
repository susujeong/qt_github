#include "danawa.h"
#include "ui_danawa.h"

danawa::danawa(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::danawa)
{
    ui->setupUi(this);

    QSqlDatabase mydb = QSqlDatabase :: addDatabase("QSQLITE"); //생성자가 호출되있을 때 데이터 베이스 연결
    mydb.setDatabaseName("C:/Users/user/Desktop/QT/danawa");

    mydb.open();


    QMovie*Movie = new QMovie("C:/Users/user/Desktop/QT/qqq/ad.gif"); //광고 띄우기
    ui->page_1_ad1->setMovie(Movie);
    ui->page_2_ad1->setMovie(Movie);
    ui->page_3_ad1->setMovie(Movie);


    Movie->setScaledSize(QSize(501,51));
    Movie->start();



    ui->stackedWidget->setCurrentIndex(3); //첫페이지 띄울것

    ui->page_1_ad2->setTextFormat(Qt::RichText);
    ui->page_1_ad2->setText("<a href=\"http://direct.samsungfire.com/ria/pc/product/car/?state=Front\" "
                            "style=\"text-decoration: none;\" "
                            ">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>");
    ui->page_1_ad2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->page_1_ad2->setOpenExternalLinks(true);

    ui->page_2_ad2->setTextFormat(Qt::RichText);
    ui->page_2_ad2->setText("<a href=\"http://direct.samsungfire.com/ria/pc/product/car/?state=Front\" "
                            "style=\"text-decoration: none;\" "
                            ">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>");
    ui->page_2_ad2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->page_2_ad2->setOpenExternalLinks(true);

    ui->page_3_ad2->setTextFormat(Qt::RichText);
    ui->page_3_ad2->setText("<a href=\"http://direct.samsungfire.com/ria/pc/product/car/?state=Front\" "
                            "style=\"text-decoration: none;\" "
                            ">&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;</a>");
    ui->page_3_ad2->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->page_3_ad2->setOpenExternalLinks(true);
//--------------------------------------------------------------광고넣기

    ui->HD_home->setTextFormat(Qt::RichText);
    ui->HD_home->setText("<a href=\"https://www.hyundai.com/kr/ko/e/?state=Front\" "
                            "style=\"text-decoration: none;\">홈페이지</a>");
    ui->HD_home->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->HD_home->setOpenExternalLinks(true);


    ui->KIA_home->setTextFormat(Qt::RichText);
    ui->KIA_home->setText("<a href=\"https://www.kia.com/kr/?state=Front\" "
                         "style=\"text-decoration: none;\">홈페이지</a>");
    ui->KIA_home->setTextInteractionFlags(Qt::LinksAccessibleByMouse);
    ui->KIA_home->setOpenExternalLinks(true);

    connect(ui->car_info_Group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(car_info(QAbstractButton*)));

    connect(ui->car_table_Group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(car_brand_table(QAbstractButton*)));

    connect(ui->car_model_Group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(car_model_table(QAbstractButton*)));



    connect(ui->car_table_Group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(sum_brand(QAbstractButton*)));//판매조회창 판매량 시그널슬롯

    connect(ui->car_table_Group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(over_month(QAbstractButton*)));//판매조회창 전월판매량 시그널슬롯

    connect(ui->car_table_Group, SIGNAL(buttonClicked(QAbstractButton*)), this, SLOT(brand_logo(QAbstractButton*)));//판매조회창 로고 띄우기

}



void danawa :: login_clicked(){ //로그인화면 로그인 성공하면 화면이동 넣어야함
    id = ui->page_5_id_label->text();
    pw = ui->page_5_pw_label->text();
    QSqlQuery query;
    query.prepare("SELECT * FROM user_info WHERE id = :id AND pw = :pw");
    query.bindValue(":id",id);
    query.bindValue(":pw",pw);
    if(query.exec() && query.next()){ //쿼리문 실행하고 진행이 된다면 참 아니면 거짓
        QMessageBox::information(this, "로그인", "로그인에 성공했습니다");
        ui->page_5_id_label->clear();
        ui->page_5_pw_label->clear();
        //이제 로그인 후에 페이지 넘어가는 거 넣어야함
    }
    else{
        QMessageBox::information(this, "로그인", "회원 정보가 일치하지 않습니다");
        ui->page_5_id_label->clear();
        ui->page_5_pw_label->clear();
    }
}

void danawa::slot_checkID() //아이디 중복검사
{
    QString input_id = ui->page_6_id->text(); // 라인 에딧으로 입력한 값을 변수에 저장

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user_info WHERE id = :inputId");
    query.bindValue(":inputId", input_id);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt(); //puery.value(0)은 첫번째 열의 값

        if (count > 0) { // 중복 일때
            QMessageBox::critical(this, "주의", "이미 사용 중인 ID입니다.");
            ui->page_6_id->clear();
        }
    } else {
        qDebug() << "Query failed:" << query.lastError();
    }
}

void danawa::slot_checkPW2() //비밀번호 재확인
{
    QString password1 = ui->page_6_pw1->text();
    QString password2 = ui->page_6_pw2->text();
    if (password1 != password2) {  //비밀번호가 일치 하지 않을 때
        QMessageBox::critical(this, "비밀번호 확인", "비밀번호가 일치하지 않습니다.");
        ui->page_6_pw2->clear();
    }
}

void danawa ::slot_phone() { //회원가입시 전화번호 중복검사
    Phone = ui->page_6_phone->text(); // 라인 에딧으로 입력한 값을 변수에 저장

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user_info WHERE phone = :phone");
    query.bindValue(":phone", Phone);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();

        if (count > 0) { // 중복 일때
            QMessageBox::critical(this, "주의", "이미 사용 중인 전화번호입니다.");
            ui->page_6_phone->clear();
        }
    }
}

void danawa ::slot_e_mail() //회원가입시 email 중복검사
{
    e_mail = ui->page_6_e_mail->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM user_info WHERE e_mail = :e_mail");
    query.bindValue(":e_mail", e_mail);
    if (query.exec() && query.next()) {
        int count = query.value(0).toInt();
        if (count > 0) { // 중복 일때
            QMessageBox::critical(this, "주의", "이미 사용 중인 이메일입니다..");
            ui->page_6_e_mail->clear();
        }
    }
}

void danawa::slot_member() //회원가입버튼 클릭시
{
    name = ui->page_6_name->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    id = ui->page_6_id->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    pw = ui->page_6_pw1->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    Phone = ui->page_6_phone->text(); // 라인 에딧으로 입력한 값을 변수에 저장
    e_mail = ui->page_6_e_mail->text(); // 라인 에딧으로 입력한 값을 변수에 저장

    QSqlQuery query;
    query.prepare("INSERT INTO user_info (name, id, pw, phone, e_mail) VALUES (:name, :id, :pw, :phone, :e_mail)");
    query.bindValue(":name", name);
    query.bindValue(":id", id);
    query.bindValue(":pw", pw);
    query.bindValue(":phone", Phone);
    query.bindValue(":e_mail", e_mail);

    if(ui->page_6_name->text().isEmpty() ||ui->page_6_id->text().isEmpty()||ui->page_6_pw1->text().isEmpty()||ui->page_6_pw2->text().isEmpty() ||ui->page_6_phone->text().isEmpty() ||ui->page_6_e_mail->text().isEmpty())
        QMessageBox::information(this,"알림", "모든 항목을 입력해주세요");
    else if(!ui->page_6_check1->isChecked() || !ui->page_6_check2->isChecked()){
        QMessageBox::information(this,"알림", "필수 약관 동의를 해주세요");
    }
    else {
        if(query.exec()) {
            ui->page_6_name->clear();
            ui->page_6_id->clear();
            ui->page_6_pw1->clear();
            ui->page_6_pw2->clear();
            ui->page_6_phone->clear();
            ui->page_6_e_mail->clear(); //써있는 내용 지우기
            QMessageBox::information(this, "회원가입", "회원가입 성공.");
            ui->stackedWidget->setCurrentIndex(0);
        }
    }
}

void danawa::slot_ID_Find() // ID 찾기
{
    //id 찾는 로직
    name = ui->page_7_name->text();
    Phone = ui->page_7_phone->text();
    e_mail = ui->page_7_email->text();
    QSqlQuery query;
    query.prepare("SELECT id FROM user_info WHERE name = :name AND phone = :phone AND e_mail = :e_mail");
    query.bindValue(":name", name);
    query.bindValue(":phone", Phone);
    query.bindValue(":e_mail", e_mail);
    if(query.exec() && query.next()){
        QString find_id = query.value(0).toString();
        QMessageBox::information(this, "아이디 찾기", "등록된 아이디는 " + find_id + " 입니다");
        ui ->page_7_name->clear();
        ui ->page_7_phone->clear();
        ui ->page_7_email->clear();
        ui->stackedWidget->setCurrentIndex(4);
    }
    else{
        QMessageBox::information(this, "아이디 찾기", "등록된 정보가 없습니다.");
        ui ->page_7_name->clear();
        ui ->page_7_phone->clear();
        ui ->page_7_email->clear();
    }
}

void danawa :: slot_PW_Find() // PW 찾기 완료?
{
    //pw 찾는 로직
    id = ui->page_8_id->text();
    Phone = ui->page_8_phone->text();
    e_mail = ui->page_8_email->text();
    QSqlQuery query;
    query.prepare("SELECT pw FROM user_info WHERE id = :id AND phone = :phone AND e_mail = :e_mail");
    query.bindValue(":id", id);
    query.bindValue(":phone", Phone);
    query.bindValue(":e_mail", e_mail);

    if(query.exec() && query.next()){
        QString find_pw = query.value(0).toString();
        QMessageBox::information(this, "비밀번호 찾기", "등록된 비밀번호는 " + find_pw + " 입니다");
        ui -> page_8_id ->clear();
        ui -> page_8_phone ->clear();
        ui -> page_8_email->clear();
        ui -> stackedWidget->setCurrentIndex(4);

    }
    else{
        QMessageBox::information(this, "비밀번호 찾기", "등록된 정보가 없습니다");
        ui -> page_8_id ->clear();
        ui -> page_8_phone ->clear();
        ui -> page_8_email->clear();
    }
}


void danawa :: car_brand_table(QAbstractButton*){ //자동차 버튼 누르면 백과 정보
    QString brand = ui -> car_table_Group->checkedButton()->text(); //그룹화버튼

    ui->tableWidget->clearContents();
    ui->tableWidget->setColumnCount(3); //행 갯수
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //테이블 위젯 사이즈 맞추기


    QString year = ui->comboBox_1->currentText();
    QString month = ui->comboBox_2->currentText();
    int row = 0;
    QSqlQuery qry;
    qry.prepare("SELECT 차명, 판매량, 점유율 FROM "+brand+" WHERE 년 = :year AND 월 = :month");
    qry.bindValue(":year",year);
    qry.bindValue(":month",month);
    if(qry.exec())
    {
        while(qry.next())
        {

            QString car_name = qry.value(0).toString(); // 차명
            QString sales = qry.value(1).toString(); // 판매량
            QString share = qry.value(2).toString(); // 점유율

            QPushButton* button = new QPushButton;
            button->setText(car_name);
            ui->tableWidget->insertRow(row);
            ui->tableWidget->setCellWidget(row,0,button);// 자동차이름만 버튼으로 만들기
            ui->tableWidget->setItem(row,1,new QTableWidgetItem(sales));
            ui->tableWidget->setItem(row,2,new QTableWidgetItem(share));
            row++;

            connect(button, &QPushButton::clicked, [=]() {
                ui->stackedWidget->setCurrentIndex(2);
                QSqlQuery query;
                if (query.exec("SELECT * FROM car_info WHERE 모델 = '" + car_name + "'")) {
                    if (query.next()) {
                        QString a = query.value(1).toString();
                        QString b = query.value(2).toString();
                        QString c = query.value(3).toString();
                        QString d = query.value(4).toString();
                        QString e = query.value(5).toString();
                        QString f = query.value(6).toString();
                        QString g = query.value(7).toString();
                        QPixmap car("C:/Users/user/Desktop/QT/qqq/"+car_name+".PNG");
                        ui->car_info_1->setPixmap(car);
                        ui->car_info_2->setText(a); //모델이름표기
                        ui->car_info_2->setAlignment(Qt::AlignCenter); //모델이름 가운대 정렬
                        ui->car_info_3->setText(b); //가격표기
                        ui->car_info_4->setText(c); // 최저가표기
                        ui->car_info_5->setText(d); //출시일 표기
                        ui->car_info_6->setText(e); // 차종 표기
                        ui->car_info_7->setText(f); // 연료 표기
                        ui->car_info_8->setText(g); // 연비 표기+

                        connect(ui->RED_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_red.PNG");
                            ui->car_info_1->setPixmap(color);
                        });

                        connect(ui->BLACK_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_black.PNG");
                            ui->car_info_1->setPixmap(color);
                        });

                        connect(ui->WHITE_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_white.PNG");
                            ui->car_info_1->setPixmap(color);
                        });
                        connect(ui->GRAY_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_gray.PNG");
                            ui->car_info_1->setPixmap(color);
                        });
                    }
                }
            });

        }
    }

}




void danawa :: car_model_table(QAbstractButton*){
    QString model = ui -> car_model_Group->checkedButton()->text(); //그룹화버튼

    ui->tableWidget_8->clearContents();
    ui->tableWidget_8->setColumnCount(3); //행 갯수
    ui->tableWidget_8->setRowCount(0);
    ui->tableWidget_8->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //테이블 위젯 사이즈 맞추기

    QString month = ui->comboBox_9->currentText();
    int row = 0;
    QSqlQuery qry;
    qry.prepare("SELECT 차명, 판매량, 점유율 FROM "+model+" WHERE 월 = :month");
    qry.bindValue(":month",month);
    if(qry.exec())
    {
        while(qry.next())
        {
            QString car_name = qry.value(0).toString(); // 차명
            QString sales = qry.value(1).toString(); // 판매량
            QString share = qry.value(2).toString(); // 점유율

            QPushButton* button = new QPushButton;
            button->setText(car_name);

            ui->tableWidget_8->insertRow(row);


            ui->tableWidget_8->setCellWidget(row,0,button);// 자동차이름만 버튼으로 만들기
            ui->tableWidget_8->setItem(row,1,new QTableWidgetItem(sales));
            ui->tableWidget_8->setItem(row,2,new QTableWidgetItem(share));
            row++;
            connect(button, &QPushButton::clicked, [=]() {
                ui->stackedWidget->setCurrentIndex(2);
                QSqlQuery query;
                if (query.exec("SELECT * FROM car_info WHERE 모델 = '" + car_name + "'")) {
                    if (query.next()) {
                        QString a = query.value(1).toString();
                        QString b = query.value(2).toString();
                        QString c = query.value(3).toString();
                        QString d = query.value(4).toString();
                        QString e = query.value(5).toString();
                        QString f = query.value(6).toString();
                        QString g = query.value(7).toString();
                        QPixmap car("C:/Users/user/Desktop/QT/qqq/"+car_name+".PNG");
                        ui->car_info_1->setPixmap(car);
                        ui->car_info_2->setText(a); //모델이름표기
                        ui->car_info_2->setAlignment(Qt::AlignCenter); //모델이름 가운대 정렬
                        ui->car_info_3->setText(b); //가격표기
                        ui->car_info_4->setText(c); // 최저가표기
                        ui->car_info_5->setText(d); //출시일 표기
                        ui->car_info_6->setText(e); // 차종 표기
                        ui->car_info_7->setText(f); // 연료 표기
                        ui->car_info_8->setText(g); // 연비 표기
                        connect(ui->RED_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_red.PNG");
                            ui->car_info_1->setPixmap(color);
                        });

                        connect(ui->BLACK_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_black.PNG");
                            ui->car_info_1->setPixmap(color);
                        });

                        connect(ui->WHITE_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_white.PNG");
                            ui->car_info_1->setPixmap(color);
                        });
                        connect(ui->GRAY_btn, &QPushButton::clicked, [=]() {
                            QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_gray.PNG");
                            ui->car_info_1->setPixmap(color);
                        });
                    }
                }
            });

        }
    }

}




void danawa::sum_brand(QAbstractButton*){       //해당월 총 판매량 표시
    QString brand_name=ui->car_table_Group->checkedButton()->text();//그룹화버튼(브랜드명 받아오기)
    QString month=ui->comboBox_2->currentText();//조회할 월 받아오기
    QSqlQuery query;
    query.prepare("SELECT sum(판매량) FROM "+brand_name+" WHERE 월 ='"+month+"';");//where문으로 특정월의 총 판매량 구하기
    query.exec();
    if(query.next())
    {
        QString a=query.value(0).toString();//월 총판매량
        ui->label_sale_2->setText(a);
        ui->label_sale_2->setAlignment(Qt::AlignCenter);
    }
    else
    {
        qDebug()<<query.lastError();
        qDebug()<<("SELECT sum(판매량) FROM "+brand_name+" WHERE 월 ='"+month+"';");//쿼리문이 제대로 적혀있는지 확인
    }
}

void danawa::over_month(QAbstractButton*){      //전월 대비 판매량 비교
    QString a,a1, a2, b;
    int c;
    QString m1,m2;
    QSqlQuery query;
    QString brand_name=ui->car_table_Group->checkedButton()->text();
    QString month=ui->comboBox_2->currentText();
    if(month=="01월")
    {
        query.prepare("SELECT sum(판매량) FROM "+brand_name+" WHERE 월 ='"+m1+"';");
        query.exec();
        if(query.next())
        {
            QString a=query.value(0).toString();
            ui->label_sale_5->setText(a);//안해주면 다른 달 조회 후 1월달 조회시 지난달 판매량 대비가 생김
            ui->label_sale_5->setAlignment(Qt::AlignCenter);
        }
    }
    else if(month!="01월")
    {
        if(month=="02월")
        {
            m1="02월";
            m2="01월";
        }
        else if(month=="03월")
        {
            m1="03월";
            m2="02월";
        }
        else if(month=="04월")
        {
            m1="04월";
            m2="03월";
        }
        else if(month=="05월")
        {
            m1="05월";
            m2="04월";
        }
        else if(month=="06월")
        {
            m1="06월";
            m2="07월";
        }
        else if(month=="08월")
        {
            m1="08월";
            m2="07월";
        }
        else if(month=="09월")
        {
            m1="09월";
            m2="08월";
        }
        else if(month=="10월")
        {
            m1="10월";
            m2="09월";
        }
        else if(month=="11월")
        {
            m1="11월";
            m2="10월";
        }
        else if(month=="12월")
        {
            m1="12월";
            m2="11월";
        }
        query.prepare("SELECT sum(판매량) FROM "+brand_name+" WHERE 월 ='"+m1+"';");
        query.exec();
        if(query.next())
        {
            a1=query.value(0).toString();
            // qDebug()<<a1;
        }
        query.prepare("SELECT sum(판매량) FROM "+brand_name+" WHERE 월 ='"+m2+"';");
        query.exec();
        if(query.next())
        {
            a2=query.value(0).toString();
            b=query.value(0).toString();
            // qDebug()<<a2;
            // qDebug()<<b;
        }
        int c=(a1.toInt() - a2.toInt());

        if(c>0)//이번달 판매량 대비 지난달 판매량의 차가 양수일때
        {
            a=a.setNum(c);
            a="▲"+a;//상승 아이콘 표시
            ui->label_sale_5->setText(a);
            ui->label_sale_5->setAlignment(Qt::AlignCenter);
            ui->label_sale_5->setStyleSheet("QLabel{color:red}");//지난달과 비교해서 판매량이 상승했으므로 빨간색
        }
        else if(c<0)
        {
            c=abs(c);//이대로는 -가 나옴
            a=a.setNum(c);//절대값으로 변경
            a="▼"+a;//하락아이콘표시
            ui->label_sale_5->setText(a);
            ui->label_sale_5->setAlignment(Qt::AlignCenter);
            ui->label_sale_5->setStyleSheet("QLabel{color:blue}");//지난달과 비교해서 판매량이 하락했으니 파랑색
        }
    }
    ui->label_sale_4->setText(b);//지난달 판매량표기
    ui->label_sale_4->setAlignment(Qt::AlignCenter);
    // ui->label_sale_5->setText(a);
    // ui->label_sale_5->setAlignment(Qt::AlignCenter);
    // ui->label_sale_5->setStyleSheet("QLabel{color:red}");
}



void danawa::brand_logo(QAbstractButton *){       //판매량 조회창 선택한 브랜드의 로고 띄우기
    QString aa = ui->car_table_Group->checkedButton()->text();
    QPixmap brand("C:/Users/user/Desktop/QT/qqq/"+aa+"_logo.PNG");
    ui->label_brand->setPixmap(brand);
}



void danawa :: car_info(QAbstractButton*){ //자동차 버튼 누르면 백과 정보
    ui->stackedWidget->setCurrentIndex(2);
    QString aa = ui -> car_info_Group->checkedButton()->text(); //그룹화버튼

    QSqlQuery query;
    if (query.exec("SELECT * FROM car_info WHERE 모델 = '" + aa + "'")) {
        if (query.next()) {
            QString a = query.value(1).toString();
            QString b = query.value(2).toString();
            QString c = query.value(3).toString();
            QString d = query.value(4).toString();
            QString e = query.value(5).toString();
            QString f = query.value(6).toString();
            QString g = query.value(7).toString();

            QPixmap car("C:/Users/user/Desktop/QT/qqq/"+aa+".PNG");
            ui->car_info_1->setPixmap(car);
            ui->car_info_2->setText(a); //모델이름표기
            ui->car_info_2->setAlignment(Qt::AlignCenter); //모델이름 가운대 정렬
            ui->car_info_3->setText(b); //가격표기
            ui->car_info_4->setText(c); // 최저가표기
            ui->car_info_5->setText(d); //출시일 표기
            ui->car_info_6->setText(e); // 차종 표기
            ui->car_info_7->setText(f); // 연료 표기
            ui->car_info_8->setText(g); // 연비 표기
        }
    }

    connect(ui->RED_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_red.PNG");
        ui->car_info_1->setPixmap(color);
    });

    connect(ui->BLACK_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_black.PNG");
        ui->car_info_1->setPixmap(color);
    });

    connect(ui->WHITE_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_white.PNG");
        ui->car_info_1->setPixmap(color);
    });
    connect(ui->GRAY_btn, &QPushButton::clicked, [=]() {
        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+aa+"_gray.PNG");
        ui->car_info_1->setPixmap(color);
    });

}


void danawa::on_mainbtn_clicked() // 메인 다나와 로고 눌렀을때
{
    ui->stackedWidget->setCurrentIndex(0); // 자동차 브랜드별 선택 사항
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->stackedWidget_3->setCurrentIndex(0);
    ui->stackedWidget_4->setCurrentIndex(0);
}




void danawa :: Move_P1_stackedWidget_1(){
    ui->stackedWidget_3->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_2(){
    ui->stackedWidget_3->setCurrentIndex(1);
}
void danawa :: Move_P1_stackedWidget_3(){
    ui->stackedWidget_2->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_4(){
    ui->stackedWidget_2->setCurrentIndex(1);
}
void danawa :: Move_P1_stackedWidget_5(){
    ui->stackedWidget_4->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_6(){
    ui->stackedWidget_4->setCurrentIndex(1);
}
void danawa :: Move_P1_stackedWidget_7(){
    ui->stackedWidget_5->setCurrentIndex(0);
}
void danawa :: Move_P1_stackedWidget_8(){
    ui->stackedWidget_5->setCurrentIndex(1);
}
void danawa :: Move_P2_stackedWidget_1(){
    ui->stackedWidget_6->setCurrentIndex(0);
}
void danawa :: Move_P2_stackedWidget_2(){
    ui->stackedWidget_6->setCurrentIndex(1);
}




void danawa ::Move_Page0(){

    ui->stackedWidget->setCurrentIndex(0);
}
void danawa ::Move_Page1(){
    ui->stackedWidget->setCurrentIndex(1);
}
void danawa ::Move_Page2(){
    ui->stackedWidget->setCurrentIndex(2);
}


void danawa :: Move_Page4(){
    ui->stackedWidget->setCurrentIndex(4);

}


void danawa :: Move_Page5(){
    ui->stackedWidget->setCurrentIndex(5);
}
void danawa ::Move_Page6(){
    ui->stackedWidget->setCurrentIndex(6);
}
void danawa ::Move_Page7(){
    ui->stackedWidget->setCurrentIndex(7);
}
void danawa ::Move_Page8(){
    ui->stackedWidget->setCurrentIndex(8);
}
void danawa ::Move_Page9(){
    ui->stackedWidget->setCurrentIndex(9);
}



void danawa ::D_HD_Btn(){
    ui->stackedWidget_7->setCurrentIndex(0);
}

void danawa :: D_KIA_Btn(){
    ui->stackedWidget_7->setCurrentIndex(1);
}

void danawa :: D_GENESIS_Btn(){
    ui->stackedWidget_7->setCurrentIndex(2);
}
void danawa ::D_BMW_Btn(){
    ui->stackedWidget_7->setCurrentIndex(4);
}
void danawa ::D_BENZ_Btn(){
    ui->stackedWidget_7->setCurrentIndex(5);
}




void danawa::on_inquirybtn_2_clicked() // 조회하기 눌렀을때
{
    QString brand = ui -> car_table_Group->checkedButton()->text(); //그룹화버튼

    ui->tableWidget->clearContents();
    ui->tableWidget->setRowCount(0);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //테이블 위젯 사이즈 맞추기

    QString month1=ui->comboBox_5->currentText(); // 작은 월
    QString month2=ui->comboBox_7->currentText(); // 큰 월

    int row = 0;
    QSqlQuery qry;
    double sumsales = 0;

    QString value;
    value = "SELECT 차명, SUM(판매량) FROM "+brand+" WHERE 월 BETWEEN'"+ month1 +"' AND '"+month2+"' GROUP BY 차명 ORDER BY SUM(판매량) DESC";
    qry.exec(value);
    while(qry.next())
    {

        QString car_name = qry.value(0).toString(); // 차명
        int sales = qry.value(1).toInt(); // 판매량

        sumsales += sales;
        QPushButton* button = new QPushButton;
        button->setText(car_name);

        ui->tableWidget->insertRow(row);
        ui->tableWidget->setCellWidget(row,0,button);// 자동차이름만 버튼으로 만들기
        ui->tableWidget->setItem(row,1,new QTableWidgetItem(QString::number(sales)));

        row++;
        connect(button, &QPushButton::clicked, [=]() {
            ui->stackedWidget->setCurrentIndex(2);
            QSqlQuery query;
            if (query.exec("SELECT * FROM car_info WHERE 모델 = '" + car_name + "'")) {
                if (query.next()) {
                    QString a = query.value(1).toString();
                    QString b = query.value(2).toString();
                    QString c = query.value(3).toString();
                    QString d = query.value(4).toString();
                    QString e = query.value(5).toString();
                    QString f = query.value(6).toString();
                    QString g = query.value(7).toString();
                    QPixmap car("C:/Users/user/Desktop/QT/qqq/"+car_name+".PNG");
                    ui->car_info_1->setPixmap(car);
                    ui->car_info_2->setText(a); //모델이름표기
                    ui->car_info_2->setAlignment(Qt::AlignCenter); //모델이름 가운대 정렬
                    ui->car_info_3->setText(b); //가격표기
                    ui->car_info_4->setText(c); // 최저가표기
                    ui->car_info_5->setText(d); //출시일 표기
                    ui->car_info_6->setText(e); // 차종 표기
                    ui->car_info_7->setText(f); // 연료 표기
                    ui->car_info_8->setText(g); // 연비 표기+

                    connect(ui->RED_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_red.PNG");
                        ui->car_info_1->setPixmap(color);
                    });

                    connect(ui->BLACK_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_black.PNG");
                        ui->car_info_1->setPixmap(color);
                    });

                    connect(ui->WHITE_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_white.PNG");
                        ui->car_info_1->setPixmap(color);
                    });
                    connect(ui->GRAY_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_gray.PNG");
                        ui->car_info_1->setPixmap(color);
                    });
                }
            }
        });

    }

    row = 0;
    QSqlQueryModel qry1;
    qry1.setQuery("SELECT SUM(판매량) FROM "+brand+" WHERE 월 BETWEEN'"+ month1 +"' AND '"+month2+"' GROUP BY 차명 ORDER BY SUM(판매량) DESC");
    for(int i=0; i<qry1.rowCount();i++)
    {
        int sales= qry1.record(i).value("SUM(판매량)").toInt();
        double rate = round((sales/sumsales) * 100 *10)/10;
        ui->tableWidget->setItem(i,2,new QTableWidgetItem(tr("%1%").arg(rate,0,'f',1)));
    }
}



void danawa::on_inquirybtn_4_clicked()
{
    QString model = ui -> car_model_Group->checkedButton()->text(); //그룹화버튼

    ui->tableWidget_8->clearContents();
    ui->tableWidget_8->setRowCount(0);
    ui->tableWidget_8->setColumnCount(3); //행 갯수
    ui->tableWidget_8->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch); //테이블 위젯 사이즈 맞추기

    QString month1=ui->comboBox_11->currentText(); // 작은 월
    QString month2=ui->comboBox_13->currentText(); // 큰 월

    int row = 0;
    QSqlQuery qry;
    double sumsales = 0;

    QString value;
    value = "SELECT 차명, SUM(판매량) FROM "+model+" WHERE 월 BETWEEN'"+ month1 +"' AND '"+month2+"' GROUP BY 차명 ORDER BY SUM(판매량) DESC";
    qry.exec(value);
    while(qry.next())
    {

        QString car_name = qry.value(0).toString(); // 차명
        int sales = qry.value(1).toInt(); // 판매량1

        sumsales += sales;
        QPushButton* button = new QPushButton;
        button->setText(car_name);

        ui->tableWidget_8->insertRow(row);
        ui->tableWidget_8->setCellWidget(row,0,button);// 자동차이름만 버튼으로 만들기
        ui->tableWidget_8->setItem(row,1,new QTableWidgetItem(QString::number(sales)));

        row++;
        connect(button, &QPushButton::clicked, [=]() {
            ui->stackedWidget->setCurrentIndex(2);
            QSqlQuery query;
            if (query.exec("SELECT * FROM car_info WHERE 모델 = '" + car_name + "'")) {
                if (query.next()) {
                    QString a = query.value(1).toString();
                    QString b = query.value(2).toString();
                    QString c = query.value(3).toString();
                    QString d = query.value(4).toString();
                    QString e = query.value(5).toString();
                    QString f = query.value(6).toString();
                    QString g = query.value(7).toString();
                    QPixmap car("C:/Users/user/Desktop/QT/qqq/"+car_name+".PNG");
                    ui->car_info_1->setPixmap(car);
                    ui->car_info_2->setText(a); //모델이름표기
                    ui->car_info_2->setAlignment(Qt::AlignCenter); //모델이름 가운대 정렬
                    ui->car_info_3->setText(b); //가격표기
                    ui->car_info_4->setText(c); // 최저가표기
                    ui->car_info_5->setText(d); //출시일 표기
                    ui->car_info_6->setText(e); // 차종 표기
                    ui->car_info_7->setText(f); // 연료 표기
                    ui->car_info_8->setText(g); // 연비 표기+

                    connect(ui->RED_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_red.PNG");
                        ui->car_info_1->setPixmap(color);
                    });

                    connect(ui->BLACK_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_black.PNG");
                        ui->car_info_1->setPixmap(color);
                    });

                    connect(ui->WHITE_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_white.PNG");
                        ui->car_info_1->setPixmap(color);
                    });
                    connect(ui->GRAY_btn, &QPushButton::clicked, [=]() {
                        QPixmap color("C:/Users/user/Desktop/QT/qqq/"+car_name+"_gray.PNG");
                        ui->car_info_1->setPixmap(color);
                    });
                }
            }
        });

    }

    row = 0;
    QSqlQueryModel qry1;
    qry1.setQuery("SELECT SUM(판매량) FROM "+model+" WHERE 월 BETWEEN'"+ month1 +"' AND '"+month2+"' GROUP BY 차명 ORDER BY SUM(판매량) DESC");
    for(int i=0; i<qry1.rowCount();i++)
    {
        int sales= qry1.record(i).value("SUM(판매량)").toInt();
        double rate = round((sales/sumsales) * 100 *10)/10;
        ui->tableWidget_8->setItem(i,2,new QTableWidgetItem(tr("%1%").arg(rate,0,'f',1)));
    }
}





danawa::~danawa()
{
    delete ui;
}




