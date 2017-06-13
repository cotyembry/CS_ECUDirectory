
#ifndef USER_H
#define USER_H

#include <string>

/**
  * class User
  * 
  */

class User
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  User ( );

  /**
   * Empty Destructor
   */
  virtual ~User ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  string user_id;
  string password;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of user_id
   * @param new_var the new value of user_id
   */
  void setUser_id ( string new_var )   {
      user_id = new_var;
  }

  /**
   * Get the value of user_id
   * @return the value of user_id
   */
  string getUser_id ( )   {
    return user_id;
  }

  /**
   * Set the value of password
   * @param new_var the new value of password
   */
  void setPassword ( string new_var )   {
      password = new_var;
  }

  /**
   * Get the value of password
   * @return the value of password
   */
  string getPassword ( )   {
    return password;
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

#endif // USER_H
