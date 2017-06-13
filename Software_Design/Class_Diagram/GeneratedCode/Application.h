
#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>

/**
  * class Application
  * 
  */

class Application
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Application ( );

  /**
   * Empty Destructor
   */
  virtual ~Application ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  



  /**
   */
  void main ( )
  {
    //display sign in screen
    		//fetch the existing folders from the server to help with creating the home screen
    		//send info to server to validate the id and password
    		if(validate is true) {
    			//display main page
    			//contact server to get the folders that exist
    			//add folders to main page
    			switch(what was selected) {
    				case "folder":
    					//create folder instance
    					//pass folder that was selected
    
    
    				case "settings":
    					//create settings instance
    					//display settings page
    					settingsMain();
    
    				case "new folder":
    					//create instance of server
    					//contact server to create a new folder with the name of the parameter we pass
    			}
    		}
    		else {
    			//produce error and display it
    			//redisplay the sign in page
    		}
  }


  /**
   * @param  button_id_that_made_the_selection
   */
  void buttonSelected (id button_id_that_made_the_selection )
  {
    switch(the button on the screen that is selected) {
    			case "new folder":
    				//create server instance
    				//pass name of folder to the serverInstance.createFolder method to create a new folder
    				//refresh the home screen to show the new folders
    
    			case "send":
    				//create email instance with the values of all of the fields
    				//call the sendEmail method and pass the email instance
    
    				if(a network error occurs) {
    					//display error message
    					//call the writeEmail method to restart the process
    				}
    				//otherwise we are done here; continue with the flow
    
    			case "save":
    				//create email instance with the values of all of the fields
    				//create an instance of the server class
    				//pass the email instance to the server class with the save method of the server class
    				//display saved successful popup
    
    			case "cancel":
    				if(cancel button selected is not the move email selected cancel button) {
    					//discard email message
    				}
    				else {
    					//we are done with this flow, let the application be done with this switch statement and get to the control flow below it
    				}
    
    			case "home":
    				//create email instance with the values of all of the fields
    				//create an instance of the server class
    				//pass the email instance to the server class with the save method of the server class
    				//set reply_selected to false so that the application will go back to the home screen when done with this switch statement
    
    			case "back":
    				//create email instance with the values of all of the fields
    				//create an instance of the server class
    				//pass the email instance to the server class with the save method of the server class
    
    			case "attach":
    				//open built in file browser to let the user choose a file to attach
    
    			case "remove attachment":
    				//remove all attachments the user may of added
    
    			case "arrow_button":
    				//inflate and display over the current screen the MAIL LIST ITEM ITEM POPUP screen defined in the Interface file
    				//i.e. reply, forward, move buttons are added to screen
    
    			case "forward":
    				//display compose screen in interface file
    				//add FW: to the from of the subject field
    
    			case "reply":
    				//display compose screen in interface file
    
    			//******* this may not be needed case "move":
    				//use server class to get the list of folders that exist
    				//display move email selected screen in interface file
    				switch(the button on the screen that is selected){
    					case "the folder that was selected":
    						//*******	
    				}
    		
    		}
    
    			//next is the exit control flow section that executes after the case statement is done
    			if(reply_selected private boolean value is true) {
    				//return application context back to the email list in the correct folder the user was previously in before selecting reply
    			}
    			else {
    				//return application context back to the home page
    			}
    
    //############ Interface/screen/view section ###############
    
    //when a button is selected call the buttonSelected() method from the Interface Model and pass the button id/type
    
    
    //SIGN-IN SCREEN
    //add text box that has a "account" string
    //add text box that has a "password" string
    //add forgot password screen
    
    
    //HOME PAGE SCREEN
    //add new folder button
    //add existing email folders to the page
    //add settings button to page
    
    
    //READ EMAIL SCREEN
    //Create user interface
    //Add a back button
    //Add a home button
    //Add text box that has the subject of the message
    //Add text box that has the sender of the email
    //Add text box that has the receipient of the email
    //Add text box that has the attachments of the email
    //Add a text box where the user can type the body of the email
    //Add delete button
    //Add Arrow button (which gives the reply, forward, and move functionality)
    
    
    //MAIL LIST ITEM SCREEN
    //Create user interface
    //Add a back button
    //Add a home button
    //Add text box that has the subject of the message
    //Add text box that has the sender of the email
    //Add text box that has the receipient of the email
    //Add text box that has the attachments of the email
    //Add a text box where the user can type the body of the email
    //Add delete button
    //Add Arrow button (which gives the reply, forward, and move functionality)
    
    //MAIL LIST ITEM ITEM POPUP
    //Inflate place holder over the current UI
    //add reply button to place holder
    //add forward button to place holder
    
    //COMPOSE SCREEN
    //create user interface
    //add a back buton
    //add a home button
    //add a save button
    //add a send button
    //add an attach button
    //remove attachment
    //add a text box that has a "subject" string in it that dissapears when the user starts typing in this field
    //add a text box that has a "to" string in it that dissapears when the user starts typing in this field
    //add a text box that has "cc" string in it that disappears when the user starts typing in this field
    //add a text box that has "bcc" string in it that disappears when the user starts typing in this field
    //add a text box where the user can type the body of the email
    
    //MOVE EMAIL SELECTED SCREEN
    //display list of folders available to move the email to
    //add cancel button
    
    //ADD ACCOUNT SCREEN
    //add text box that has a "account" string
    //add text box that has a "password" string
    //add an add button
    
    //#########################################
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

#endif // APPLICATION_H
