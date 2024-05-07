FUNCTION Menu()

    SET DATE BRIT
    SET CENT ON
    HB_CDPSELECT("UTF8")

    NovaOperacao := CC():New()

    CLS

    ? "Bem-vindo ao CC"
    
    ? "[1] - Saldo" 
    ? "[2] - Deposito" 
    ? "[3] - Saque" 
    ? "[4] - Sair" 

    INPUT "Escolha a opção desejada:" TO MENU

    DO CASE 
    CASE(MENU == 1)
        NovaOperacao:Saldo()
    CASE(MENU == 2)
        NovaOperacao:Deposito()
    CASE(MENU == 3)
        NovaOperacao:Saque()
    CASE(MENU == 4)
        ?"Até mais"
    OTHERWISE 
        ? "Valor inválido"
    ENDCASE

RETURN