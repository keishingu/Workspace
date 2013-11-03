getPrice = (price, discountPercent = 0) ->
	price * ( 1 - discountPercent / 100)
	

getPrice 1000	# result:1000
getPrice 1000, 30	#result:700