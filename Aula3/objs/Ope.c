/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from ".\Ope.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( CC );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( CC_SALDO );
HB_FUNC_STATIC( CC_DEPOSITO );
HB_FUNC_STATIC( CC_SAQUE );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( MENU );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_OPE )
{ "CC", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( CC )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CC_SALDO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CC_SALDO )}, NULL },
{ "CC_DEPOSITO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CC_DEPOSITO )}, NULL },
{ "CC_SAQUE", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CC_SAQUE )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENU", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENU )}, NULL },
{ "_CCSALDO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_OPE, ".\\Ope.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_OPE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_OPE )
   #include "hbiniseg.h"
#endif

HB_FUNC( CC )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,17,0,36,3,0,103,1,0,100,8,
		29,7,1,176,1,0,104,1,0,12,1,29,252,0,
		166,190,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,3,67,67,0,108,4,4,1,0,108,0,112,
		3,80,2,36,5,0,48,5,0,95,2,100,100,95,
		1,121,72,121,72,121,72,106,8,99,99,83,97,108,
		100,111,0,106,11,99,99,68,101,112,111,115,105,116,
		111,0,106,8,99,99,83,97,113,117,101,0,4,3,
		0,9,112,5,73,36,6,0,48,6,0,95,2,106,
		6,83,97,108,100,111,0,108,7,95,1,121,72,121,
		72,121,72,112,3,73,36,7,0,48,6,0,95,2,
		106,9,68,101,112,111,115,105,116,111,0,108,8,95,
		1,121,72,121,72,121,72,112,3,73,36,8,0,48,
		6,0,95,2,106,6,83,97,113,117,101,0,108,9,
		95,1,121,72,121,72,121,72,112,3,73,36,10,0,
		48,10,0,95,2,112,0,73,167,14,0,0,176,11,
		0,104,1,0,95,2,20,2,168,48,12,0,95,2,
		112,0,80,3,176,13,0,95,3,106,10,73,110,105,
		116,67,108,97,115,115,0,12,2,28,12,48,14,0,
		95,3,164,146,1,0,73,95,3,110,7,48,12,0,
		103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CC_SALDO )
{
	static const HB_BYTE pcode[] =
	{
		36,14,0,176,15,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CC_DEPOSITO )
{
	static const HB_BYTE pcode[] =
	{
		13,0,1,36,17,0,48,16,0,102,95,1,112,1,
		73,36,19,0,176,15,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( CC_SAQUE )
{
	static const HB_BYTE pcode[] =
	{
		36,23,0,176,15,0,20,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,17,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

