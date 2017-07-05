def sum(n):
	summation=0;
	for i in range(1, n+1):
		summation+=i
	return summation

track="""컨설팅"""
name="""정한길"""

print ('[bob6][%s]sum_test[%s]' % (track, name))
print (sum(100))