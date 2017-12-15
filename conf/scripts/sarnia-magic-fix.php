<?php
  // Revert Sarnia to find the index. Doing separately to ensure correct order.
  // Use this if there is a problem getting sarnia index working.
  features_revert(array('kada_search_sarnia_feature' => array('search_api_server')));

  module_load_include('inc', 'sarnia', 'sarnia.entities');

  $sarnia_type = array(
    'machine_name' => 'sarnia_kada_sarnia_search',
    'label' => 'KADA Sarnia search (Sarnia index)',
    'search_api_server' => 'kada_sarnia_search',
    'search_api_index' => 'sarnia_kada_sarnia_search',
    'id_field' => 'id',
  );
  sarnia_entity_type_save($sarnia_type);
?>
