function Gadget(name, color) {
	this.name = name;
	this.color = color;
	this.whatAreYou = function(){
		return 'I am a ' + this.color + ' ' + this.name;
	}
}