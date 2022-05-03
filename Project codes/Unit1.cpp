//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include<math.h>

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"

//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "sSkinManager"
#pragma link "sSkinManager"
#pragma link "sButton"
#pragma link "sPanel"
#pragma link "sCheckBox"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "acPNG"
#pragma link "sRadioButton"
#pragma link "sListBox"
#pragma resource "*.dfm"
TForm1 *Form1;

Double N,M,P,Q;
int *xArr=new int;
double *pArr=new double;
int indexA=0,indexB=0,indexC=0;
bool ArrNewA=true,ArrNewB=true,ArrNewC=true;

double sumAP=0,sumBP=0,sumCP=0;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sButton1Click(TObject *Sender)
{
Panel_Bernulli->Visible=false;
Panel_Miqdorlar->Visible=false;
Panel_Puasson->Visible=false;
Panel_kombinatorika->Visible=true;
ShowMessage("Formulalardan foydalanish uchun avval ularni faollashtirish kerak!\nFoallashtirish uchun kerakli formulani belgilang!");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton2Click(TObject *Sender)
{
Panel_kombinatorika->Visible=false;
Panel_Puasson->Visible=false;
Panel_Miqdorlar->Visible=false;
Panel_Bernulli->Visible=True;
ShowMessage("Formulalardan foydalanish uchun avval ularni faollashtirish kerak!\nFoallashtirish uchun kerakli formulani belgilang!");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton3Click(TObject *Sender)
{
Panel_kombinatorika->Visible=false;
Panel_Bernulli->Visible=false;
Panel_Puasson->Visible=False;
Panel_Miqdorlar->Visible=true;
ShowMessage("Formulalardan foydalanish uchun avval ularni faollashtirish kerak!\nFoallashtirish uchun kerakli formulani belgilang!");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton4Click(TObject *Sender)
{
Panel_kombinatorika->Visible=false;
Panel_Bernulli->Visible=False;
Panel_Miqdorlar->Visible=false;
Panel_Puasson->Visible=True;
ShowMessage("Formulalardan foydalanish uchun avval ularni faollashtirish kerak!\nFoallashtirish uchun kerakli formulani belgilang!");
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sCheckBox1Click(TObject *Sender)
{
if(sCheckBox1->Checked){
sPanel3->Enabled=True;
}
else{
 sPanel3->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sCheckBox2Click(TObject *Sender)
{
if(sCheckBox2->Checked){
sPanel4->Enabled=True;
}
else{
 sPanel4->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sCheckBox3Click(TObject *Sender)
{
if(sCheckBox3->Checked){
sPanel5->Enabled=True;
}
else{
 sPanel5->Enabled=false;
}
}
//---------------------------------------------------------------------------

int fact(int k){
 int n=1;
 for(int i=1;i<=k;i++){
 n*=i;
 }
return n;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::sButton5Click(TObject *Sender)
{
int result=0;
N=StrToInt(sEdit1->Text);
M=StrToInt(sEdit2->Text);
if(M>=N){
ShowMessage("m > n bo'lishi mumkin emas! \n Iltimos qayta kiriting!");
sEdit2->Text="";
sEdit2->SetFocus();
}else{
 result=fact(N)/fact(N-M);
 sEdit3->Text=result;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton7Click(TObject *Sender)
{
N=StrToInt(sEdit9->Text);
sEdit7->Text=fact(N);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::sButton6Click(TObject *Sender)
{
int result=0;
N=StrToInt(sEdit6->Text);
M=StrToInt(sEdit5->Text);
if(M>=N){
ShowMessage("m > n bo'lishi mumkin emas! \nIltimos qayta kiriting!");
sEdit5->Text="";
sEdit5->SetFocus();
}else{
 result=fact(N)/(fact(N-M)*fact(M));
 sEdit4->Text=result;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::K1Click(TObject *Sender)
{
// Kombinatorika->Show();
//Form2->Show();
//ShellExecute(Handle, 0, "D:\\EhtimollikVAstatistikaLAB.pdf", 0, 0, SW_NORMAL);
//Form2->AcroPDF1->src="D:\\EhtimollikVAstatistikaLAB.pdf";

}
//---------------------------------------------------------------------------






void __fastcall TForm1::ChB_Bernulli_AClick(TObject *Sender)
{
if(ChB_Bernulli_A->Checked){
  P_Bernulli_A->Enabled=True;
}else{
  P_Bernulli_A->Enabled=False;
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ChB_bernulli_BClick(TObject *Sender)
{
if(ChB_bernulli_B->Checked){
  P_Bernulli_B->Enabled=True;
}else{
  P_Bernulli_B->Enabled=False;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_bernulli_CClick(TObject *Sender)
{
if(ChB_bernulli_C->Checked){
  P_Bernulli_C->Enabled=True;
}else{
  P_Bernulli_C->Enabled=False;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::B1Click(TObject *Sender)
{
//Bernulli->Show();
//ShellExecute(Handle, 0, "D:\\Ehtimollik va statistika LAB.pdf", 0, 0, SW_NORMAL);
//Form2->Show();
//Form2->AcroPDF1->src="D:\\Ehtimollik va statistika LAB.pdf";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::t1Click(TObject *Sender)
{
//Tasodifiy->Show();
//ShellExecute(Handle, 0, "D:\\Ehtimollik va statistika LAB.pdf", 0, 0, SW_NORMAL);
//Form2->Show();
//Form2->AcroPDF1->src="D:\\Ehtimollik va statistika LAB.pdf";
}
//---------------------------------------------------------------------------


void __fastcall TForm1::S1Click(TObject *Sender)
{
//Statistika->Show();
//ShellExecute(Handle, 0, "D:\\Ehtimollik va statistika LAB.pdf", 0, 0, SW_NORMAL);
//Form2->Show();
//Form2->AcroPDF1->src="D:\\Ehtimollik va statistika LAB.pdf";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Bernulli_AClick(TObject *Sender)
{
N=StrToFloat(Edit_Bernulli_A_N->Text);
M=StrToInt(Edit_Bernulli_A_M->Text);
double PB= StrToFloat(Edit_Bernulli_A_PorQ->Text);
if(PB<=0 || PB >=1){
  if(RB_Bernulli_A_P->Checked)
  ShowMessage("Kechirasiz 0<p<1 bo'lishi kerak!\nQayta kiriting!");
  else
  ShowMessage("Kechirasiz 0<q<1 bo'lishi kerak!\nQayta kiriting!");

  Edit_Bernulli_A_PorQ->Text="";
  Edit_Bernulli_A_PorQ->SetFocus();
}else{
if(RB_Bernulli_A_P->Checked){
 P=PB;
 Q=1-P;
}else{
  Q=PB;
 P=1-Q;
}
}
Natija_Bernulli_A_edit->Text= (fact(N)/(fact(N-M)*fact(M)))*pow(P,M)*pow(Q,N-M);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Bernulli_BClick(TObject *Sender)
{
 N=StrToFloat(Edit_Bernulli_B_N->Text);
M=StrToInt(Edit_Bernulli_B_M->Text);
int M2=StrToInt(Edit_Bernulli_B_M2->Text);
if(RB_Bernulli_B_P->Checked){
 P=StrToFloat(Edit_Bernulli_B_PorQ->Text);

                if(P<1 && P>0){
                        Q=1-P;
                        double result=0;
                        for(int k=M;k<=M2;k++){
                                result=result+(fact(N)/(fact(N-k)*fact(k)))*pow(P,k)*pow(Q,N-k);
                        }
                        Natija_Bernulli_B_edit->Text=result;
                }else{
                        ShowMessage("Kechirasiz 0<p<1 oraliqdagi son kiritng!");
                        Edit_Bernulli_B_PorQ->Text="";
                        Edit_Bernulli_B_PorQ->SetFocus();
                }



}else{
        Q=StrToFloat(Edit_Bernulli_B_PorQ->Text);
                if(Q<1 && Q>0){
                        P=1-Q;
                        double result=0;
                        for(int k=M;k<=M2;k++){
                                result=result+(fact(N)/(fact(N-k)*fact(k)))*pow(P,k)*pow(Q,N-k);
                        }
                        Natija_Bernulli_B_edit->Text=result;
                }else{
                        ShowMessage("Kechirasiz 0<q<1 oraliqdagi son kiritng!");
                        Edit_Bernulli_B_PorQ->Text="";
                        Edit_Bernulli_B_PorQ->SetFocus();
                }


}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Bernulli_CClick(TObject *Sender)
{
  N=StrToFloat(Edit_Bernulli_C_N->Text);
M=StrToInt(Edit_Bernulli_C_M->Text);
if(RB_Bernulli_C_P->Checked){
 P=StrToFloat(Edit_Bernulli_C_PorQ->Text);
                if(P<1 && P>0){
                        Q=1-P;
                        double result=0;
                        for(int k=0;k<=M;k++){
                                result=result+(fact(N)/(fact(N-k)*fact(k)))*pow(P,k)*pow(Q,N-k);
                        }
                        Natija_Bernulli_C_edit->Text=result;

                }else{
                        ShowMessage("Kechirasiz 0<p<1 oraliqdagi son kiritng!");
                        Edit_Bernulli_C_PorQ->Text="";
                        Edit_Bernulli_C_PorQ->SetFocus();
                }
}else{
Q=StrToFloat(Edit_Bernulli_C_PorQ->Text);
                if(Q<1 && Q>0){
                        P=1-Q;
                        double result=0;
                        for(int k=0;k<=M;k++){
                                result=result+(fact(N)/(fact(N-k)*fact(k)))*pow(P,k)*pow(Q,N-k);
                        }
                        Natija_Bernulli_C_edit->Text=result;

                }else{
                        ShowMessage("Kechirasiz 0<q<1 oraliqdagi son kiritng!");
                        Edit_Bernulli_C_PorQ->Text="";
                        Edit_Bernulli_C_PorQ->SetFocus();
                }
}

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Puasson_AClick(TObject *Sender)
{
if(ChB_Puasson_A->Checked){
P_Puasson_A->Enabled=True;
}else{
P_Puasson_A->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Puasson_BClick(TObject *Sender)
{
if(ChB_Puasson_B->Checked){
P_Puasson_B->Enabled=True;
}else{
P_Puasson_B->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Puasson_CClick(TObject *Sender)
{
if(ChB_Puasson_C->Checked){
P_Puasson_C->Enabled=True;
}else{
P_Puasson_C->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Puasson_DClick(TObject *Sender)
{
if(ChB_Puasson_D->Checked){
P_Puasson_D->Enabled=True;
}else{
P_Puasson_D->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Puasson_AClick(TObject *Sender)
{
N=StrToFloat(Edit_Puasson_A_N->Text);
M=StrToFloat(Edit_Puasson_A_M->Text);
P=StrToFloat(Edit_Puasson_A_P->Text);

if(P<1 && P>0){
long double l=N*P;
long double result=(pow(l,M)*exp(-l))/fact(M);
Natija_Puasson_A_edit->Text=FloatToStr(result);
}else{
 ShowMessage("Kechirasiz 0<p<1 oraliqdagi son kiriting!");
 Edit_Puasson_A_P->Text="";
 Edit_Puasson_A_P->SetFocus();
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Puasson_BClick(TObject *Sender)
{
double m1=StrToFloat(Edit_Puasson_B_m1->Text);
double m2=StrToFloat(Edit_Puasson_B_m2->Text);
N=StrToFloat(Edit_Puasson_B_N->Text);
P=StrToFloat(Edit_Puasson_B_P->Text);

if(P<1 && P>0){
double l=N*P;
long double result=5;
for(int i=m1;i<=m2;i++){
result=result+pow(l,i)/fact(i);
}
result=result*exp(-l);
Natija_Puasson_B_edit->Text=FloatToStr(result);
}else{
 ShowMessage("Kechirasiz 0<p<1 oraliqdagi son kiriting!");
 Edit_Puasson_B_P->Text="";
 Edit_Puasson_B_P->SetFocus();
}


}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Puasson_CClick(TObject *Sender)
{
N=StrToFloat(Edit_Puasson_C_N->Text);
M=StrToFloat(Edit_Puasson_C_M->Text);


 if(RB_Puasson_C_P->Checked){
        P=StrToFloat(Edit_Puasson_C_PorQ->Text);
                if(P<1 && P>0){
                        Q=1-P;
                        double x=(M-N*P)/(sqrt(N*P*Q));
                        double result=1/sqrt(N*P*Q)*(1/sqrt(2*3.1415)*exp(-1*(x*x)/2));
                        Natija_Puasson_C_edit->Text=FloatToStr(result);
                }else{
                        ShowMessage("Kechirasiz 0<p<1 oraliqdagi son kiriting!");
                         Edit_Puasson_C_PorQ->Text="";
                         Edit_Puasson_C_PorQ->SetFocus();
                        }
 }else{

        Q=StrToFloat(Edit_Puasson_C_PorQ->Text);
                if(Q<1 && Q>0){
                        P=1-Q;
                        double x=(M-N*P)/(sqrt(N*P*Q));
                        double result=1/sqrt(N*P*Q)*(1/sqrt(2*3.1415)*exp(-1*(x*x)/2));
                        Natija_Puasson_C_edit->Text=FloatToStr(result);
                }else{
                        ShowMessage("Kechirasiz 0<q<1 oraliqdagi son kiriting!");
                         Edit_Puasson_C_PorQ->Text="";
                         Edit_Puasson_C_PorQ->SetFocus();
                        }
 }
}
//---------------------------------------------------------------------------
double integral(float x){
return (1./sqrt(2*3.2425))*(exp(-1*(x*x)/2));
}
void __fastcall TForm1::Natija_Puasson_DClick(TObject *Sender)
{
 double m1,m2;
 m1=StrToFloat(Edit_Puasson_D_m1->Text);
 m2=StrToFloat(Edit_Puasson_D_m2->Text);
 N= StrToFloat(Edit_Puasson_D_N->Text);
  if(RB_Puasson_D_P->Checked){
  P=StrToFloat(Edit_Puasson_D_PorQ->Text);
                if(P<1 && P>0){
                        Q=1-P;
                        double x1,x2;
                        x1=(m1-N*P)/(sqrt(N*P*Q));
                        x2=(m2-N*P)/(sqrt(N*P*Q));

                        double h1=x1/100, h2=x2/100;
                        double sum1=0;
                        for(int i=0;i<100;i++){
                        sum1=sum1+exp(-1*(i*i*h1*h1)/2);
                        }
                        sum1=sum1*h1*1./sqrt(2*3.1415);

                        double sum2=0;
                        for(int i=0;i<100;i++){
                                sum2=sum2+exp(-1*(i*i*h2*h2)/2);
                        }
                        sum2=sum2*h2*1./sqrt(2*3.1415);

                        Natija_Puasson_D_edit->Text=FloatToStr(sum2-sum1);
                }else{
                        ShowMessage("Kechirasiz 0<p<1 oraliqdagi son kiriting!");
                         Edit_Puasson_D_PorQ->Text="";
                         Edit_Puasson_D_PorQ->SetFocus();
                        }

 }else{
 Q=StrToFloat(Edit_Puasson_D_PorQ->Text);
                if(Q<1 && Q>0){
                        P=1-Q;
                        double x1,x2;
                        x1=(m1-N*P)/(sqrt(N*P*Q));
                        x2=(m2-N*P)/(sqrt(N*P*Q));

                        double h1=x1/100, h2=x2/100;
                        double sum1=0;
                        for(int i=0;i<100;i++){
                        sum1=sum1+exp(-1*(i*i*h1*h1)/2);
                        }
                        sum1=sum1*h1*1./sqrt(2*3.1415);

                        double sum2=0;
                        for(int i=0;i<100;i++){
                                sum2=sum2+exp(-1*(i*i*h2*h2)/2);
                        }
                        sum2=sum2*h2*1./sqrt(2*3.1415);

                        Natija_Puasson_D_edit->Text=FloatToStr(sum2-sum1);
                }else{
                        ShowMessage("Kechirasiz 0<q<1 oraliqdagi son kiriting!");
                         Edit_Puasson_D_PorQ->Text="";
                         Edit_Puasson_D_PorQ->SetFocus();
                        }

 }
 }
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Miqdorlar_AClick(TObject *Sender)
{
if(ChB_Miqdorlar_A->Checked){
P_Miqdorlar_A->Enabled=true;
}else{
P_Miqdorlar_A->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Miqdorlar_BClick(TObject *Sender)
{
if(ChB_Miqdorlar_B->Checked){
P_Miqdorlar_B->Enabled=true;
}else{
P_Miqdorlar_B->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ChB_Miqdorlar_CClick(TObject *Sender)
{
if(ChB_Miqdorlar_C->Checked){
P_Miqdorlar_C->Enabled=true;
}else{
P_Miqdorlar_C->Enabled=false;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::qoshish_AClick(TObject *Sender)
{
if(indexA!=0 && ArrNewA==true){ indexA=0;  sumAP=0;}
double X;
X=StrToFloat(Edit_Miqdorlar_A_X->Text);
P=StrToFloat(Edit_Miqdorlar_A_P->Text);
if(P>=1 || P<=0){
        ShowMessage("p ning qiymati xato!\nIltimos qayta kiriting!");
        Edit_Miqdorlar_A_P->Text="";
        Edit_Miqdorlar_A_P->SetFocus();
}else{
        sumAP += P;
        if(sumAP<=1){
                xArr[indexA]=X;
                pArr[indexA]=P;
                String satr=  "x"+FloatToStr(indexA+1)+"= "+FloatToStr(X)+",  p"+FloatToStr(indexA+1)+"= "+FloatToStr(P);
                Listbox_A->Items->Add(satr);
                indexA=indexA+1; ArrNewA=false;
                Edit_Miqdorlar_A_P->Text="";
                Edit_Miqdorlar_A_X->Text="";
                if(sumAP==1){ qoshish_A->Enabled=false; ShowMessage("p ning yig'indisi 1 ga teng bo'ldi\nBoshqa kirita olmaysiz!"); }
        }else {
                ShowMessage("kechirasiz p larning yig'indisi 1 dan oshib ketmasligi kerak!\nSiz yana maximum "+FloatToStr(1-(sumAP-P))+" sonini kirita olasiz!");
                sumAP -= P;
                }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::qoshish_BClick(TObject *Sender)
{
if(indexB!=0 && ArrNewB==true){ indexB=0; sumBP=0; }
double X;
X=StrToFloat(Edit_Miqdorlar_B_X->Text);
P=StrToFloat(Edit_Miqdorlar_B_P->Text);
if(P>=1 || P<=0){
        ShowMessage("p ning qiymati xato!\nIltimos qayta kiriting!");
        Edit_Miqdorlar_B_P->Text="";
        Edit_Miqdorlar_B_P->SetFocus();
}else{
        sumBP += P;
        if(sumBP<=1){
                xArr[indexB]=X;
                pArr[indexB]=P;
                String satr=  "x"+FloatToStr(indexB+1)+"= "+FloatToStr(X)+",  p"+FloatToStr(indexB+1)+"= "+FloatToStr(P);
                Listbox_B->Items->Add(satr);
                Edit_Miqdorlar_B_P->Text="";
                Edit_Miqdorlar_B_X->Text="";
                indexB=indexB+1;  ArrNewB=false;
                 if(sumBP==1){ qoshish_B->Enabled=false; ShowMessage("p ning yig'indisi 1 ga teng bo'ldi\nBoshqa kirita olmaysiz!"); }
        }else {
                ShowMessage("kechirasiz p larning yig'indisi 1 dan oshib ketmasligi kerak!\nSiz yana maximum "+FloatToStr(1-(sumBP-P))+" sonini kirita olasiz!");
                sumBP -= P;
                }
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::qoshish_CClick(TObject *Sender)
{
if(indexC!=0 && ArrNewC==true){ indexC=0;  sumCP=0; }
double X;
X=StrToFloat(Edit_Miqdorlar_C_X->Text);
P=StrToFloat(Edit_Miqdorlar_C_P->Text);
if(P>=1 || P<=0){
        ShowMessage("p ning qiymati xato!\nIltimos qayta kiriting!");
        Edit_Miqdorlar_C_P->Text="";
        Edit_Miqdorlar_C_P->SetFocus();
}else{
        sumCP += P;
        if(sumCP<=1){
                xArr[indexC]=X;
                pArr[indexC]=P;
                String satr=  "x"+FloatToStr(indexC+1)+"= "+FloatToStr(X)+",  p"+FloatToStr(indexC+1)+"= "+FloatToStr(P);
                Listbox_C->Items->Add(satr);
                Edit_Miqdorlar_C_P->Text="";
                Edit_Miqdorlar_C_X->Text="";
                indexC=indexC+1; ArrNewC=false;
                if(sumCP==1){ qoshish_C->Enabled=false; ShowMessage("p ning yig'indisi 1 ga teng bo'ldi\nBoshqa kirita olmaysiz!"); }
        }else {
                ShowMessage("kechirasiz p larning yig'indisi 1 dan oshib ketmasligi kerak!\nSiz yana maximum "+FloatToStr(1-(sumCP-P))+" sonini kirita olasiz!");
                sumCP -= P;
                }
}
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Natija_Miqdorlar_AClick(TObject *Sender)
{
double sum=0;
for(int i=0;i<indexA;i++){
sum=sum+xArr[i]*pArr[i];
}
Natija_Miqdorlar_A_edit->Text=FloatToStr(sum);
}
//----------------------------------------------------------------

void __fastcall TForm1::Tozalash_AClick(TObject *Sender)
{
ArrNewA=true;
qoshish_A->Enabled=True;
Listbox_A->Items->Clear();
Natija_Miqdorlar_A_edit->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Tozalash_BClick(TObject *Sender)
{
ArrNewB=true;
qoshish_B->Enabled=True;
Listbox_B->Items->Clear();
Natija_Miqdorlar_B_edit->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Tozalash_CClick(TObject *Sender)
{
ArrNewC=true;
qoshish_C->Enabled=True;
Listbox_C->Items->Clear();
Natija_Miqdorlar_C_edit->Text="";
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Miqdorlar_BClick(TObject *Sender)
{
double sum=0;
for(int i=0;i<indexB;i++){
sum=sum+(pArr[i]*(xArr[i]*xArr[i]));
}
double sum2=0;
for(int i=0;i<indexB;i++){
sum2=sum2+pArr[i]*xArr[i];
}
Natija_Miqdorlar_B_edit->Text=FloatToStr(sum-sum2*sum2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Natija_Miqdorlar_CClick(TObject *Sender)
{
double sum=0;
for(int i=0;i<indexC;i++){
sum=sum+(pArr[i]*(xArr[i]*xArr[i]));
}
double sum2=0;
for(int i=0;i<indexC;i++){
sum2=sum2+pArr[i]*xArr[i];
}
Natija_Miqdorlar_C_edit->Text=FloatToStr(sqrt(sum-sum2*sum2));

}
//---------------------------------------------------------------------------

