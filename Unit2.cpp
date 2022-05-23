//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
        : TForm(Owner)
{
c_p_voprosov = 1;

        variant_otv_button1_v1 = "Вы человек, который не сравнивает себя с другими. Такие люди чаще добивается успеха и здраво оценивают свои способности и таланты. ";
        variant_otv_button2_v1 = "Вы человек, который неспособен оценить собственные возможности и таланты здраво, привык обесценивать и постоянно сравнивать всё то, что ему дано. Вы крайне сложно достигаете успеха. Даже если внутренний потенциал огромен, Вы попросту не даете ему реализоваться. ";

        variant_otv_button1_v2 = "Нормально воспринимаете критику, но порой даже здравая и конструктивная критика может быть принята болезненно, если подаётся без запроса.";
        variant_otv_button2_v2 = "Очень болезненно воспринимаете критику в свой адрес, что плохо сказывается на вашей самооценке и настроении. ";

        variant_otv_button1_v3 = "Решаете проблемы по ходу их поступления, не боитесь ошибиться. Считаете, что лучше жалеть о том, что ты сделал, чем жалеть о бездействии. ";
        variant_otv_button2_v3 = "Часто бежите от проблем, предпочитаете ждать, пока всё решится само собой, но знаете, что это не доведет до добра. ";

        variant_otv_button1_v4 = "Вы ставите свои интересы выше похвалы. ";
        variant_otv_button2_v4 = "Также готовы отказаться от своих ценностей, лишь бы получить одобрение от людей, что, к сожалению, говорит о низкой самооценке и неспособности получить одобрение от самого себя. ";

        variant_otv_button1_v5 = "Вы не извиняетесь и не оправдываетесь по каждой мелочи. ";
        variant_otv_button2_v5 = "Постоянные оправдания с Вашей стороны свидетельствуют о склонности переживать чувство вины и обвинять себя по мелочам. ";

        variant_otv_button1_v6 = "В незнакомой компании вы любите сразу переключать внимание на себя или активно участвуете в разговоре. ";
        variant_otv_button2_v6 = "В незнакомой компании предпочитаете сначала оценить и узнать новых людей, чем сразу вступать с ними в активный разговор. ";

        variant_otv_button1_v7 = "Вы создаете впечатление уверенного в себе человека.";
        variant_otv_button2_v7 = "Вы неуверенный в себе человек, об этом говорит ваша сутулость, скованность движений и тихий голос.";

        cap_button1_v1 = "Любовь";
        cap_button2_v1 = "Ненависть";

        cap_button1_v2 = "Легкость";
        cap_button2_v2 = "Тяжесть";

        cap_button1_v3 = "Получающий";
        cap_button2_v3 = "Беспомощность";

        cap_button1_v4 = "Принятие";
        cap_button2_v4 = "Одиночество";

        cap_button1_v5 = "Гордость";
        cap_button2_v5 = "Скромность";

        cap_button1_v6 = "Свет";
        cap_button2_v6 = "Тень";

        cap_button1_v7 = "Я";
        cap_button2_v7 = "Другие";



}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormCanResize(TObject *Sender, int &NewWidth,
      int &NewHeight, bool &Resize)
{
        Resize = False;
}
//---------------------------------------------------------------------------







void __fastcall TForm2::SpeedButton1Click(TObject *Sender)
{
        cap_button1 = SpeedButton1->Caption;

        if(cap_button1==cap_button1_v1){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v1);

        Image2->Picture->LoadFromFile("k_vopr\\h2.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p2.jpg");

        SpeedButton1->Caption = cap_button1_v2;
        SpeedButton2->Caption = cap_button2_v2;
        }

        if(cap_button1==cap_button1_v2){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v2);

        Image2->Picture->LoadFromFile("k_vopr\\h3.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p3.jpg");

        SpeedButton1->Caption = cap_button1_v3;
        SpeedButton2->Caption = cap_button2_v3;
        }

        if(cap_button1==cap_button1_v3){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v3);

        Image2->Picture->LoadFromFile("k_vopr\\h4.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p4.jpg");

        SpeedButton1->Caption = cap_button1_v4;
        SpeedButton2->Caption = cap_button2_v4;
        }

        if(cap_button1==cap_button1_v4){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v4);

        Image2->Picture->LoadFromFile("k_vopr\\h5.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p5.jpg");

        SpeedButton1->Caption = cap_button1_v5;
        SpeedButton2->Caption = cap_button2_v5;
        }

        if(cap_button1==cap_button1_v5){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v5);

        Image2->Picture->LoadFromFile("k_vopr\\h6.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p6.jpg");

        SpeedButton1->Caption = cap_button1_v6;
        SpeedButton2->Caption = cap_button2_v6;
        }

        if(cap_button1==cap_button1_v6){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v6);

        Image2->Picture->LoadFromFile("k_vopr\\h7.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p7.jpg");

        SpeedButton1->Caption = cap_button1_v7;
        SpeedButton2->Caption = cap_button2_v7;
        }

        if(cap_button1==cap_button1_v7){
        Form1->RichEdit1->Lines->Add(variant_otv_button1_v7);

        Form2->Close();

        Form1->Caption="Результат";

        Form1->Image1->Picture->LoadFromFile("f3.jpg");
        Form1->Image2->Visible=false;

        Form1->RichEdit1->Visible=true;
        }


        c_p_voprosov++;
        Label1->Caption = IntToStr(c_p_voprosov);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::SpeedButton2Click(TObject *Sender)
{
        cap_button2 = SpeedButton2->Caption;

        if(cap_button2==cap_button2_v1){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v1);

        Image2->Picture->LoadFromFile("k_vopr\\h2.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p2.jpg");

        SpeedButton1->Caption = cap_button1_v2;
        SpeedButton2->Caption = cap_button2_v2;
        }

        if(cap_button2==cap_button2_v2){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v2);

        Image2->Picture->LoadFromFile("k_vopr\\h3.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p3.jpg");

        SpeedButton1->Caption = cap_button1_v3;
        SpeedButton2->Caption = cap_button2_v3;
        }

        if(cap_button2==cap_button2_v3){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v3);

        Image2->Picture->LoadFromFile("k_vopr\\h4.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p4.jpg");

        SpeedButton1->Caption = cap_button1_v4;
        SpeedButton2->Caption = cap_button2_v4;
        }

        if(cap_button2==cap_button2_v4){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v4);

        Image2->Picture->LoadFromFile("k_vopr\\h5.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p5.jpg");

        SpeedButton1->Caption = cap_button1_v5;
        SpeedButton2->Caption = cap_button2_v5;
        }

        if(cap_button2==cap_button2_v5){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v5);

        Image2->Picture->LoadFromFile("k_vopr\\h6.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p6.jpg");

        SpeedButton1->Caption = cap_button1_v6;
        SpeedButton2->Caption = cap_button2_v6;
        }

        if(cap_button2==cap_button2_v6){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v6);

        Image2->Picture->LoadFromFile("k_vopr\\h7.jpg");
        Image3->Picture->LoadFromFile("k_vopr\\p7.jpg");

        SpeedButton1->Caption = cap_button1_v7;
        SpeedButton2->Caption = cap_button2_v7;
        }

        if(cap_button2==cap_button2_v7){
        Form1->RichEdit1->Lines->Add(variant_otv_button2_v7);

        Form2->Close();

        Form1->Caption="Результат";

        Form1->Image1->Picture->LoadFromFile("f3.jpg");
        Form1->Image2->Visible=false;

        Form1->RichEdit1->Visible=true;
        }
        
        c_p_voprosov++;
        Label1->Caption = IntToStr(c_p_voprosov);
}
//---------------------------------------------------------------------------

void __fastcall TForm2::FormActivate(TObject *Sender)
{
        SpeedButton1->Caption=cap_button1_v1;
        SpeedButton2->Caption=cap_button2_v1;

}
//---------------------------------------------------------------------------


void __fastcall TForm2::FormCloseQuery(TObject *Sender, bool &CanClose)
{

  cap_button1 = SpeedButton1->Caption;
  cap_button2 = SpeedButton2->Caption;
  if(cap_button1==cap_button1_v7&&cap_button2==cap_button2_v7){
  CanClose=true;}
  else{
  CanClose=false;
  }
}
//---------------------------------------------------------------------------

