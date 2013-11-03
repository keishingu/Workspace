var $width = $(window).width();
//console.log($width());
//var $width = 320;

$(document).ready(function(){
  
  $(window).resize(function(){
    $width =  $(window).width();
    //console.log($width);
  });

  var $church_pointer = $('#church .pointer span');
  var $church_text = $('#church .text span');
  var church_flipsnap = Flipsnap('#church .flipsnap', {
    distance: $width
  });
  church_flipsnap.element.addEventListener('fsmoveend', function() {
    $church_pointer.filter('#church .current').removeClass('current');
    $church_pointer.eq(church_flipsnap.currentPoint).addClass('current');
    $church_text.filter('#church .current').removeClass('current');
    $church_text.eq(church_flipsnap.currentPoint).addClass('current');
  }, false);

  var $skull_pointer = $('#skull .pointer span');
  var $skull_text = $('#skull .text span');
  var skull_flipsnap = Flipsnap('#skull .flipsnap', {
    distance: $width
  });
  skull_flipsnap.element.addEventListener('fsmoveend', function() {
    $skull_pointer.filter('#skull .current').removeClass('current');
    $skull_pointer.eq(skull_flipsnap.currentPoint).addClass('current');
    $skull_text.filter('#skull .current').removeClass('current');
    $skull_text.eq(skull_flipsnap.currentPoint).addClass('current');
  }, false);

  var $bat_pointer = $('#bat .pointer span');
  var $bat_text = $('#bat .text span');
  var bat_flipsnap = Flipsnap('#bat .flipsnap', {
    distance: $width
  });
  bat_flipsnap.element.addEventListener('fsmoveend', function() {
    $bat_pointer.filter('#bat .current').removeClass('current');
    $bat_pointer.eq(bat_flipsnap.currentPoint).addClass('current');
    $bat_text.filter('#bat .current').removeClass('current');
    $bat_text.eq(bat_flipsnap.currentPoint).addClass('current');
  }, false);
 
  var $dracula_pointer = $('#dracula .pointer span');
  var $dracula_text = $('#dracula .text span');
  var dracula_flipsnap = Flipsnap('#dracula .flipsnap', {
    distance: $width
  });
  dracula_flipsnap.element.addEventListener('fsmoveend', function() {
    $dracula_pointer.filter('#dracula .current').removeClass('current');
    $dracula_pointer.eq(dracula_flipsnap.currentPoint).addClass('current');
    $dracula_text.filter('#dracula .current').removeClass('current');
    $dracula_text.eq(dracula_flipsnap.currentPoint).addClass('current');
  }, false);

  var $witch_pointer = $('#witch .pointer span');
  var $witch_text = $('#witch .text span');
  var witch_flipsnap = Flipsnap('#witch .flipsnap', {
    distance: $width
  });
  witch_flipsnap.element.addEventListener('fsmoveend', function() {
    $witch_pointer.filter('#witch .current').removeClass('current');
    $witch_pointer.eq(witch_flipsnap.currentPoint).addClass('current');
    $witch_text.filter('#witch .current').removeClass('current');
    $witch_text.eq(witch_flipsnap.currentPoint).addClass('current');
  }, false);

  var $frankenstein_pointer = $('#frankenstein .pointer span');
  var $frankenstein_text = $('#frankenstein .text span');
  var frankenstein_flipsnap = Flipsnap('#frankenstein .flipsnap', {
    distance: $width
  });
  frankenstein_flipsnap.element.addEventListener('fsmoveend', function() {
    $frankenstein_pointer.filter('#frankenstein .current').removeClass('current');
    $frankenstein_pointer.eq(frankenstein_flipsnap.currentPoint).addClass('current');
    $frankenstein_text.filter('#frankenstein .current').removeClass('current');
    $frankenstein_text.eq(frankenstein_flipsnap.currentPoint).addClass('current');
  }, false);

  var $grave_pointer = $('#grave .pointer span');
  var $grave_text = $('#grave .text span');
  var grave_flipsnap = Flipsnap('#grave .flipsnap', {
    distance: $width
  });
  grave_flipsnap.element.addEventListener('fsmoveend', function() {
    $grave_pointer.filter('#grave .current').removeClass('current');
    $grave_pointer.eq(grave_flipsnap.currentPoint).addClass('current');
    $grave_text.filter('#grave .current').removeClass('current');
    $grave_text.eq(grave_flipsnap.currentPoint).addClass('current');
  }, false);

  var $ghost_pointer = $('#ghost .pointer span');
  var $ghost_text = $('#ghost .text span');
  var ghost_flipsnap = Flipsnap('#ghost .flipsnap', {
    distance: $width
  });
  ghost_flipsnap.element.addEventListener('fsmoveend', function() {
    $ghost_pointer.filter('#ghost .current').removeClass('current');
    $ghost_pointer.eq(ghost_flipsnap.currentPoint).addClass('current');
    $ghost_text.filter('#ghost .current').removeClass('current');
    $ghost_text.eq(ghost_flipsnap.currentPoint).addClass('current');
  }, false);

  var $pumpkin_pointer = $('#pumpkin .pointer span');
  var $pumpkin_text = $('#pumpkin .text span');
  var pumpkin_flipsnap = new Flipsnap('#pumpkin .flipsnap', {
    distance: $width
  });
  pumpkin_flipsnap.element.addEventListener('fsmoveend', function() {
    $pumpkin_pointer.filter('#pumpkin .current').removeClass('current');
    $pumpkin_pointer.eq(pumpkin_flipsnap.currentPoint).addClass('current');
    $pumpkin_text.filter('#pumpkin .current').removeClass('current');
    $pumpkin_text.eq(pumpkin_flipsnap.currentPoint).addClass('current');
    console.log($width);
  }, false);

});