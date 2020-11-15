#Encontrar a quantidade de componentes conexas. Estou usando DFS para isso.

import string

casos = int(input())
grafo = dict()
visitados = list()
visitar = list(string.ascii_lowercase)
componente = []

def DFS(inicio):
    if(inicio not in visitados):
        visitados.append(inicio)
        componente.append(inicio)
    
    for i in grafo[inicio]:
        if(i not in visitados):
            DFS(i)

for i in range(0, casos):
    vertice, aresta = map(int, input().split(' '))

    for l in range(0, aresta):
        aux = input()
        v1, v2 = aux.split(' ')

        if(v1 in grafo.keys() and v2 in grafo.keys()):
            grafo[v1].append(v2)
            grafo[v2].append(v1)
        elif(v1 not in grafo.keys() and v2 in grafo.keys()):
            grafo.update({v1:[v2]})
            grafo[v2].append(v1)
        elif(v2 not in grafo.keys() and v1 in grafo.keys()):
            grafo.update({v2:[v1]})
            grafo[v1].append(v2)
        else:
            grafo.update({v1:[v2]})
            grafo.update({v2:[v1]})
        
        grafo[v1].sort()
        grafo[v2].sort()

    contador = 0
    print('Case #{}:'.format(i + 1))
    
    for j in range(0, vertice):
        if(visitar[j] not in visitados and visitar[j] in grafo.keys()):
            contador += 1
            DFS(visitar[j])
            componente.sort()
            comp = componente.copy()
            comp = ','.join(comp)
            print('{},'.format(comp))
        elif(visitar[j] not in grafo.keys()):
            contador += 1
            print('{},'.format(visitar[j]))
        
        componente.clear()
    
    print('{} connected components\n'.format(contador))

    grafo.clear()
    visitados.clear()