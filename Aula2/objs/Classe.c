/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "Classe.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( PESSOA );
HB_FUNC_EXTERN( __CLSLOCKDEF );
HB_FUNC_EXTERN( HBCLASS );
HB_FUNC_EXTERN( HBOBJECT );
HB_FUNC_STATIC( PESSOA_NOVO );
HB_FUNC_STATIC( PESSOA_EMTELA );
HB_FUNC_EXTERN( __CLSUNLOCKDEF );
HB_FUNC_EXTERN( __OBJHASMSG );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( __ACCEPT );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( INT );
HB_FUNC_EXTERN( DATE );
HB_FUNC_INITSTATICS();


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CLASSE )
{ "PESSOA", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( PESSOA )}, NULL },
{ "__CLSLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSLOCKDEF )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HBCLASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBCLASS )}, NULL },
{ "HBOBJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HBOBJECT )}, NULL },
{ "ADDMULTIDATA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADDMETHOD", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PESSOA_NOVO", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PESSOA_NOVO )}, NULL },
{ "PESSOA_EMTELA", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( PESSOA_EMTELA )}, NULL },
{ "CREATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__CLSUNLOCKDEF", {HB_FS_PUBLIC}, {HB_FUNCNAME( __CLSUNLOCKDEF )}, NULL },
{ "INSTANCE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__OBJHASMSG", {HB_FS_PUBLIC}, {HB_FUNCNAME( __OBJHASMSG )}, NULL },
{ "INITCLASS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "_VNOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__ACCEPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ACCEPT )}, NULL },
{ "_VSOBRENOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VNASCIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VSIGNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VALTURA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_VPESO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "VNASCIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "VNOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VSOBRENOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VSIGNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALTURA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VPESO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INT", {HB_FS_PUBLIC}, {HB_FUNCNAME( INT )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT | HB_FS_LOCAL}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_CLASSE, "Classe.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_CLASSE
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_CLASSE )
   #include "hbiniseg.h"
#endif

HB_FUNC( PESSOA )
{
	static const HB_BYTE pcode[] =
	{
		149,3,0,116,33,0,36,3,0,103,1,0,100,8,
		29,8,1,176,1,0,104,1,0,12,1,29,253,0,
		166,191,0,0,122,80,1,48,2,0,176,3,0,12,
		0,106,7,80,101,115,115,111,97,0,108,4,4,1,
		0,108,0,112,3,80,2,36,5,0,48,5,0,95,
		2,100,100,95,1,121,72,121,72,121,72,106,6,118,
		78,111,109,101,0,106,11,118,83,111,98,114,101,78,
		111,109,101,0,106,12,118,78,97,115,99,105,109,101,
		110,116,111,0,106,7,118,83,105,103,110,111,0,106,
		8,118,65,108,116,117,114,97,0,106,6,118,80,101,
		115,111,0,4,6,0,9,112,5,73,36,6,0,48,
		6,0,95,2,106,5,78,111,118,111,0,108,7,95,
		1,121,72,121,72,121,72,112,3,73,36,7,0,48,
		6,0,95,2,106,7,69,109,84,101,108,97,0,108,
		8,95,1,121,72,121,72,121,72,112,3,73,36,9,
		0,48,9,0,95,2,112,0,73,167,14,0,0,176,
		10,0,104,1,0,95,2,20,2,168,48,11,0,95,
		2,112,0,80,3,176,12,0,95,3,106,10,73,110,
		105,116,67,108,97,115,115,0,12,2,28,12,48,13,
		0,95,3,164,146,1,0,73,95,3,110,7,48,11,
		0,103,1,0,112,0,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PESSOA_NOVO )
{
	static const HB_BYTE pcode[] =
	{
		36,13,0,176,14,0,20,0,176,15,0,121,121,20,
		2,36,14,0,48,16,0,102,176,17,0,106,16,81,
		117,97,108,32,115,101,117,32,78,111,109,101,63,32,
		0,12,1,112,1,73,36,15,0,48,18,0,102,176,
		17,0,106,21,81,117,97,108,32,115,101,117,32,83,
		111,98,114,101,110,111,109,101,63,32,0,12,1,112,
		1,73,36,16,0,48,19,0,102,176,17,0,106,52,
		81,117,97,108,32,115,101,117,32,68,97,116,97,32,
		100,101,32,78,97,115,99,105,109,101,110,116,111,63,
		32,40,67,111,108,111,113,117,101,32,68,68,47,77,
		77,47,65,65,65,65,41,32,32,0,12,1,112,1,
		73,36,17,0,48,20,0,102,176,17,0,106,17,81,
		117,97,108,32,115,101,117,32,83,105,103,110,111,63,
		32,0,12,1,112,1,73,36,18,0,48,21,0,102,
		176,17,0,106,18,81,117,97,108,32,115,101,117,32,
		65,108,116,117,114,97,63,32,0,12,1,112,1,73,
		36,19,0,48,22,0,102,176,17,0,106,16,81,117,
		97,108,32,115,101,117,32,80,101,115,111,63,32,0,
		12,1,112,1,73,36,20,0,176,14,0,20,0,176,
		15,0,121,121,20,2,36,22,0,48,19,0,102,176,
		23,0,48,24,0,102,112,0,12,1,112,1,73,36,
		24,0,102,110,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_STATIC( PESSOA_EMTELA )
{
	static const HB_BYTE pcode[] =
	{
		36,28,0,176,25,0,106,13,83,101,117,32,110,111,
		109,101,32,195,169,32,0,48,26,0,102,112,0,106,
		19,101,32,115,101,117,32,115,111,98,114,101,110,111,
		109,101,32,195,169,0,48,27,0,102,112,0,20,4,
		36,29,0,176,25,0,106,15,83,101,117,32,115,105,
		103,110,111,32,195,169,58,32,0,48,28,0,102,112,
		0,20,2,36,30,0,176,25,0,106,16,83,117,97,
		32,97,108,116,117,114,97,32,195,169,58,32,0,48,
		29,0,102,112,0,106,13,99,101,110,116,105,109,101,
		110,116,114,111,115,0,20,3,36,31,0,176,25,0,
		106,13,86,111,99,195,170,32,112,101,115,97,58,32,
		0,48,30,0,102,112,0,106,3,75,103,0,20,3,
		36,32,0,176,25,0,106,18,83,117,97,32,105,100,
		97,100,101,32,195,169,32,100,101,58,32,0,48,19,
		0,102,176,31,0,176,32,0,12,0,48,24,0,102,
		112,0,49,93,109,1,18,12,1,112,1,106,5,65,
		110,111,115,0,20,3,36,34,0,7
	};

	hb_vmExecute( pcode, symbols );
}

HB_FUNC_INITSTATICS()
{
	static const HB_BYTE pcode[] =
	{
		117,33,0,1,0,7
	};

	hb_vmExecute( pcode, symbols );
}

