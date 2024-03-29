//---------------------------------------------------------------------------

#ifndef MainFormH
#define MainFormH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <FMX.Controls.hpp>
#include <FMX.Forms.hpp>
#include <FMX.Controls.Presentation.hpp>
#include <FMX.StdCtrls.hpp>
#include <FMX.Types.hpp>
//---------------------------------------------------------------------------
class TmyMainForm : public TForm
{
__published:	// IDE-managed Components
	TButton *loginNavigationButton;
	TButton *registrationNavigationButton;
	void __fastcall loginNavigationButtonClick(TObject *Sender);
	void __fastcall registrationNavigationButtonClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TmyMainForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TmyMainForm *myMainForm;
//---------------------------------------------------------------------------
#endif
