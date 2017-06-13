#include "Email.h"

// Constructors/Destructors
//  

Email::Email ( ) {
initAttributes();
}

Email::~Email ( ) { }

//  
// Methods
//  


// Accessor methods
//  


// Other methods
//  

void Email::initAttributes ( ) {
  sender_email = null;
  recipient_email = null;
  subject = null;
  body_of_email = null;
  cc_email = null;
  bcc_email = null;
  date_and_time = null;
  reply_or_forwardFromEmail_selected = false;
  location = "";
  email_status = 0;
}

