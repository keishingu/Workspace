class Shape(object):
    def _get_color(self):
        return tuple(v * 255.0 for v in self._rgb)
    def _sef_color(self, rgb):
        self._rgb = tuple(v / 255.0 for v in rgb)
    color = property(_get_color, _sef_color)

shape = Shape()
shape.color = (255, 0, 0)
print shape.color
print shape._rgb
