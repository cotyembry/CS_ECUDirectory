
#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>

/**
  * class Account
  * 
  */

class Account
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Account ( );

  /**
   * Empty Destructor
   */
  virtual ~Account ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  array[] email_account;
  array[] password;
  int number_of_accounts;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of email_account
   * @param new_var the new value of email_account
   */
  void setEmail_account ( array[] new_var )   {
      email_account = new_var;
  }

  /**
   * Get the value of email_account
   * @return the value of email_account
   */
  array[] getEmail_account ( )   {
    return email_account;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword ( array[] new_var )   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  array[] getPassword ( )   {
    return password;
  }

  /**
   * Set the value of number_of_accounts
   * @param new_var the new value of number_of_accounts
   */
  void setNumber_of_accounts ( int new_var )   {
      number_of_accounts = new_var;
  }

  /**
   * Get the value of number_of_accounts
   * @return the value of number_of_accounts
   */
  int getNumber_of_accounts ( )   {
    return number_of_accounts;
  }


  /**
   */
  void setString ( )
  {
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

#endif // ACCOUNT_H
