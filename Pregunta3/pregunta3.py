from queue import Queue

def retornaMenor(q , indicador):
    menor= 1
    mayor= 10
    n = q.qsize()
    for i in range(n):
        c = q.queue[0]
        q.get()
        if(c <= mayor and i <= indicador):
            menor = i
            mayor = c
        q.put(c)
    return menor
def encolaMenor(q, menor):
    mayor = None
    n = q.qsize()
    for i in range(n):
        c = q.queue[0]
        q.get()
        if(i != menor):
            q.put(c)
        else:
            mayor = c
    q.put(mayor)
def reordenar(q):
    for i in range(1, q.qsize() + 1): 
        menor = retornaMenor(q, q.qsize() - i)  
        encolaMenor(q, menor) 



if _name_ == '_main_': 
    q = Queue()
    q.put(-34)
    q.put(28)
    q.put(-12)
    q.put(-9)
    q.put(-7)
    q.put(5)
    q.put(4)
    q.put(-2)
    q.put(1) 

    
    reordenar(q)

    while (q.empty() == False): 
        print(q.queue[0], end = " ")  
        q.get()
