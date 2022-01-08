//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::fayl2Click(TObject *Sender)
{
 OpenDialog1->Execute();
 Memo1->Lines->LoadFromFile(OpenDialog1->FileName);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::saqlash1Click(TObject *Sender)
{
SaveDialog1->Execute();
Memo1->Lines->SaveToFile(SaveDialog1->FileName);

}
//---------------------------------------------------------------------------
void __fastcall TForm1::pechat1Click(TObject *Sender)
{
PrintDialog1->Execute();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::yopish1Click(TObject *Sender)
{
Form1->Close();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::shrift1Click(TObject *Sender)
{
FontDialog1->Execute();
Memo1->Font=FontDialog1->Font;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::shrift2Click(TObject *Sender)
{
ColorDialog1->Execute();
Memo1->Color=ColorDialog1->Color;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::belgilsh1Click(TObject *Sender)
{
Memo1->SelectAll();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::belgilsh2Click(TObject *Sender)
{
Memo1->CopyToClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::qoyish1Click(TObject *Sender)
{
Memo1->PasteFromClipboard();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::tozalash1Click(TObject *Sender)
{
Memo1->Clear();
}
//---------------------------------------------------------------------------
