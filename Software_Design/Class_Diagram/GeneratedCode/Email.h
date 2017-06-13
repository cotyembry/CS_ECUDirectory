
#ifndef EMAIL_H
#define EMAIL_H

#include <string>

/**
  * class Email
  * 
  */

class Email
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Email ( );

  /**
   * Empty Destructor
   */
  virtual ~Email ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  string sender_email;
  string recipient_email;
  string subject;
  string body_of_email;
  array[] attachments;
  string cc_email;
  string bcc_email;
  string date_and_time;
  boolean reply_or_forwardFromEmail_selected;
  string location;
  bool email_status;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of sender_email
   * @param new_var the new value of sender_email
   */
  void setSender_email ( string new_var )   {
      sender_email = new_var;
  }

  /**
   * Get the value of sender_email
   * @return the value of sender_email
   */
  string getSender_email ( )   {
    return sender_email;
  }

  /**
   * Set the value of recipient_email
   * @param new_var the new value of recipient_email
   */
  void setRecipient_email ( string new_var )   {
      recipient_email = new_var;
  }

  /**
   * Get the value of recipient_email
   * @return the value of recipient_email
   */
  string getRecipient_email ( )   {
    return recipient_email;
  }

  /**
   * Set the value of subject
   * @param new_var the new value of subject
   */
  void setSubject ( string new_var )   {
      subject = new_var;
  }

  /**
   * Get the value of subject
   * @return the value of subject
   */
  string getSubject ( )   {
    return subject;
  }

  /**
   * Set the value of body_of_email
   * @param new_var the new value of body_of_email
   */
  void setBody_of_email ( string new_var )   {
      body_of_email = new_var;
  }

  /**
   * Get the value of body_of_email
   * @return the value of body_of_email
   */
  string getBody_of_email ( )   {
    return body_of_email;
  }

  /**
   * Set the value of attachments
   * @param new_var the new value of attachments
   */
  void setAttachments ( array[] new_var )   {
      attachments = new_var;
  }

  /**
   * Get the value of attachments
   * @return the value of attachments
   */
  array[] getAttachments ( )   {
    return attachments;
  }

  /**
   * Set the value of cc_email
   * @param new_var the new value of cc_email
   */
  void setCc_email ( string new_var )   {
      cc_email = new_var;
  }

  /**
   * Get the value of cc_email
   * @return the value of cc_email
   */
  string getCc_email ( )   {
    return cc_email;
  }

  /**
   * Set the value of bcc_email
   * @param new_var the new value of bcc_email
   */
  void setBcc_email ( string new_var )   {
      bcc_email = new_var;
  }

  /**
   * Get the value of bcc_email
   * @return the value of bcc_email
   */
  string getBcc_email ( )   {
    return bcc_email;
  }

  /**
   * Set the value of date_and_time
   * @param new_var the new value of date_and_time
   */
  void setDate_and_time ( string new_var )   {
      date_and_time = new_var;
  }

  /**
   * Get the value of date_and_time
   * @return the value of date_and_time
   */
  string getDate_and_time ( )   {
    return date_and_time;
  }

  /**
   * Set the value of reply_or_forwardFromEmail_selected
   * @param new_var the new value of reply_or_forwardFromEmail_selected
   */
  void setReply_or_forwardFromEmail_selected ( boolean new_var )   {
      reply_or_forwardFromEmail_selected = new_var;
  }

  /**
   * Get the value of reply_or_forwardFromEmail_selected
   * @return the value of reply_or_forwardFromEmail_selected
   */
  boolean getReply_or_forwardFromEmail_selected ( )   {
    return reply_or_forwardFromEmail_selected;
  }

  /**
   * Set the value of location
   * @param new_var the new value of location
   */
  void setLocation ( string new_var )   {
      location = new_var;
  }

  /**
   * Get the value of location
   * @return the value of location
   */
  string getLocation ( )   {
    return location;
  }

  /**
   * Set the value of email_status
   * @param new_var the new value of email_status
   */
  void setEmail_status ( bool new_var )   {
      email_status = new_var;
  }

  /**
   * Get the value of email_status
   * @return the value of email_status
   */
  bool getEmail_status ( )   {
    return email_status;
  }


  /**
   * @param  EmailInstance
   */
  void sendEmail (Email EmailInstance )
  {
    if( validateEmail(check the receipient email address[es]) ) {
    
    				if(body has text OR there is a subject line OR there is an attachment) {
    					//create an instance of the server class
    					//pass the Email_Instance to the server
    					//Check return value to make sure it was sent correctly
    
    					if( network error while sending ) {
    						//display error message
    						//bring focus of the user interface back to the correct application context i.e. write email state
    					}
    
    					//if we got here the email sent correctly so,
    					//display message email sent successfully
    					//bring focus of the user interface back to the correct application context i.e. back to the application screen the user was previously on
    					//******* do I need to do more here to look into how to get the application to go to the correct screen? *******
    
    				}
    
    				//else there is nothing to send
    				else {
    					//display error message
    					//bring focus of the user interface back to the correct application context i.e. write email state
    				}
    			}
    
    			//else the email address is not valid
    			else {
    				//display error message
    				//bring focus of the user interface back to the correct application context
    			}
  }


  /**
   */
  void receiveEmail ( )
  {
    //the server class is necessary for this routine as well so,
    			//create an instance of the server class
    
    			while(program is running) {
    				//get the value of the sync_frequency from the settings class
    				switch(go to case for the value of the sync_frequency) {
    					case always on: //always on case default is 60 seconds
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 60 seconds
    
    					case 15minutes:
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 15 minutes
    
    					case 30minutes:
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 30 minutes
    
    					case 60minutes: //1hour
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 60 minutes
    
    					case 120minutes: //2hours
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 120 minutes
    
    					case 180minutes: //3hours
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 180 minutes
    
    					case 240minutes: //4hours
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 240 minutes
    
    					case 300minutes: //5hours
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//sleep for 300 minutes
    
    					case 'daily':
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//every day at 12pm
    
    					case 'on weekends':
    						//use the server class instance method to pull the new emails from the server
    						//i.e. server.getEmail()
    						//every saturday and sunday at 9am
    
    				}
    			}
  }


  /**
   * @param  receipient_email_address
   */
  void validateEmail (string receipient_email_address )
  {
    //make sure the email address is valid
    			//return correct value
  }


  /**
   * @param 
   * boolean_value_to_specify_if_reply_email_or_forward_from_viewing_the_individual_email_was_selected
   */
  void writeEmail (bool boolean_value_to_specify_if_reply_email_or_forward_from_viewing_the_individual_email_was_selected )
  {
    //set the reply_or_forwardFromEmail_selected instance variable value to that of this writeEmail parameter
    
    			if(UI is not inflated) {	
    				//inflate the user interface i.e. set up the fields to enter the email data and the buttons
    			}
  }


  /**
   * @param  EmailInstance
   */
  void forwardEmail (Email EmailInstance )
  {
    //the parameter below helps the application context go to the correct screen after the email is sent
    			writeEmail(pass boolean value true since the user will always be forwarding from a list of emails or from a specific email, Email_Instance);
  }


  /**
   * @param  EmailInstance
   */
  void readEmail (Email EmailInstance )
  {
    //create server instance
    			//take into account if the user selects delete email to make the application flow go back to the correct context
    			//make sure to display successful message if deleted successfully
    			//call server class change email status method to set the email to read status
    			//server.changeEmailStatus(this);
    			//inflate user interface
    			//make sure the user interface populates all of the fields with the email instance that is passed in
  }


  /**
   * @param 
   * boolean_value_to_specify_if_reply_email_or_forward_from_viewing_the_individual_email_was_selected
   * @param  EmailInstance
   */
  void writeEmail (bool boolean_value_to_specify_if_reply_email_or_forward_from_viewing_the_individual_email_was_selected, Email EmailInstance )
  {
    //set the reply_or_forwardFromEmail_selected instance variable value to that of this writeEmail parameter
    
    			if(UI is not inflated) {	
    				//inflate the user interface i.e. set up the fields to enter the email data and the buttons
    				//use the Email_Instance to load in the subject
    				//use the Email_Instance to load in the receipient email
    				//use the Email_Instance to load in the from email
    				//use the Email_Instance to load in the cc email
    				//use the Email_Instance to load in the bcc email
    				//use the Email_Instance to load in the body
    				//use the Email_Instance to load in the attachement(s)
    			}
    		}
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:


  void initAttributes ( ) ;

};

#endif // EMAIL_H
