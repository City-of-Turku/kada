This file describes the feature, from developer to developer. It should focus on why something has been implemented instead of how, but some tricky or special implementations should be mentioned here. Especially if they cannot be documented in code.

== PURPOSE ==
Widgets are separate entities that can be selected into other content. These widgets will be then rendered inside (or outside in page region) the content.
Widgets should help to create more dynamic pages.

== ECK ==
Widget entity is build on top of ECK (entity construct kit).

== PERMISSIONS ==
-

== CUSTOM CODE ==
- Block: widget_before_content, that renders widgets from current pages field_widget_before_content -field.

== WIDGETS ==
EVENT CAROUSEL
- Carousel for showing events.
- Possible filters: Keywords, target audience, section, event type.
- Custom DS fields:
  - widget_carousel_view: Contains rendered view.

== CHANGELOG ==
* 2015-05-18 *
Added: Widget entity. Event carousel widget and view. Overall base architecture for future widgets.
