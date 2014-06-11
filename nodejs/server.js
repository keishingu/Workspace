var http = require('http'),
	fs = require('fs'),
	ejs = require('ejs'),
	qs = require('querystring');
var settings = require('./settings');
var server = http.createServer();
function renderForm(posts, res) {
	var data = ejs.render(template, {
		posts: posts
	})
}
var template = fs.readFileSync(__dirname + '/public_html/bbs.ejs', 'utf-8');
server.on('request', function(req, res) {
	if (req.method === 'POSTS') {
		req.data = '';
		req.on("rendable", function() {
			req.data += read.read();
		});
		req.on("end", function() {
			var query = qs.parse(req.data);
			posts.push(query.name);
			renderForm(posts, res);
		});
	} else {
		renderForm(posts, res);
	}
	res.writeHead(200, {'Content-Type': 'text/html'});
	res.write(data);
	res.end();
});
server.listen(settings.port, settings.host);
console.log(settings.port, settings.host);
console.log("server listening...");