#Birdクラスを定義する
class Bird
	nickname: "ある鳥"
	
#2つのインスタンスを作る
birdA = new Bird
birdB = new Bird

birdA.nickname = "太郎"
birdB.nickname = "二郎"
console.log birdA.location

console.log birdA.nickname
console.log birdB.nickname

Bird.prototype.location = "木の上"
console.log birdA.location