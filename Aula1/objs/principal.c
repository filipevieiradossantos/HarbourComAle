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
HB_FUNC_EXTERN( PESSOA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( QOUT );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_PRINCIPAL )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PESSOA", {HB_FS_PUBLIC}, {HB_FUNCNAME( PESSOA )}, NULL },
{ "OPESSOA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "_NASCIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SOBRENOME", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NASCIMENTO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SIGNO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALTURA", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PESO", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IDADE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL }
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
		36,6,0,48,3,0,176,4,0,12,0,106,7,70,
		105,108,105,112,101,0,106,7,86,105,101,105,114,97,
		0,106,6,65,114,105,101,115,0,106,4,49,55,53,
		0,106,10,49,49,51,32,75,105,108,111,115,0,112,
		5,83,5,0,36,7,0,48,6,0,109,5,0,176,
		7,0,106,11,50,55,47,48,51,47,49,57,57,54,
		0,12,1,112,1,73,36,9,0,176,8,0,48,9,
		0,109,5,0,112,0,48,10,0,109,5,0,112,0,
		20,2,36,10,0,176,8,0,48,11,0,109,5,0,
		112,0,20,1,36,11,0,176,8,0,48,12,0,109,
		5,0,112,0,20,1,36,12,0,176,8,0,48,13,
		0,109,5,0,112,0,106,22,99,101,110,116,105,109,
		101,116,114,111,115,32,100,101,32,97,108,116,117,114,
		97,0,20,2,36,13,0,176,8,0,48,14,0,109,
		5,0,112,0,20,1,36,15,0,48,15,0,109,5,
		0,112,0,73,7
	};

	hb_vmExecute( pcode, symbols );
}
