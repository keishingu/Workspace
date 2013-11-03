class Bird
	constructor: ->
		@nickname = "ある鳥"
		
birdA = new Bird
console.log birdA.nickname

delete birdA.nickname
console.log birdA.nickname