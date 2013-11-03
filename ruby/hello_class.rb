class HelloWorld
	attr_accessor :name
	Version = "1.0"

	def initialize(myname="Ruby")
		@name = myname
	end

	def name
		return @name
	end

	def name=(value)
		@name = value
	end
	
	def greet
		print "Hi, I am ", self.name, ".\n"
	end

	def hello
		print "Hello, world. I am ", @name, ".\n"
	end
end

bob = HelloWorld.new("Bob")
alice = HelloWorld.new("Alice")
ruby = HelloWorld.new

bob.hello
alice.hello
ruby.hello

p bob.name
