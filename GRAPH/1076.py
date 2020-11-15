#Conta as arestas que passa na busca durante a DFS
casos = int(input())
grafo = dict()
visitados = list()

def DFS(inicio):
    contador = 0
    if(inicio not in visitados):
        visitados.append(inicio)
    
    for i in grafo[inicio]:
        if(i not in visitados):
            contador += DFS(i) + 2
    
    return(contador)

for i in range(0, casos):
    partida = int(input())

    vertice, aresta = map(int, input().split(' '))

    for j in range(0, aresta):
        v1, v2 = map(int, input().split(' '))

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

    

    print(DFS(partida))

    grafo.clear()
    visitados.clear()