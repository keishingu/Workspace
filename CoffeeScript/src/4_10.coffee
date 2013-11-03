class Secret
	# プライベートな変数
	_key = "AllYourBase"
	
	# プライベートな関数
	_encrypt = (str) ->
		str.split('').reverse().join('')
		
	# 公開メソッド
	getKey: ->
		_key
	
	# 公開メソッド
	encrypt: (str) ->
		_encrypt str
	
secret = new Secret
console.log secret.getKey()

console.log secret.encrypt "tyger"

console.log typeof secret._key

console.log typeof secret._encrypt