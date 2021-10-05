def isPrime(number):
    if(number==0 or number==1):
        return 0
    for i in range(2,number):
        if((number%i)==0):
            return 0
    return 1

def twisted_fib(n):
    list=[]
    for i in range(n):
        if(i==0):
            list.append(i+1)
        elif(i==1):
            list.append(i)
        else:
            list.append((list[i-2]+list[i-1]))
    for i in range(2,n):
        if(isPrime(list[i])):
            list[i]=0
        elif((list[i])%5==0):
            list[i]=0
    print(*list)

n=int(input())
twisted_fib(n)


def generateBinaryValues(num):
    # base condition
    if (num > 1):
        generateBinaryValues(num // 2)
    print(num % 2, end="")



def check_primeno(limit):
    if limit > 1:
        for i in range(2, limit//2 + 1):
            if (limit % i == 0):
                return False
        else:
            return True
    else:
        return False

def projects(request, **kwargs):
    if kwargs:
        project = models.Project.objects.get(id=kwargs.get('id'))
        services = models.Service.objects.all()[:6]
        print(services)
        return render(request, 'single_project.html', {'project': project, 'services': services})
    else:
        projects = models.Project.objects.all()
        return render(request, 'projects.html', {'projects': projects})

