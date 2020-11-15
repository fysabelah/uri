linha = input()

yes = list()
no = list()

while("FIM" not in linha):
  nome1, nome2 = linha.split(" ")
  
  if(nome2 == "YES" and nome1 not in yes):
    yes.append(nome1)
  else:
    if(nome2 == "NO"):
      no.append(nome1)

  linha = input()

maior = len(yes[0])
amigo = yes[0]

for i in range(0, len(yes)):
  if(maior < len(yes[i])):
    maior = len(yes[i])
    amigo = yes[i]

yes.sort()
no.sort()

for i in range(0, len(yes)):
  print(yes[i])

for i in range(0, len(no)):
  print(no[i])

print("\nAmigo do Habay:")
print(amigo)