//---------------------------------------------------------------------------

#include <vcl.h>
#include <cmath>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
int a,b,c;
int i;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton9Click(TObject *Sender)
{
	if(Label1->Caption==0)
	{
	Label1->Caption=1;
	}
	else
	{
		Label1->Caption=Label1->Caption+"1";
    }

}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton10Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=2;
	}
	else
	{
		Label1->Caption=Label1->Caption+"2";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton11Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=3;
	}
	else
	{
		Label1->Caption=Label1->Caption+"3";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton5Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=4;
	}
	else
	{
		Label1->Caption=Label1->Caption+"4";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton6Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=5;
	}
	else
	{
		Label1->Caption=Label1->Caption+"5";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton7Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=6;
	}
	else
	{
		Label1->Caption=Label1->Caption+"6";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=7;
	}
	else
	{
		Label1->Caption=Label1->Caption+"7";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton2Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=8;
	}
	else
	{
		Label1->Caption=Label1->Caption+"8";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton3Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=9;
	}
	else
	{
		Label1->Caption=Label1->Caption+"9";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton13Click(TObject *Sender)
{
if(Label1->Caption==0)
	{
	Label1->Caption=0;
	}
	else
	{
		Label1->Caption=Label1->Caption+"0";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton15Click(TObject *Sender)
{
Label1->Caption=0;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton4Click(TObject *Sender)
{
a=StrToInt(Label1->Caption);
Label1->Caption=0;
i=1;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton8Click(TObject *Sender)
{
a=StrToInt(Label1->Caption);
Label1->Caption=0;
i=2;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton12Click(TObject *Sender)
{
a=StrToInt(Label1->Caption);
Label1->Caption=0;
i=3;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton16Click(TObject *Sender)
{
a=StrToInt(Label1->Caption);
Label1->Caption=0;
i=4;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::SpeedButton14Click(TObject *Sender)
{
b=StrToInt(Label1->Caption);
if(i==1)
	{
	c=a+b;
	}
		if(i==2)
		{
		c=a-b;
		}
if(i==3)
{
c=a*b;
}
	if(i==4)
	{
	c=a/b;
	}
Label1->Caption=c;

}
//---------------------------------------------------------------------------



