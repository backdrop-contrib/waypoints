# Waypoints

[Waypoints](http://imakewebthings.github.com/jquery-waypoints/) 
is a small jQuery plugin that makes it easy to execute
a function whenever you scroll to an element.

Waypoints makes a solid base for modern UI patterns that depend 
on a user’s scroll position on the page.
Take a look at a few [examples](http://imakewebthings.github.com/jquery-waypoints/#examples).

## Configuration

The module has an admin interface, where you can enable to always 
include the JavaScript file to the site.
Otherwise you can include it manually via a simple function callback:

```php
backdrop_add_library('waypoints', 'waypoints');
```

## Usage

For example:

```javascript
jQuery('#comments').waypoint(function() {
   alert('You have scrolled to the comments.');
});
```

For the full documentation,
[visit the plugin's homepage](http://imakewebthings.github.com/jquery-waypoints/).

[Views Load More](https://github.com/backdrop-contrib/views_load_more)
module supports the use of this module.

## Current Maintainers

- [Laryn Kragt Bakker](https://github.com/laryn/) - [CEDC.org](https://CEDC.org) 

## Credits

- Ported to Backdrop by [Jerome Danthinne](https://github.com/jdanthinne/)
- Originally written for Drupal by [kalman.hosszu](https://www.drupal.org/u/kalman.hosszu)
- The Waypoints library is from [Caleb Troughton](https://github.com/imakewebthings)

## License

This project is GPL v2 software. See the LICENSE.txt file in this directory for
complete text.

The Waypoints library is released under the MIT license.
