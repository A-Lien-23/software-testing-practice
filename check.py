from sympy import symbols, Eq, solve

for a in range (-100, 1000):
   for b in range (-100, 1000):
      for c in range (-100, 1000):
         for d in range (-100, 1000):
            for e in range (-100, 1000):
               for f in range (-100, 1000):
                  for j in range (-100, 1000):
                     for k in range (-100, 1000):
                        for l in range (-100, 1000): 
                           if (a*5 + b*8 + c*10 == 10) and (d*5 + e*8 + f*10 == 10) and (j*5 + k*8 + l*10 == 10):
                              print(a, "*x + ", b, "*y - ", c, "*z = 10")
                              print(d, "*x + ", e, "*y - ", f, "*z = 10")
                              print(j, "*x + ", k, "*y - ", l, "*z = 10")
                              break



"""
print("Бонусы репутации:")
print("Скидки у бродячих торговцев:", round(solution[x]), "%")
print("Вероятность удачных переговоров", round(solution[y]), "%")
print("Бонус награды за задания", round(solution[z]), "%")
"""