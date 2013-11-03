# 親クラス
class Animal
	constructor: (name) ->
		if name?
			@name = name
	say: (text) ->
		console.log "「#{text}」"
		

# 子クラス
class Cat extends Animal
	constructor: (name) ->
		# Animalのコンストラクタを実行
		super name
		@type = "ペルシャ"
	
	say: (text) ->
		# Animalのsay()を実行
		super text
		console.log "と#{@type}ネコの#{@name}は言いました。"

snowbell = new Cat "スノーベル"
snowbell.say "何か頂戴。"
