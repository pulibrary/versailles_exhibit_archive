<?php
/**
 * @file
 * exhibit_content_types_taxonomies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function exhibit_content_types_taxonomies_taxonomy_default_vocabularies() {
  return array(
    'exhibit_case_group_labels' => array(
      'name' => 'Exhibit Case Group Labels',
      'machine_name' => 'exhibit_case_group_labels',
      'description' => 'Case group labels assigned to exhibit items.',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
    'rbsc_exhibit_item_types' => array(
      'name' => 'RBSC Item Types',
      'machine_name' => 'rbsc_exhibit_item_types',
      'description' => 'Types of Items In RBSC Exhibits',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
