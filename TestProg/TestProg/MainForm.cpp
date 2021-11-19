#include "MainForm.h"



using namespace System;
using namespace System::Windows::Forms;

[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TestProg::MainForm form;
	Application::Run(% form);
}

/*
CFileDialog fileDialog(FALSE,
		NULL,
		L"save.ds",
		OFN_OVERWRITEPROMPT,
		NULL,
		NULL,
		0,
		TRUE);
	int result = fileDialog.DoModal();	//запустить диалоговое окно
	if (result == IDOK)	//если файл выбран
	{
		CFile cfile(fileDialog.GetPathName(), CFile::modeWrite | CFile::modeCreate);
		CString sText;

		for (int i = 0; i < m_listCtrl.GetItemCount(); i++) {
			cfile.Write(L"*", 1);
			cfile.Write(L"1", 1);
			cfile.Write(L"*", 1);
			for (int k = 0; k < 4; k++) {
				sText = m_listCtrl.GetItemText(i, k);
				if (sText == L"") {
					sText = L"&";
				}
				CStringA sUTF8 = CW2A(sText, CP_UTF8);
				cfile.Write(sUTF8, sUTF8.GetLength());
				cfile.Write(L"/", 1);
			}
			cfile.Write(L"\n", 1);
		}
		for (int i = 0; i < m_listCtrl2.GetItemCount(); i++) {
			cfile.Write(L"*", 1);
			cfile.Write(L"2", 1);
			cfile.Write(L"*", 1);
			for (int k = 0; k < 8; k++) {
				sText = m_listCtrl2.GetItemText(i, k);
				if (sText == L"") {
					sText = L"&";
				}
				CStringA sUTF8 = CW2A(sText, CP_UTF8);
				cfile.Write(sUTF8, sUTF8.GetLength());
				cfile.Write(L"/", 1);
			}
			cfile.Write(L"\n", 1);
		}
	}

*/