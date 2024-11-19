#include "MessengerForm.h"
#include "ApplicationForm.h"

System::Void Messenger::MessengerForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	ApplicationForm^ myform = gcnew ApplicationForm();
	myform->Show();
	this->Hide(); return System::Void();
}


System::Void Messenger::ApplicationForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
    return System::Void();
}