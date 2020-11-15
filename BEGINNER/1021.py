def calcularCedMed(valor, cedMed, tipo):
    quant = valor // cedMed
    
    if(tipo == 'moeda'):
        print("{} {}(s) de R$ {:.2f}".format(quant, tipo, float(cedMed)/100))
    else:
        print("{} {}(s) de R$ {:.2f}".format(quant, tipo, float(cedMed)))
    
    return(valor - cedMed*quant)
    
notas, moedas = input().split(".")

notas = int(notas)
moedas = int(moedas)

nota = [100, 50, 20, 10, 5, 2]
moeda = [50, 25, 10, 5, 1]

print("NOTAS:")

for i in nota:
    notas = calcularCedMed(notas, i, "nota")

print("MOEDAS:")
print("{} moeda(s) de R$ 1.00".format(notas//1))

for i in moeda:
    moedas = calcularCedMed(moedas, i, "moeda")