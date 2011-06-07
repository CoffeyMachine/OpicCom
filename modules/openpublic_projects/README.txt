
OpenPublic Project Mapper
-------------------------

Open Public's Project Mapper is a great way to present your work on a beautiful
map. It provides you with a landing page that shows your projects as pins on a
map and as a grid of image thumbnails giving your users a quick way to get an
overview of your activities. Each project has its own page for publishing
detailed information. You can create new projects by simply logging on to your
Open Public Site and filling out a web form.


Installation
------------

- Verify that all module dependencies as defined in openpublic_projects.info
  are available in your site.
- Place OpenLayers slim [1] in sites/all/libraries
- If you work with a pre Feb 4 version of Views, you need to apply related terms
  patch.
- Clear caches.

[1] https://github.com/developmentseed/openlayers_slim/downloads
[2] http://drupal.org/node/1021942

Demo content
------------

For viewing demo content, enable the module "Demo content for Openpublic
Projects" module that ships with the OpenPublic Project Mapper. Enable it on
`admin/modules` or with `drush en openpublic_projects_demo_content`.
