//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "sSkinManager.hpp"
#include "sButton.hpp"
#include "sPanel.hpp"
#include <ExtCtrls.hpp>
#include "sCheckBox.hpp"
#include "sEdit.hpp"
#include "sLabel.hpp"
#include "acPNG.hpp"
#include <jpeg.hpp>
#include <Menus.hpp>
#include "sRadioButton.hpp"
#include "sListBox.hpp"

//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TsPanel *sPanel1;
        TsButton *sButton1;
        TsButton *sButton2;
        TsButton *sButton3;
        TsButton *sButton4;
        TImage *Image4;
        TsSkinManager *sSkinManager1;
        TPanel *Panel1;
        TImage *Image5;
        TsPanel *Panel_kombinatorika;
        TsLabel *sLabel3;
        TImage *Image1;
        TsLabel *sLabel4;
        TImage *Image2;
        TsLabel *sLabel5;
        TImage *Image3;
        TsPanel *sPanel3;
        TsLabel *sLabel1;
        TsLabel *sLabel2;
        TsEdit *sEdit1;
        TsEdit *sEdit2;
        TsButton *sButton5;
        TsEdit *sEdit3;
        TsPanel *sPanel4;
        TsLabel *sLabel9;
        TsEdit *sEdit7;
        TsEdit *sEdit9;
        TsButton *sButton7;
        TsPanel *sPanel5;
        TsLabel *sLabel6;
        TsLabel *sLabel7;
        TsEdit *sEdit4;
        TsEdit *sEdit5;
        TsEdit *sEdit6;
        TsButton *sButton6;
        TsCheckBox *sCheckBox1;
        TsCheckBox *sCheckBox2;
        TsCheckBox *sCheckBox3;
        TMainMenu *MainMenu1;
        TMenuItem *M1;
        TMenuItem *K1;
        TMenuItem *B1;
        TMenuItem *t1;
        TMenuItem *S1;
        TsPanel *Panel_Bernulli;
        TsLabel *sLabel8;
        TImage *Image6;
        TsLabel *sLabel10;
        TImage *Image7;
        TsLabel *sLabel11;
        TImage *Image8;
        TsPanel *P_Bernulli_A;
        TsLabel *sLabel12;
        TsLabel *sLabel13;
        TsEdit *Edit_Bernulli_A_N;
        TsEdit *Edit_Bernulli_A_M;
        TsButton *Natija_Bernulli_A;
        TsEdit *Natija_Bernulli_A_edit;
        TsRadioButton *RB_Bernulli_A_P;
        TsRadioButton *RB_Bernulli_A_Q;
        TsEdit *Edit_Bernulli_A_PorQ;
        TsPanel *P_Bernulli_B;
        TsLabel *sLabel14;
        TsLabel *sLabel15;
        TsEdit *Natija_Bernulli_B_edit;
        TsEdit *Edit_Bernulli_B_N;
        TsButton *Natija_Bernulli_B;
        TsEdit *Edit_Bernulli_B_M;
        TsRadioButton *RB_Bernulli_B_P;
        TsRadioButton *RB_Bernulli_B_Q;
        TsEdit *Edit_Bernulli_B_PorQ;
        TsPanel *P_Bernulli_C;
        TsLabel *sLabel16;
        TsLabel *sLabel17;
        TsEdit *Natija_Bernulli_C_edit;
        TsEdit *Edit_Bernulli_C_M;
        TsEdit *Edit_Bernulli_C_N;
        TsButton *Natija_Bernulli_C;
        TsRadioButton *RB_Bernulli_C_P;
        TsRadioButton *RB_Bernulli_C_Q;
        TsEdit *Edit_Bernulli_C_PorQ;
        TsCheckBox *ChB_Bernulli_A;
        TsCheckBox *ChB_bernulli_B;
        TsCheckBox *ChB_bernulli_C;
        TsLabel *sLabel18;
        TsEdit *Edit_Bernulli_B_M2;
        TsPanel *Panel_Puasson;
        TsLabel *sLabel19;
        TImage *Image9;
        TsLabel *sLabel20;
        TImage *Image10;
        TsLabel *sLabel21;
        TImage *Image11;
        TsLabel *sLabel22;
        TImage *Image12;
        TImage *Image13;
        TsPanel *P_Puasson_A;
        TsLabel *sLabel23;
        TsLabel *sLabel24;
        TsLabel *sLabel25;
        TsEdit *Edit_Puasson_A_N;
        TsEdit *Edit_Puasson_A_M;
        TsButton *Natija_Puasson_A;
        TsEdit *Natija_Puasson_A_edit;
        TsEdit *Edit_Puasson_A_P;
        TsPanel *P_Puasson_B;
        TsLabel *sLabel26;
        TsLabel *sLabel27;
        TsLabel *sLabel28;
        TsLabel *sLabel29;
        TsEdit *Natija_Puasson_B_edit;
        TsEdit *Edit_Puasson_B_N;
        TsButton *Natija_Puasson_B;
        TsEdit *Edit_Puasson_B_m1;
        TsEdit *Edit_Puasson_B_P;
        TsEdit *Edit_Puasson_B_m2;
        TsPanel *P_Puasson_C;
        TsLabel *sLabel30;
        TsLabel *sLabel31;
        TsEdit *Natija_Puasson_C_edit;
        TsEdit *Edit_Puasson_C_M;
        TsEdit *Edit_Puasson_C_N;
        TsButton *Natija_Puasson_C;
        TsRadioButton *RB_Puasson_C_P;
        TsRadioButton *RB_Puasson_C_Q;
        TsEdit *Edit_Puasson_C_PorQ;
        TsCheckBox *ChB_Puasson_A;
        TsCheckBox *ChB_Puasson_B;
        TsCheckBox *ChB_Puasson_C;
        TsPanel *P_Puasson_D;
        TsLabel *sLabel33;
        TsEdit *Natija_Puasson_D_edit;
        TsEdit *Edit_Puasson_D_m1;
        TsEdit *Edit_Puasson_D_N;
        TsButton *Natija_Puasson_D;
        TsRadioButton *RB_Puasson_D_P;
        TsRadioButton *RB_Puasson_D_Q;
        TsEdit *Edit_Puasson_D_PorQ;
        TsCheckBox *ChB_Puasson_D;
        TsLabel *sLabel34;
        TsLabel *sLabel32;
        TsEdit *Edit_Puasson_D_m2;
        TsPanel *Panel_Miqdorlar;
        TsLabel *sLabel35;
        TImage *Image14;
        TsLabel *sLabel36;
        TImage *Image15;
        TsLabel *sLabel37;
        TImage *Image16;
        TsPanel *P_Miqdorlar_A;
        TsLabel *sLabel38;
        TsLabel *sLabel39;
        TsEdit *Edit_Miqdorlar_A_X;
        TsEdit *Edit_Miqdorlar_A_P;
        TsButton *Natija_Miqdorlar_A;
        TsEdit *Natija_Miqdorlar_A_edit;
        TsButton *qoshish_A;
        TsListBox *Listbox_A;
        TsPanel *P_Miqdorlar_B;
        TsLabel *sLabel40;
        TsLabel *sLabel41;
        TsEdit *Natija_Miqdorlar_B_edit;
        TsEdit *Edit_Miqdorlar_B_X;
        TsButton *Natija_Miqdorlar_B;
        TsEdit *Edit_Miqdorlar_B_P;
        TsButton *qoshish_B;
        TsListBox *Listbox_B;
        TsPanel *P_Miqdorlar_C;
        TsLabel *sLabel42;
        TsLabel *sLabel43;
        TsEdit *Natija_Miqdorlar_C_edit;
        TsEdit *Edit_Miqdorlar_C_P;
        TsEdit *Edit_Miqdorlar_C_X;
        TsButton *Natija_Miqdorlar_C;
        TsListBox *Listbox_C;
        TsButton *qoshish_C;
        TsCheckBox *ChB_Miqdorlar_A;
        TsCheckBox *ChB_Miqdorlar_B;
        TsCheckBox *ChB_Miqdorlar_C;
        TsButton *Tozalash_A;
        TsButton *Tozalash_B;
        TsButton *Tozalash_C;
        void __fastcall sButton1Click(TObject *Sender);
        void __fastcall sButton2Click(TObject *Sender);
        void __fastcall sButton3Click(TObject *Sender);
        void __fastcall sButton4Click(TObject *Sender);
        void __fastcall sCheckBox1Click(TObject *Sender);
        void __fastcall sCheckBox2Click(TObject *Sender);
        void __fastcall sCheckBox3Click(TObject *Sender);
        void __fastcall sButton5Click(TObject *Sender);
        void __fastcall sButton7Click(TObject *Sender);
        void __fastcall sButton6Click(TObject *Sender);
        void __fastcall K1Click(TObject *Sender);
        void __fastcall ChB_Bernulli_AClick(TObject *Sender);
        void __fastcall ChB_bernulli_BClick(TObject *Sender);
        void __fastcall ChB_bernulli_CClick(TObject *Sender);
        void __fastcall B1Click(TObject *Sender);
        void __fastcall t1Click(TObject *Sender);
        void __fastcall S1Click(TObject *Sender);
        void __fastcall Natija_Bernulli_AClick(TObject *Sender);
        void __fastcall Natija_Bernulli_BClick(TObject *Sender);
        void __fastcall Natija_Bernulli_CClick(TObject *Sender);
        void __fastcall ChB_Puasson_AClick(TObject *Sender);
        void __fastcall ChB_Puasson_BClick(TObject *Sender);
        void __fastcall ChB_Puasson_CClick(TObject *Sender);
        void __fastcall ChB_Puasson_DClick(TObject *Sender);
        void __fastcall Natija_Puasson_AClick(TObject *Sender);
        void __fastcall Natija_Puasson_BClick(TObject *Sender);
        void __fastcall Natija_Puasson_CClick(TObject *Sender);
        void __fastcall Natija_Puasson_DClick(TObject *Sender);
        void __fastcall ChB_Miqdorlar_AClick(TObject *Sender);
        void __fastcall ChB_Miqdorlar_BClick(TObject *Sender);
        void __fastcall ChB_Miqdorlar_CClick(TObject *Sender);
        void __fastcall qoshish_AClick(TObject *Sender);
        void __fastcall qoshish_BClick(TObject *Sender);
        void __fastcall qoshish_CClick(TObject *Sender);
        void __fastcall Natija_Miqdorlar_AClick(TObject *Sender);
        void __fastcall Tozalash_AClick(TObject *Sender);
        void __fastcall Tozalash_BClick(TObject *Sender);
        void __fastcall Tozalash_CClick(TObject *Sender);
        void __fastcall Natija_Miqdorlar_BClick(TObject *Sender);
        void __fastcall Natija_Miqdorlar_CClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
