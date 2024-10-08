#include <iostream>
#include "kitting.hpp"
//==============================================================================
/*NB* Using unsigned int for all functions because only positive number are used
in all the functions */
//===============================================================================
// Define get_bin_counts function
//===============================================================================
void get_bin_counts(unsigned int &green_bin_count,
		    unsigned int &blue_bin_count, 
		    unsigned int &red_bin_count) {
    // Ensure that the value for each input does not exceed 10.
    //Loop until the input values for the number of bin for each color are valid.
    do {
    	//Request for input from the user
        std::cout << "Please enter the number of blocks in each bin" 
        	  << "(maximum 10 blocks per bin):\n";
        
        //Read and store count value for the green bin 
        std::cout << "Green bin: ";
        std::cin  >> green_bin_count;
        
        //Read and store count value for the blue bin
        std::cout << "Blue bin: ";
        std::cin  >> blue_bin_count;
        
        //Read and store count value for the red bin
        std::cout << "Red bin: ";
        std::cin  >> red_bin_count;
        
        std::cout<<"====================================================="
                 <<"=====================================================\n";
    } //Continue looping for all inputs to be between 0 and 10.
    while(green_bin_count < 0 || green_bin_count > 10 ||
    	  blue_bin_count  < 0 || blue_bin_count  > 10 ||
    	  red_bin_count   < 0 || red_bin_count   > 10 );
}

//===============================================================================
// Define get_tray_requirements function i.e goal state 
//===============================================================================
void get_tray_requirements(unsigned int &green_tray_count,
			   unsigned int &blue_tray_count,
			   unsigned int &red_tray_count,
			   unsigned int green_bin_count,
			   unsigned int blue_bin_count,
			   unsigned int red_bin_count) {			   
    // Loop until the input values for the number of blocks in the tray w.r.t
    // color are valid.
    do {
    	//Request for input from the user
        std::cout << "Please enter the number of blocks for each color to place"
                  << "in the tray (max 10 blocks per colour):\n";
        
        //Read and store count value for the red bin
        std::cout << "Green blocks: ";
        std::cin  >> green_tray_count;
        
        //Read and store count value for the red bin
        std::cout << "Blue blocks: ";
        std::cin  >> blue_tray_count;
        
        //Read and store count value for the red bin
        std::cout << "Red blocks: ";
        std::cin  >> red_tray_count;
        
        std::cout<<"====================================================="
                 <<"=====================================================\n";
        
    } //validating the inputs
    while(
          //Green blocks number must between 0 and the available blocks in the green bin
    	  green_tray_count < 0 || green_tray_count > green_bin_count|| 
    	  
    	  //Blue blocks number must be between 0 and the available blocks in the blue bin
    	  blue_tray_count  < 0 || blue_tray_count > blue_bin_count  ||
    	  
    	  //Red blocks number must be between 0 and the available blocks in the red bin
    	  red_tray_count   < 0 || red_tray_count > red_bin_count    ||	  
    	    
    	  //total blocks to be less than 10
          (green_tray_count + blue_tray_count + red_tray_count > 10)|| 
          
          //at least 1 block should be in the tray
          (green_tray_count + blue_tray_count + red_tray_count < 1));   
}

//===============================================================================
// Define pick_block function
//===============================================================================
void pick_block(unsigned int &bin_count, bool &gripper_status) {	
    if (
        //Check if bin has blocks and gripper is empty
    	bin_count > 0 && !gripper_status) {
    	
    	// Decrease block count in bin the bin by 1
        bin_count--;
        
        // Gripper is now holding a block hence set to true            
        gripper_status = true;  
    }
}

//===============================================================================
// Define place_block function
//===============================================================================
void place_block(unsigned int &tray_count, bool &gripper_status) {
    if (
    	// Check if the gripper is holding a block
    	gripper_status) {  
    	
    	// Increase block count in tray    
        tray_count++; 
        
        // Gripper is now empty and hence set to false          
        gripper_status = false; 
    }
}

//===============================================================================
// Define display_current_state function
//===============================================================================
void display_current_state(unsigned int green_bin_count = 0,
			   unsigned int blue_bin_count = 0, 
			   unsigned int red_bin_count = 0, 
			   unsigned int green_tray_count = 0, 
			   unsigned int blue_tray_count = 0, 
			   unsigned int red_tray_count = 0, 
			   bool gripper_status = true) {
    //heading for the current state
    std::cout << "Current State:\n";
    
    //Show the current number of blocks for each color in their respective bins.
    std::cout << "Green Bin: " << green_bin_count << " blocks\n";
    std::cout << "Blue Bin: "  << blue_bin_count  << " blocks\n";
    std::cout << "Red Bin: "   << red_bin_count   << " blocks\n";
    
    // Show the current number of blocks for each color in the tray
    std::cout << "Tray: "      << green_tray_count << " Green, " 
    	      		       << blue_tray_count  << " Blue, " 
    	     		       << red_tray_count   << " Red blocks\n";
    	       
    	      
    //Display wether the gripper is holding a block or empty 
    std::cout << "Gripper Status: " 
    	      << (gripper_status ? "Holding a block" : "Empty") << "\n";
    	      
    	      
    std::cout<<"====================================================="
             <<"=====================================================\n";
}

//===============================================================================
// Define plan function
//===============================================================================
void plan(unsigned int &green_bin_count,   
          unsigned int &blue_bin_count,    
          unsigned int &red_bin_count,     
          unsigned int tray_goal_green,    
          unsigned int tray_goal_blue,     
          unsigned int tray_goal_red) {   

    // variables for number of blocks placed in each tray
    unsigned int green_tray_count = 0, blue_tray_count = 0, red_tray_count = 0;
    
    //gripper status true when empty , false when holding a block
    bool gripper_status = false;

    // Print message to communicate to the user
    std::cout << "Generating a plan...\n";  
    std::cout << "====================================================="
              << "=====================================================\n";

    // Focusing on the green 
    int new_green_bin_count = green_bin_count - 1;
    
    // Loop to pick and place green blocks until goal reached
    while (green_tray_count < tray_goal_green) {
        
        //Display the task happening 
        std::cout << "\nPick 1 green block: " << (new_green_bin_count) 
                  << " blocks remaining in the green bin.\n";
        
        // Simulate task of picking a green block and update the counts
        perform_task("pick_block", green_bin_count, green_tray_count, gripper_status);
        
        // Increment green blocks in the tray and decrement the bin count 
        green_tray_count++;
        green_bin_count--;
        new_green_bin_count = green_bin_count;
        

        // Check if the goal for the green tray is met and display complete message
        if (green_tray_count == tray_goal_green) {
            std::cout << "Place 1 green block in the tray: Tray Completed for the green blocks.\n";
            
        //if condition not met display more blocks are needed in the tray
	} else {
           std::cout << "Place 1 green block in the tray: " << (tray_goal_green - green_tray_count)
                     << " green block(s) still needed in the tray.\n";
 	}
    }

    // Focusing on the blue blocks
    int new_blue_bin_count = blue_bin_count - 1;
    
    // Loop to pick and place blue blocks until goal reached
    while (blue_tray_count < tray_goal_blue) {
        
        std::cout << "\nPick 1 blue block: " << (blue_bin_count - 1) 
                  << " blocks remaining in the blue bin.\n";
        
        // Simulate task of picking a blue block and update the counts
        perform_task("pick_block", blue_bin_count, blue_tray_count, gripper_status);
        
        // Increment the count of blue blocks in the tray and decrement the bin count
        blue_tray_count++;
        blue_bin_count--;
        new_blue_bin_count = blue_bin_count;
        

        // Check if the goal for the blue tray is met
        if (blue_tray_count == tray_goal_blue) {
            std::cout << "Place 1 blue block in the tray: Tray Completed for the blue blocks.\n";
            
        //if condition not met display more blocks are needed in the tray    
        } else {
            std::cout << "Place 1 blue block in the tray: " << (tray_goal_blue - blue_tray_count) 
                      << " blue block(s) still needed in the tray.\n";
        }
    }

    // Focusing on the red blocks
    int new_red_bin_count = red_bin_count - 1;
    
    // Loop to pick and place red blocks until the tray_goal_red is reached
    while (red_tray_count < tray_goal_red) {
        
        
        std::cout << "\nPick 1 red block: " << (new_red_bin_count) << " blocks remaining in the red bin.\n";
        
        // Simulate task of picking a red block and update the counts
        perform_task("pick_block", red_bin_count, red_tray_count, gripper_status);
        
        // Increment the count of red blocks in the tray and decrement the bin count
        red_tray_count++;
        red_bin_count--;
        new_red_bin_count = red_bin_count;

        // Check if the goal for the red tray is met
        if (red_tray_count == tray_goal_red) {
            std::cout << "Place 1 red block in the tray: Tray Completed for the red blocks.\n";
            
        //if condition not met display more blocks are needed in the tray 
        } else {
            std::cout << "Place 1 red block in the tray: " << (tray_goal_red - red_tray_count) << " red block(s) still needed in the tray.\n";
        }
    }
    
    std::cout << "====================================================="
              << "=====================================================\n";
    std::cout << "Tray Completed for all colors and total number of blocks required !!!\n";
    std::cout << "====================================================="
              << "=====================================================\n";
}

//===============================================================================
// Implementation of is_tray_complete function
//===============================================================================
bool is_tray_complete(unsigned int tray_goal_green, 
		      unsigned int tray_goal_blue, 
		      unsigned int tray_goal_red, 
		      unsigned int green_tray_count, 
		      unsigned int blue_tray_count, 
		      unsigned int red_tray_count) {
    // Verify if the current counts of green, blue, and red blocks in the tray match
    // their respective goal values. If all match, the tray is complete.
    return (
            //checking green count
    	    green_tray_count == tray_goal_green) &&
    	    
    	    //checking blue count 
           (blue_tray_count == tray_goal_blue) && 
           
           //checking red count
           (red_tray_count == tray_goal_red);
}


//===============================================================================
// Implementation of perform_task function
//===============================================================================
void perform_task(const std::string &task, 
                  unsigned int &bin_count, 
                  unsigned int &tray_count, 
                  bool &gripper_status) {

    // If the task is to pick a block
    if (task == "pick_block") {

        // Preconditions: check if the bin is not empty and gripper is empty
        if (bin_count > 0 && !gripper_status) {

            // Remove a block from the bin
            bin_count--;

            // Gripper status set to true as it holds a block now
            gripper_status = true;
            
        } else {
            // Display error message if the precondition is not met
            //std::cout << "Cannot pick up a block. Either the bin is empty "
             //         << "or the gripper is already holding a block.\n";
        }

    } 
    // If the task is to place a block
    else if (task == "place_block") {

        // Preconditions: check if gripper is holding a block
        if (gripper_status) {

            // Add a block to the tray
            tray_count++;

            // Gripper status set to false as it is now empty
            gripper_status = false;

        } else {
            // Display error message if the precondition is not met
            std::cout << "Cannot place a block. The gripper is empty.\n";
        }
    }
}


//===============================================================================
// Implementation of generatePlan function
//===============================================================================
void generatePlan(unsigned int green_bin_count, 
		  unsigned int blue_bin_count, 
		  unsigned int red_bin_count, 
		  unsigned int tray_goal_green, 
		  unsigned int tray_goal_blue, 
		  unsigned int tray_goal_red) {
		  
    // Notify on the start of plan generation
    std::cout << "Generating plan...\n";
    
    // Display initial state of the bin and tray
    std::cout << "Initial State:\n";
    
    // Show initial counts with empty tray and gripper
    display_current_state(green_bin_count, blue_bin_count, red_bin_count, 0, 0, 0, false);

    // Overview of the plan based on the goals for each color
    std::cout << "Plan Details:\n";
    std::cout << "- Pick and place " << tray_goal_green 
              << " Green blocks from Green Bin to Tray\n";
              
    //Plan for the blues blocks          
    std::cout << "- Pick and place " << tray_goal_blue  
              << " Blue blocks from Blue Bin to Tray\n";
              
    //Plan for the red blocks         
    std::cout << "- Pick and place " << tray_goal_red   
              << " Red blocks from Red Bin to Tray\n";

    // Notify the user on the start of the plan
    std::cout << "Starting execution of the plan...\n";

    // Do the plan using the `plan` function with the provided bin counts and tray goals
    plan(green_bin_count, blue_bin_count, red_bin_count, tray_goal_green, tray_goal_blue, tray_goal_red);

    // Tell the user on the completion of the plan execution 
    std::cout << "Plan execution completed.\n";
} 


