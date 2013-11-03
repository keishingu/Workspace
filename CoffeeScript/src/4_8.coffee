class Animal
	sound:"" #鳴き声
	name:"ある動物" #名前
	
	# コンストラクタ
	constructor: (name) ->
		if name?
			@name = name
			
	# 引数textの内容をしゃべる
	say: (text) ->
		console.log "#{@name}  「#{@sound}#{text}」"
		
	# 猫を表すクラス。Animalクラスを継承する
	class Cat extends Animal
		sound: "ニャア。"
		
	# 犬を表すクラス。Animalクラスを毛yそうする
	class Dog extends Animal
		sound: "ワン！"
		
	# Animalクラスのインスタンスを作成
	animalA = new Animal
	animalA.say "天気がいいなあ"
	
	# 登場人物を作成
	michael = new Cat "マイケル"
	hachi = new Dog "ハチ"
	
	#喋らせる
	michael.say "今日はお出かけですか？"
	hachi.say "天気がいいのでうちの主人と散歩に行きます"