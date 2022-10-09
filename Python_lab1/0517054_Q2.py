
# coding: utf-8

# In[6]:


import string
import random


# In[13]:


L = int(input("Password Length: "))
upper_or_not = input("Include Uppercase [y/n]: ")
punc_or_not = input("Include Punctuation [y/n]: ")
upper = string.ascii_uppercase
lower = string.ascii_lowercase
digit = string.digits
punc = string.punctuation
if upper_or_not == 'y' and punc_or_not == 'y':
    passwd = random.sample(upper+lower+digit+punc, L)
elif  upper_or_not == 'n' and punc_or_not == 'y':
    passwd = random.sample(lower+digit+punc, L)
elif  upper_or_not == 'y' and punc_or_not == 'n':
    passwd = random.sample(upper+lower+digit, L)
else:
    passwd = random.sample(lower+digit, L)
passwd = "".join(passwd)
print(passwd)

