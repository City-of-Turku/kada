Event Division
-------------------------------------------------------------

Special note:
The following $conf variables may be changed in settings.php or potentially
with an admin page if needed in the future:
 - variable_get('kada_events_division_domain_ids', array(3));
 - variable_get('kada_events_division_group_nids', array(5503, 13285, 13286));
 - variable_get('kada_events_division_multigroups', 1); // True for matching 2+ groups on an event
 - variable_get('kada_events_division_subevents', 1); //
These are "semi"-hardcoded mappings which can be changed if we need either
more groups or domains to which have their event urls handled differently
than the rest.

If any mappings match an event node with a specific display types
(currently at least in event mosaic views)  the link is handled without
further manipulation. Meaning it will normally land on the same domain,
instead of for example kalenteri.kada.fi .
