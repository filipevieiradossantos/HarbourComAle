/*
 * Harbour 3.2.0dev (r1307082134)
 * Borland C++ 5.8.2 (32-bit)
 * Generated C source from "principal.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( HB_CDPSELECT );
HB_FUNC_EXTERN( PESSOA );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PRINCIPAL )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "HB_CDPSELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CDPSELECT )}, NULL },
{ "PESSOA", {HB_FS_PUBLIC}, {HB_FUNCNAME( PESSOA )}, NULL },
{ "NOVAPESSOA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NOVO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMTELA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_PRINCIPAL, "principal.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_PRINCIPAL
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_PRINCIPAL )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		36,3,0,176,1,0,92,4,176,2,0,12,0,28,
		17,106,11,100,100,47,109,109,47,121,121,121,121,0,
		25,13,106,9,100,100,47,109,109,47,121,121,0,20,
		2,36,4,0,176,2,0,106,3,79,78,0,20,1,
		36,5,0,176,3,0,106,5,85,84,70,56,0,20,
		1,36,7,0,176,4,0,12,0,83,5,0,36,9,
		0,48,6,0,109,5,0,112,0,73,36,10,0,48,
		7,0,109,5,0,112,0,73,36,12,0,7
	};

	hb_vmExecute( pcode, symbols );
}

