function Shape(){
	this.name = 'shape';
	this.toString = function() {return this.name;};
}

function TwoDShape(){
	this.name = "2D shape";

function Triangle(side, height) {
	this.name = "Triangle";
	this.side = side;
	this.height = height;
	this.getArea = function(){return this.side * this.height / 2;};
}

TwoDShape.prototype = new Shape();
Triangle.prototype = new TwoDShape();

TwoDShape.prototype.constructor = TwoDShape;
Triangle.prototype.constructor = Triangle;

var my = new Triangle(5, 10);
console.log(newtoy.hasOwnProperty("price"));
