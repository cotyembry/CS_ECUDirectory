
#ifndef SERVER_H
#define SERVER_H

#include <string>

/**
  * class Server
  * 
  */

class Server
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Server ( );

  /**
   * Empty Destructor
   */
  virtual ~Server ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   * @param  EmailInstance
   */
  void sendEmail (Email EmailInstance )
  {
    /this must return a 1 for successfully sending the email or a 0 for a network issue while sending
    			//take email object and send the email
  }


  /**
   */
  void getEmail ( )
  {
    //Pull all emails from the server
    			//returns array of email instances
  }


  /**
   * @param  EmailInstance
   */
  void saveEmail (Email EmailInstance )
  {
    			//save the email instance to the drafts email folder
  }


  /**
   * @param  accountToRemove
   */
  void removeAccount (account accountToRemove )
  {
    			//remove the account specified in the parameter
  }


  /**
   * @param  email_address
   * @param  password
   */
  void authenticateAccount (string email_address, string password )
  {
  }


  /**
   * @param  EmailInstance
   * @param  location_to_move_email_to
   */
  void categorizeEmail (Email EmailInstance, string location_to_move_email_to )
  {
    if(the EmailInstance location is in the junk folder) {
    				//move EmailInstance(s) to the inbox folder
    			}
    			else {
    				//move to the location specified
    			}
    			//returns array of email instances
  }


  /**
   * @param  EmailInstance
   */
  void deleteEmail (void EmailInstance )
  {
    //this moves the email to the deleted email folder on the server
    			//return array of email instances
  }


  /**
   * @param  EmailInstance
   */
  void deleteEmailPermanently (Email EmailInstance )
  {
    //this permanently deletes the email
    			//return array of email instances
  }


  /**
   * @param  name_of_folder
   */
  void createFolder (string name_of_folder )
  {
    			//create a new folder with the name of the folder from the specified name in the parameter
  }


  /**
   * @param  EmailInstance
   */
  void changeEmailStatus (Email EmailInstance )
  {
    			//update the already existing email instance(s) with the new parameter value
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



};

#endif // SERVER_H
