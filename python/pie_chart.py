import matplotlib.pyplot as plt

labels = 'English', 'Maths', 'Chemistry', 'Physics'
sizes = [215, 130, 245, 210]
colors = ['pink', 'green', 'lightcoral', 'lightskyblue']
explode = (0.1, 0, 0, 0) 
patches, texts = plt.pie(sizes, colors=colors, shadow=True, startangle=90)
plt.legend(patches, labels, loc="best")
plt.axis('equal')

plt.pie(sizes, explode=explode, labels=labels, colors=colors,
autopct='%1.1f%%', shadow=True, startangle=140)

plt.axis('equal')


plt.show()