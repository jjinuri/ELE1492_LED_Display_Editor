
ELE_1492_LED_Displayps.dll: dlldata.obj ELE_1492_LED_Display_p.obj ELE_1492_LED_Display_i.obj
	link /dll /out:ELE_1492_LED_Displayps.dll /def:ELE_1492_LED_Displayps.def /entry:DllMain dlldata.obj ELE_1492_LED_Display_p.obj ELE_1492_LED_Display_i.obj \
		kernel32.lib rpcndr.lib rpcns4.lib rpcrt4.lib oleaut32.lib uuid.lib \
.c.obj:
	cl /c /Ox /DWIN32 /D_WIN32_WINNT=0x0400 /DREGISTER_PROXY_DLL \
		$<

clean:
	@del ELE_1492_LED_Displayps.dll
	@del ELE_1492_LED_Displayps.lib
	@del ELE_1492_LED_Displayps.exp
	@del dlldata.obj
	@del ELE_1492_LED_Display_p.obj
	@del ELE_1492_LED_Display_i.obj
