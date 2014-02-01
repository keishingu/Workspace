var http = require('http');
var settings = require('./settings');
var msg;
var server = http.createServer();

server.on('request', function(req, res) {
	res.writeHead(200, {'Content-Type': 'text/plain'});
	switch (req.url) {
		case '/about':
			msg = "about this page";
			break;
		case '/profile':
			msg = "about me";
			break;
		default:
			msg = "404";
			break;
	}
	res.write('hello from' + msg);
	res.end();
});
server.listen(settings.port, settings.host);
console.log(settings.port, settings.host);
console.log("server listening...");