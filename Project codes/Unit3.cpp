//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "acPNG"
#pragma link "sButton"
#pragma link "sCheckBox"
#pragma link "sEdit"
#pragma link "sLabel"
#pragma link "sPanel"
#pragma resource "*.dfm"
TBernulli *Bernulli;
//---------------------------------------------------------------------------
__fastcall TBernulli::TBernulli(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
 