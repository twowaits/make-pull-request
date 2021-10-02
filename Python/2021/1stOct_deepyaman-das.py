# -*- coding: utf-8 -*-
"""
Created on Fri Oct 1 2021

@author: deepyaman-das
"""
import sympy
def fibo(n):
   if n <= 1:
       return n
   else:
       return(fibo(n-1)+fibo(n-2))
n,a=int(input()),[]
for i in range(1,n+1):
    a.append(fibo(i))
for i in a:
      print(i, end=' ') if not sympy.isprime(i) and i%5!=0 else print(0, end=' ')