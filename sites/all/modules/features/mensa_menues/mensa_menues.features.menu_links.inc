<?php
/**
 * @file
 * mensa_menues.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function mensa_menues_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:forum
  $menu_links['main-menu:forum'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Forum',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: main-menu:iq-test-event-list
  $menu_links['main-menu:iq-test-event-list'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'iq-test-event-list',
    'router_path' => 'iq-test-event-list',
    'link_title' => 'IQ Test Events',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: main-menu:node/119
  $menu_links['main-menu:node/119'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/119',
    'router_path' => 'node/%',
    'link_title' => 'Om Mensa',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: main-menu:node/120
  $menu_links['main-menu:node/120'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'Bliv medlem',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-administration:<front>
  $menu_links['menu-administration:<front>'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Publikationer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-47',
  );
  // Exported menu link: menu-administration:forum
  $menu_links['menu-administration:forum'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'forum',
    'router_path' => 'forum',
    'link_title' => 'Webfora',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:forum-mentum
  $menu_links['menu-administration:forum-mentum'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'forum-mentum',
    'router_path' => 'forum-mentum',
    'link_title' => 'Forum Mentum arkiv',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:http://www.mensa.org/sites/default/files/constitution2009.pdf
  $menu_links['menu-administration:http://www.mensa.org/sites/default/files/constitution2009.pdf'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'http://www.mensa.org/sites/default/files/constitution2009.pdf',
    'router_path' => '',
    'link_title' => 'Int. constitution',
    'options' => array(
      'attributes' => array(
        'title' => '',
        'target' => array(
          0 => '_blank',
        ),
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:international-journal
  $menu_links['menu-administration:international-journal'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'international-journal',
    'router_path' => 'international-journal',
    'link_title' => 'International Journal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:locsec-list
  $menu_links['menu-administration:locsec-list'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'locsec-list',
    'router_path' => 'locsec-list',
    'link_title' => 'LocSec præsentation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:member-guide
  $menu_links['menu-administration:member-guide'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'member-guide',
    'router_path' => 'member-guide',
    'link_title' => 'Håndbogen',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:member-list
  $menu_links['menu-administration:member-list'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'member-list',
    'router_path' => 'member-list',
    'link_title' => 'Medlemmer',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:member-news
  $menu_links['menu-administration:member-news'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'member-news',
    'router_path' => 'member-news',
    'link_title' => 'Nyheder',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:mensa-minutes
  $menu_links['menu-administration:mensa-minutes'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'mensa-minutes',
    'router_path' => 'mensa-minutes',
    'link_title' => 'Referater',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:menu-position/1
  $menu_links['menu-administration:menu-position/1'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'menu-position/1',
    'router_path' => 'menu-position/%',
    'link_title' => 'Tester admin items (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'tester/upcoming-events',
  );
  // Exported menu link: menu-administration:menu-position/2
  $menu_links['menu-administration:menu-position/2'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'menu-position/2',
    'router_path' => 'menu-position/%',
    'link_title' => 'Test Coordinator menu (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'test-coordinator/new-testees',
  );
  // Exported menu link: menu-administration:menu-position/3
  $menu_links['menu-administration:menu-position/3'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'menu-position/3',
    'router_path' => 'menu-position/%',
    'link_title' => 'User management menu (menu position rule)',
    'options' => array(
      'alter' => TRUE,
      'attributes' => array(
        'class' => array(
          0 => 'menu-position-link',
        ),
      ),
    ),
    'module' => 'menu_position',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => 'user-management/create',
  );
  // Exported menu link: menu-administration:menutoken/53b1741a39871
  $menu_links['menu-administration:menutoken/53b1741a39871'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'menutoken/53b1741a39871',
    'router_path' => 'menutoken/%',
    'link_title' => 'Kalender',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_path' => 'event-calendar/month/[current-date:custom:Y-m]',
      'menu_token_data' => array(),
      'menu_token_options' => array(
        'clear' => 0,
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:menutoken/541b842ae1568
  $menu_links['menu-administration:menutoken/541b842ae1568'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'menutoken/541b842ae1568',
    'router_path' => 'menutoken/%',
    'link_title' => 'Mailinglister',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
      'menu_token_link_path' => 'user/[current-user:uid]/mailman_manager',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:node/152
  $menu_links['menu-administration:node/152'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/152',
    'router_path' => 'node/%',
    'link_title' => 'Bibliotek',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:node/153
  $menu_links['menu-administration:node/153'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/153',
    'router_path' => 'node/%',
    'link_title' => 'Vedtægter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:node/154
  $menu_links['menu-administration:node/154'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/154',
    'router_path' => 'node/%',
    'link_title' => 'SIGHT',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:node/155
  $menu_links['menu-administration:node/155'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/155',
    'router_path' => 'node/%',
    'link_title' => 'Butik',
    'options' => array(
      'attributes' => array(),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:node/194
  $menu_links['menu-administration:node/194'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/194',
    'router_path' => 'node/%',
    'link_title' => 'Medieomtale',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:node/196
  $menu_links['menu-administration:node/196'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'node/196',
    'router_path' => 'node/%',
    'link_title' => 'SIG\'er',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:photo-gallery
  $menu_links['menu-administration:photo-gallery'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'photo-gallery',
    'router_path' => 'photo-gallery',
    'link_title' => 'Billedearkiv',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:representatives
  $menu_links['menu-administration:representatives'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'representatives',
    'router_path' => 'representatives',
    'link_title' => 'Tillidspersoner',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:test-coordinator/new-testees
  $menu_links['menu-administration:test-coordinator/new-testees'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'test-coordinator/new-testees',
    'router_path' => 'test-coordinator',
    'link_title' => '<span class="glyphicon glyphicon-calendar"></span> Test Coordinator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
  );
  // Exported menu link: menu-administration:tester-list
  $menu_links['menu-administration:tester-list'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'tester-list',
    'router_path' => 'tester-list',
    'link_title' => 'Testkontrollanter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-administration:tester/upcoming-events
  $menu_links['menu-administration:tester/upcoming-events'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'tester/upcoming-events',
    'router_path' => 'tester',
    'link_title' => '<span class="glyphicon glyphicon-calendar"></span> Test events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: menu-administration:user-management/create
  $menu_links['menu-administration:user-management/create'] = array(
    'menu_name' => 'menu-administration',
    'link_path' => 'user-management/create',
    'router_path' => 'user-management',
    'link_title' => '<span class="glyphicon glyphicon-user"></span> Manage users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-bliv-medlem:node/120
  $menu_links['menu-bliv-medlem:node/120'] = array(
    'menu_name' => 'menu-bliv-medlem',
    'link_path' => 'node/120',
    'router_path' => 'node/%',
    'link_title' => 'Bliv medlem af Mensa',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-member-guide:taxonomy/term/77
  $menu_links['menu-member-guide:taxonomy/term/77'] = array(
    'menu_name' => 'menu-member-guide',
    'link_path' => 'taxonomy/term/77',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Medlemsskab',
    'options' => array(
      'attributes' => array(
        'title' => 'Medlemsskab',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '2',
  );
  // Exported menu link: menu-member-guide:taxonomy/term/80
  $menu_links['menu-member-guide:taxonomy/term/80'] = array(
    'menu_name' => 'menu-member-guide',
    'link_path' => 'taxonomy/term/80',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Aktiviteter i Mensa',
    'options' => array(
      'attributes' => array(
        'title' => 'Aktiviteter i Mensa',
      ),
      'alter' => TRUE,
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '4',
  );
  // Exported menu link: menu-member-user-admin:user/1/profile
  $menu_links['menu-member-user-admin:user/1/profile'] = array(
    'menu_name' => 'menu-member-user-admin',
    'link_path' => 'user/1/profile',
    'router_path' => 'user/%',
    'link_title' => 'View Profile',
    'options' => array(
      'menu_token_link_path' => 'user/[user:uid]/profile',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-om-mensa:node/118
  $menu_links['menu-om-mensa:node/118'] = array(
    'menu_name' => 'menu-om-mensa',
    'link_path' => 'node/118',
    'router_path' => 'node/%',
    'link_title' => 'Hvad er intelligens?',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-om-mensa:node/119
  $menu_links['menu-om-mensa:node/119'] = array(
    'menu_name' => 'menu-om-mensa',
    'link_path' => 'node/119',
    'router_path' => 'node/%',
    'link_title' => 'Hvad er Mensa',
    'options' => array(
      'node_type' => 'article',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-om-mensa:node/521
  $menu_links['menu-om-mensa:node/521'] = array(
    'menu_name' => 'menu-om-mensa',
    'link_path' => 'node/521',
    'router_path' => 'node/%',
    'link_title' => 'What is Mensa',
    'options' => array(
      'node_type' => 'article',
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-test-eaxminer-menu:admin/commerce/orders/add
  $menu_links['menu-test-eaxminer-menu:admin/commerce/orders/add'] = array(
    'menu_name' => 'menu-test-eaxminer-menu',
    'link_path' => 'admin/commerce/orders/add',
    'router_path' => 'admin/commerce/orders/add',
    'link_title' => '<span class="glyphicon glyphicon-plus"></span> Add Order',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-test-eaxminer-menu:node/add/iq-test-event
  $menu_links['menu-test-eaxminer-menu:node/add/iq-test-event'] = array(
    'menu_name' => 'menu-test-eaxminer-menu',
    'link_path' => 'node/add/iq-test-event',
    'router_path' => 'node/add/iq-test-event',
    'link_title' => '<span class="glyphicon glyphicon-plus"></span> Add IQ Test Event',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-test-eaxminer-menu:tester/previous-events
  $menu_links['menu-test-eaxminer-menu:tester/previous-events'] = array(
    'menu_name' => 'menu-test-eaxminer-menu',
    'link_path' => 'tester/previous-events',
    'router_path' => 'tester',
    'link_title' => 'Previous Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-test-eaxminer-menu:tester/upcoming-events
  $menu_links['menu-test-eaxminer-menu:tester/upcoming-events'] = array(
    'menu_name' => 'menu-test-eaxminer-menu',
    'link_path' => 'tester/upcoming-events',
    'router_path' => 'tester',
    'link_title' => 'Upcoming Events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-test-examiner-menu:admin/commerce/orders/add
  $menu_links['menu-test-examiner-menu:admin/commerce/orders/add'] = array(
    'menu_name' => 'menu-test-examiner-menu',
    'link_path' => 'admin/commerce/orders/add',
    'router_path' => 'admin/commerce/orders/add',
    'link_title' => '<span class="glyphicon glyphicon-plus"></span> Add Order',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-test-examiner-menu:test-coordinator/documents
  $menu_links['menu-test-examiner-menu:test-coordinator/documents'] = array(
    'menu_name' => 'menu-test-examiner-menu',
    'link_path' => 'test-coordinator/documents',
    'router_path' => 'test-coordinator',
    'link_title' => 'New Testees - Documents',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: menu-test-examiner-menu:test-coordinator/new-testees
  $menu_links['menu-test-examiner-menu:test-coordinator/new-testees'] = array(
    'menu_name' => 'menu-test-examiner-menu',
    'link_path' => 'test-coordinator/new-testees',
    'router_path' => 'test-coordinator',
    'link_title' => 'New Testees - Result',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-test-examiner-menu:test-coordinator/old-testees
  $menu_links['menu-test-examiner-menu:test-coordinator/old-testees'] = array(
    'menu_name' => 'menu-test-examiner-menu',
    'link_path' => 'test-coordinator/old-testees',
    'router_path' => 'test-coordinator',
    'link_title' => 'Old Testees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-test-examiner-menu:test-coordinator/upcoming-events
  $menu_links['menu-test-examiner-menu:test-coordinator/upcoming-events'] = array(
    'menu_name' => 'menu-test-examiner-menu',
    'link_path' => 'test-coordinator/upcoming-events',
    'router_path' => 'test-coordinator',
    'link_title' => 'Upcoming events',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-user-management:admin/people/create/guest
  $menu_links['menu-user-management:admin/people/create/guest'] = array(
    'menu_name' => 'menu-user-management',
    'link_path' => 'admin/people/create/guest',
    'router_path' => 'admin/people/create',
    'link_title' => '<span class="glypicon glyphicon-plus"></span> Add guest member',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-user-management:user-management/create
  $menu_links['menu-user-management:user-management/create'] = array(
    'menu_name' => 'menu-user-management',
    'link_path' => 'user-management/create',
    'router_path' => 'user-management',
    'link_title' => 'Create new users',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-user-management:user-management/current-members
  $menu_links['menu-user-management:user-management/current-members'] = array(
    'menu_name' => 'menu-user-management',
    'link_path' => 'user-management/current-members',
    'router_path' => 'user-management',
    'link_title' => 'Current members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: menu-user-management:user-management/guest-members
  $menu_links['menu-user-management:user-management/guest-members'] = array(
    'menu_name' => 'menu-user-management',
    'link_path' => 'user-management/guest-members',
    'router_path' => 'user-management',
    'link_title' => 'Guest Members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-user-management:user-management/old-members
  $menu_links['menu-user-management:user-management/old-members'] = array(
    'menu_name' => 'menu-user-management',
    'link_path' => 'user-management/old-members',
    'router_path' => 'user-management',
    'link_title' => 'Old members',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Exported menu link: user-menu:<nolink>
  $menu_links['user-menu:<nolink>'] = array(
    'menu_name' => 'user-menu',
    'link_path' => '<nolink>',
    'router_path' => '<nolink>',
    'link_title' => '<span class="glyphicon glyphicon-user"></span> Account',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'html' => 1,
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Exported menu link: user-menu:menutoken/54189597c17f4
  $menu_links['user-menu:menutoken/54189597c17f4'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/54189597c17f4',
    'router_path' => 'menutoken/%',
    'link_title' => 'Edit Account',
    'options' => array(
      'menu_token_link_path' => 'user/[site:current-user:uid]/edit/account',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<nolink>',
  );
  // Exported menu link: user-menu:menutoken/541895fad178c
  $menu_links['user-menu:menutoken/541895fad178c'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/541895fad178c',
    'router_path' => 'menutoken/%',
    'link_title' => 'Edit Mail alias',
    'options' => array(
      'menu_token_link_path' => 'user/[site:current-user:uid]/edit/mail-alias',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<nolink>',
  );
  // Exported menu link: user-menu:menutoken/54189e5e08a36
  $menu_links['user-menu:menutoken/54189e5e08a36'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'menutoken/54189e5e08a36',
    'router_path' => 'menutoken/%',
    'link_title' => 'Edit LocSec',
    'options' => array(
      'menu_token_link_path' => 'user/[site:current-user:uid]/edit/locsec',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<nolink>',
  );
  // Exported menu link: user-menu:user
  $menu_links['user-menu:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<nolink>',
  );
  // Exported menu link: user-menu:user/1/profile
  $menu_links['user-menu:user/1/profile'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/1/profile',
    'router_path' => 'user/%',
    'link_title' => 'Edit Profile',
    'options' => array(
      'menu_token_link_path' => 'user/[site:current-user:uid]/edit/profile',
      'menu_token_data' => array(
        'user' => array(
          'type' => 'user',
          'plugin' => 'user_context',
          'options' => array(),
        ),
      ),
      'menu_token_options' => array(
        'clear' => 0,
      ),
      'attributes' => array(
        'title' => '',
      ),
      'alter' => TRUE,
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<nolink>',
  );
  // Exported menu link: user-menu:user/logout
  $menu_links['user-menu:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'alter' => TRUE,
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<nolink>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('<span class="glyphicon glyphicon-calendar"></span> Test Coordinator');
  t('<span class="glyphicon glyphicon-calendar"></span> Test events');
  t('<span class="glyphicon glyphicon-plus"></span> Add IQ Test Event');
  t('<span class="glyphicon glyphicon-plus"></span> Add Order');
  t('<span class="glyphicon glyphicon-user"></span> Account');
  t('<span class="glyphicon glyphicon-user"></span> Manage users');
  t('<span class="glypicon glyphicon-plus"></span> Add guest member');
  t('Aktiviteter i Mensa');
  t('Bibliotek');
  t('Billedearkiv');
  t('Bliv medlem');
  t('Bliv medlem af Mensa');
  t('Butik');
  t('Create new users');
  t('Current members');
  t('Edit Account');
  t('Edit LocSec');
  t('Edit Mail alias');
  t('Edit Profile');
  t('Forum');
  t('Forum Mentum arkiv');
  t('Guest Members');
  t('Hvad er Mensa');
  t('Hvad er intelligens?');
  t('Håndbogen');
  t('IQ Test Events');
  t('Int. constitution');
  t('International Journal');
  t('Kalender');
  t('LocSec præsentation');
  t('Log out');
  t('Mailinglister');
  t('Medieomtale');
  t('Medlemmer');
  t('Medlemsskab');
  t('New Testees - Documents');
  t('New Testees - Result');
  t('Nyheder');
  t('Old Testees');
  t('Old members');
  t('Om Mensa');
  t('Previous Events');
  t('Publikationer');
  t('Referater');
  t('SIG\'er');
  t('SIGHT');
  t('Test Coordinator menu (menu position rule)');
  t('Tester admin items (menu position rule)');
  t('Testkontrollanter');
  t('Tillidspersoner');
  t('Upcoming Events');
  t('Upcoming events');
  t('User account');
  t('User management menu (menu position rule)');
  t('Vedtægter');
  t('View Profile');
  t('Webfora');
  t('What is Mensa');


  return $menu_links;
}
