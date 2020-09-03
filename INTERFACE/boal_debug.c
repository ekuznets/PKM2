// BOAL 29/08/03  DEBUG Form in game
string totalInfo;
int idLngFile = -1;

void InitInterface(string iniName)
{
    GameInterface.title = "titleBoal_Debug";

    SendMessage(&GameInterface,"ls",MSG_INTERFACE_INIT,iniName);

	CalculateInfoData();
	
	SetFormatedText("INFO_TEXT",totalInfo);//"���������� ���������");
	//LanguageCloseFile(tmpLangFileID);
	SendMessage(&GameInterface,"lsl",MSG_INTERFACE_MSG_TO_NODE,"INFO_TEXT",5);

	SetEventHandler("InterfaceBreak","ProcessBreakExit",0); // ����� �� ����
	SetEventHandler("exitCancel","ProcessCancelExit",0); // ����� �� ���� �� �������� ��� Esc
	SetEventHandler("ievnt_command","ProcCommand",0); // ����� �� ����� ������ ��� (�� ���)
	SetEventHandler("evntDoPostExit","DoPostExit",0); // ����� �� ����������
}

void ProcessBreakExit()
{
	IDoExit( RC_INTERFACE_SALARY_EXIT );
}

void ProcessCancelExit()
{
	IDoExit( RC_INTERFACE_SALARY_EXIT );
}

void IDoExit(int exitCode)
{
	DelEventHandler("InterfaceBreak","ProcessBreakExit");
	DelEventHandler("exitCancel","ProcessCancelExit");
	DelEventHandler("ievnt_command","ProcCommand");
	DelEventHandler("evntDoPostExit","DoPostExit");

	interfaceResultCommand = exitCode;
	EndCancelInterface(true);
}

void ProcCommand()
{
	string comName = GetEventData();
	string nodName = GetEventData();

	switch(nodName)
	{
	    case "B_OK":
		  if(comName=="activate" || comName=="click")
		  {
			 PostEvent("evntDoPostExit",1,"l",RC_INTERFACE_SALARY_EXIT);
		  }
	    break;
	    case "B_F1":
		  if(comName=="activate" || comName=="click")
		  {
		      CalculateInfoDataF1();
		  }
	    break;
	    case "B_F2":
		  if(comName=="activate" || comName=="click")
		  {
		      CalculateInfoDataF2();
		  }
	    break;
	    case "B_F3":
		  if(comName=="activate" || comName=="click")
		  {
		      CalculateInfoDataF3();
		  }
	    break;
	    case "B_F4":
		  if(comName=="activate" || comName=="click")
		  {
		      CalculateInfoDataF4();
		  }
	    break;
	    case "B_F5":
		  if(comName=="activate" || comName=="click")
		  {
		      CalculateInfoDataF5();	
		  }
	    break;
	}
}


void DoPostExit()
{
	int exitCode = GetEventData();
	IDoExit(exitCode);
}

void CalculateInfoData()
{
	idLngFile = LanguageOpenFile("ItemsDescribe.txt");// ����� ��� ������ ������
	// ��� ����������� ������ ���������� � ������� � totalInfo - ������������� -->
	totalInfo = "��� ��������. ��������� ��������� �������� ������������ �������. �������� ������: "+LanguageConvertString(idLngFile,"new_string");
	totalInfo = totalInfo + "F1 - " + descF1 + LanguageConvertString(idLngFile,"new_string") +
	                        "F2 - " + descF2 + LanguageConvertString(idLngFile,"new_string") +
	                        "F3 - " + descF3 + LanguageConvertString(idLngFile,"new_string") +
	                        "F4 - " + descF4 + LanguageConvertString(idLngFile,"new_string") +
	                        "F5 - " + descF5;
	// ������� ������ (�� ������� � ���� �� �����) +LanguageConvertString(idLngFile,"new_string");
    // ��� ����������� ������ ���������� � ������� � totalInfo <--
    LanguageCloseFile(idLngFile);
}
////////////////////////////////////////////////////////////////////////
string descF1 = "����!";

void CalculateInfoDataF1()
{
	idLngFile = LanguageOpenFile("ItemsDescribe.txt");// ����� ��� ������ ������
	// ��� ����������� ������ ���������� � ������� � totalInfo - ������������� -->
	totalInfo = "��� ����";
    // ��� ����������� ������ ���������� � ������� � totalInfo <--
    totalInfo = totalInfo + LanguageConvertString(idLngFile,"new_string") + LanguageConvertString(idLngFile,"new_string") +
                "������� ���������� �������!";
    LanguageCloseFile(idLngFile);
    SetFormatedText("INFO_TEXT",totalInfo);
}
////////////////////////////////////////////////////////////////////////
string descF2 = "���� �������� ������� 2";

void CalculateInfoDataF2()
{
	idLngFile = LanguageOpenFile("ItemsDescribe.txt");
	// -->
	totalInfo = "";
	
	


    // <
    totalInfo = totalInfo + LanguageConvertString(idLngFile,"new_string") + LanguageConvertString(idLngFile,"new_string") +
                "������� ���������� �������!";
    LanguageCloseFile(idLngFile);
    SetFormatedText("INFO_TEXT",totalInfo);
}
////////////////////////////////////////////////////////////////////////
string descF3 = "���� �������� ������� 3";

void CalculateInfoDataF3()
{
	idLngFile = LanguageOpenFile("ItemsDescribe.txt");
	// -->
	totalInfo = "";
	
	


    // <
    totalInfo = totalInfo + LanguageConvertString(idLngFile,"new_string") + LanguageConvertString(idLngFile,"new_string") +
                "������� ���������� �������!";
    LanguageCloseFile(idLngFile);
    SetFormatedText("INFO_TEXT",totalInfo);
}
////////////////////////////////////////////////////////////////////////
string descF4 = "���� �������� ������� 4";

void CalculateInfoDataF4()
{
	idLngFile = LanguageOpenFile("ItemsDescribe.txt");
	// -->
	totalInfo = "";
	
	


    // <
    totalInfo = totalInfo + LanguageConvertString(idLngFile,"new_string") + LanguageConvertString(idLngFile,"new_string") +
                "������� ���������� �������!";
    LanguageCloseFile(idLngFile);
    SetFormatedText("INFO_TEXT",totalInfo);
}
////////////////////////////////////////////////////////////////////////
string descF5 = "���� �������� ������� 5";

void CalculateInfoDataF5()
{
	idLngFile = LanguageOpenFile("ItemsDescribe.txt");
	// -->
	totalInfo = "";
	
	


    // <
    totalInfo = totalInfo + LanguageConvertString(idLngFile,"new_string") + LanguageConvertString(idLngFile,"new_string") +
                "������� ���������� �������!";
    LanguageCloseFile(idLngFile);
    SetFormatedText("INFO_TEXT",totalInfo);
}

