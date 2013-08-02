//---------------------------------------------------------------------------

#ifndef MainUnitH
#define MainUnitH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Datasnap.Provider.hpp>
#include <Xml.Win.msxmldom.hpp>
#include <Xml.XMLDoc.hpp>
#include <Xml.xmldom.hpp>
#include <Xml.XMLIntf.hpp>
#include <Xmlxform.hpp>
#include <vector>
#include "stdio.h"
#include "stdlib.h"
//---------------------------------------------------------------------------
class TFormMainWindow : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControlMainWndow;
	TTabSheet *TabSheetFIS;
	TTabSheet *TabSheetDB;
	TXMLDocument *XMLDocument1;
	TXMLTransformProvider *XMLTransformProvider1;
	TButton *Button1;
private:	// User declarations
public:		// User declarations
	__fastcall TFormMainWindow(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMainWindow *FormMainWindow;
//---------------------------------------------------------------------------
#endif
