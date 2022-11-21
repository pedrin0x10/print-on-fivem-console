#include <windows.h>
#include <iostream>

typedef int(__fastcall* rPRINT)(std::string const&, std::string const&);rPRINT PRINT = reinterpret_cast<rPRINT>(GetProcAddress(GetModuleHandleA("conhost-v2.dll"), "?Print@ConHost@@YAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z"));

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved) 
{
	//Leave "script:" in the begin of first string to work fine
	PRINT("script:PEDRIN", "Fivem is gay\n");
}