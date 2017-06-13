#include "Settings.h"

// Constructors/Destructors
//  

Settings::Settings ( ) {
initAttributes();
}

Settings::~Settings ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Settings::initAttributes ( ) {
  sync_frequency = 0;
  priority_sender_email_color = white;
  font_size = 12;
  font_color = black;
  sort_alphabetically = 0;
  sort_by_date = 1;
}

