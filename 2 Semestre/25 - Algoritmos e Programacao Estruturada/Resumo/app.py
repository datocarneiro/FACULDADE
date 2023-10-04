
lista = [123, 456, 789]
dados = []

def outra():
    for i in lista:
        busca = (navegador(i))
        dados.append(busca)
    
    return dados

def navegador(i):
    if i == 123:
        status = "ROTA"
        data = "10/10/2023"
    elif i == 456:
        status = "ENTREGUE"
        data = "20/20/2023"
    else:
        status = "sem dados"
        data = "sem dados"
    return i, status, data

outra()
print(dados)


