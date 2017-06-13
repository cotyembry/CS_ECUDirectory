
#ifndef SETTINGS_H
#define SETTINGS_H

#include <string>

/**
  * class Settings
  * 
  */

class Settings
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Settings ( );

  /**
   * Empty Destructor
   */
  virtual ~Settings ( );

  // Static Public attributes
  //  

  // Public attributes
  //  

  int sync_frequency;
  string priority_sender_email_color;
  int font_size;
  string font_color;
  bool sort_alphabetically;
  bool sort_by_date;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Set the value of sync_frequency
   * @param new_var the new value of sync_frequency
   */
  void setSync_frequency ( int new_var )   {
      sync_frequency = new_var;
  }

  /**
   * Get the value of sync_frequency
   * @return the value of sync_frequency
   */
  int getSync_frequency ( )   {
    return sync_frequency;
  }

  /**
   * Set the value of priority_sender_email_color
   * @param new_var the new value of priority_sender_email_color
   */
  void setPriority_sender_email_color ( string new_var )   {
      priority_sender_email_color = new_var;
  }

  /**
   * Get the value of priority_sender_email_color
   * @return the value of priority_sender_email_color
   */
  string getPriority_sender_email_color ( )   {
    return priority_sender_email_color;
  }

  /**
   * Set the value of font_size
   * @param new_var the new value of font_size
   */
  void setFont_size ( int new_var )   {
      font_size = new_var;
  }

  /**
   * Get the value of font_size
   * @return the value of font_size
   */
  int getFont_size ( )   {
    return font_size;
  }

  /**
   * Set the value of font_color
   * @param new_var the new value of font_color
   */
  void setFont_color ( string new_var )   {
      font_color = new_var;
  }

  /**
   * Get the value of font_color
   * @return the value of font_color
   */
  string getFont_color ( )   {
    return font_color;
  }

  /**
   * Set the value of sort_alphabetically
   * @param new_var the new value of sort_alphabetically
   */
  void setSort_alphabetically ( bool new_var )   {
      sort_alphabetically = new_var;
  }

  /**
   * Get the value of sort_alphabetically
   * @return the value of sort_alphabetically
   */
  bool getSort_alphabetically ( )   {
    return sort_alphabetically;
  }

  /**
   * Set the value of sort_by_date
   * @param new_var the new value of sort_by_date
   */
  void setSort_by_date ( bool new_var )   {
      sort_by_date = new_var;
  }

  /**
   * Get the value of sort_by_date
   * @return the value of sort_by_date
   */
  bool getSort_by_date ( )   {
    return sort_by_date;
  }


  /**
   */
  void settingsMain ( )
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

#endif // SETTINGS_H
