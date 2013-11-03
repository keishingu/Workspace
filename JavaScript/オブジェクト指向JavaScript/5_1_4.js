function Gadget(name, color) {
	this.name = name;
	this.color = color;
	this.someMethod = function(){return 1;}
}
Gadget.prototype.price = 100;
Gadget.prototype.rating = 3;

var newtoy = new Gadget("webcam", "black");

for (var prop in newtoy) {
	console.log(prop + " = " + newtoy[prop]);
}

console.log(newtoy.hasOwnProperty("name"));
console.log(newtoy.hasOwnProperty("price"));
