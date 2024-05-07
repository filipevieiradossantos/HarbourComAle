FUNCTION Deposito

    LOCAL oConta := CC():new()
    LOCAL ccDeposito := 0
    
    INPUT "Informe o valor a ser depositado: " to ccDeposito

    oConta:ccDeposito(vDeposito)
    
    ? "O valor depositado foi de R$", vDeposito
    ? "Saldo atual na conta: R$", oCC:ccDeposito()