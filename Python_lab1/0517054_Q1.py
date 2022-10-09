
# coding: utf-8

# In[7]:


import random
import math


# In[10]:


N = int(input())
points_inside = 0
for i in range(N):
    x = random.random()
    y = random.random()
    d = math.sqrt(x**2 + y**2)
    if d <= 1:
        points_inside += 1
pi = 4 * (points_inside / N)
print(pi)

