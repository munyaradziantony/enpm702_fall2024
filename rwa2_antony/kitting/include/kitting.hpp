#ifndef KITTING_HPP
#define KITTING_HPP
#include <string>  // to enable use of std::string
//===============================================================================
/**
 * @file kitting.hpp
 * @author Munyaradzi Antony (mantony2@umd.edu)
 * @brief Code for kitting manufactring processing
 * @version 1.0.0
 *
 * @date 2024-10-05
 *
 * rwa2_antony
 */

//===============================================================================

/**
 * @brief Gets the number of blocks in each bin from the user.
 *
 * This function prompts the user to enter the number of blocks for three bins 
 * (green, blue, and red), ensuring the count is between 0 and 10 inclusive. 
 * It keeps requesting input until all values are within the specified range.
 *
 * @param[out] green_bin_count Reference to the number of blocks in the green bin.
 * @param[out] blue_bin_count  Reference to the number of blocks in the blue bin.
 * @param[out] red_bin_count   Reference to the number of blocks in the red bin.
 */
// Asking the user for the number of blocks in each bin
void get_bin_counts(unsigned int &green_bin, 
		    unsigned int &blue_bin, 
		    unsigned int &red_bin);
		    

//===============================================================================		    
/**
 * @brief Gets the number of blocks for each color to place in the tray.
 *
 * This function prompts the user to enter the number of blocks for three colors 
 * (green, blue, and red) to be placed in a tray. It validates that the input values
 * do not exceed the available count for each bin and that the total number of blocks 
 * does not surpass 10. The function will continue to prompt the user until all inputs
 * are valid.
 *
 * @param[out] green_tray_count Reference to the number of green blocks to place in the tray.
 * @param[out] blue_tray_count  Reference to the number of blue blocks to place in the tray.
 * @param[out] red_tray_count   Reference to the number of red blocks to place in the tray.
 * @param[in]  green_bin_count  Total number of green blocks available in the bin.
 * @param[in]  blue_bin_count   Total number of blue blocks available in the bin.
 * @param[in]  red_bin_count    Total number of red blocks available in the bin.
 */
// Asking the user for the number of blocks to place in the tray
void get_tray_requirements(unsigned int &tray_green, unsigned int &tray_blue,
                           unsigned int &tray_red, unsigned int green_bin, 
                           unsigned int blue_bin, unsigned int red_bin);
                           
//===============================================================================                           
/**
 * @brief Picks a block from the bin using the gripper.
 *
 * This function simulates picking a block from a specified bin and holding it with 
 * the gripper. It first verifies that the bin contains at least one block and that 
 * the gripper is empty. If both conditions are satisfied, the function reduces the 
 * bin count by one and updates the gripper status to true
 *
 * @param[out] bin_count       Reference to the current count of blocks in the bin.
 *                             This value is decreased by one when a block is picked.
 * @param[out] gripper_status  Reference to the gripper status. 
 *                             It is set to `true` when the gripper picks a block.
 */
// Task to pick up a block from a bin and trackig the bin count and gripper status)
void pick_block(unsigned int &bin_count, bool &gripper_status);

//===============================================================================
/**
 * @brief Places a block from the gripper into the tray.
 *
 * This function simulates placing a block from the gripper into a tray. It first checks 
 * whether the gripper is holding a block. If so, the function increments the tray count 
 * by one and updates the gripper status to false, indicating that it is now empty.
 *
 * @param[out] tray_count      Reference to the current count of blocks in the tray.
 *                             This value is increased by one when a block is placed.
 * @param[out] gripper_status  Reference to the gripper status.
 *                             It is set to `false` when a block is placed in the tray.
 */
// Task to place a block in the tray (updates the tray count and gripper status)
void place_block(unsigned int &tray_count, bool &gripper_status);

//===============================================================================
/**
 * @brief Displays the current state of the system, including bins, tray, and gripper status.
 *
 * This function displays the current number of blocks in each bin and tray for the colors 
 * (green, blue, and red). Additionally, it indicates the status of the gripper, showing whether 
 * it is holding a block or is empty. The function supports default values for all parameters.
 *
 * @param[in] green_bin_count   Current number of green blocks in the bin (default is 0).
 * @param[in] blue_bin_count    Current number of blue blocks in the bin (default is 0).
 * @param[in] red_bin_count     Current number of red blocks in the bin (default is 0).
 * @param[in] green_tray_count  Current number of green blocks in the tray (default is 0).
 * @param[in] blue_tray_count   Current number of blue blocks in the tray (default is 0).
 * @param[in] red_tray_count    Current number of red blocks in the tray (default is 0).
 * @param[in] gripper_status    Current status of the gripper: true if holding a block,
 *                              false if empty (default is true).
 */
// Task to display the current state of the system
void display_current_state(unsigned int green_bin, unsigned int blue_bin, 
                           unsigned int red_bin,   unsigned int tray_green, 
                           unsigned int tray_blue, unsigned int tray_red, 
                           bool gripper_status);

//===============================================================================
/**
 * @brief Generates a plan to pick and place blocks from bins to a tray until the goal is met.
 *
 * This function simulates a series of pick-and-place operations for blocks of three colors 
 * (green, blue, and red). It cycles through the bins, picks up blocks using the gripper, 
 * and transfers them to the tray until the desired count for each color is achieved. The 
 * function provides detailed output, showing each step and the current status of blocks in 
 * both the bins and tray
 *
 * @param[out] green_bin_count  Reference to the count of green blocks remaining in the bin.
 * @param[out] blue_bin_count   Reference to the count of blue blocks remaining in the bin.
 * @param[out] red_bin_count    Reference to the count of red blocks remaining in the bin.
 * @param[in]  tray_goal_green  Number of green blocks required in the tray.
 * @param[in]  tray_goal_blue   Number of blue blocks required in the tray.
 * @param[in]  tray_goal_red    Number of red blocks required in the tray.
 */
// Main planning function that defines the sequence of pick and place actions
void plan(unsigned int &green_bin, unsigned int &blue_bin,
          unsigned int &red_bin, unsigned int tray_goal_green, 
          unsigned int tray_goal_blue, unsigned int tray_goal_red);
          
//===============================================================================          
/**
 * @brief Checks if the tray has the required number of blocks for all colors.
 *
 * This function checks if the current count of green, blue, and red blocks in the 
 * tray matches their respective target values. If all the counts reach their goals, 
 * the tray is marked as complete.
 *
 * @param[in] tray_goal_green  The required number of green blocks to complete the tray.
 * @param[in] tray_goal_blue   The required number of blue blocks to complete the tray.
 * @param[in] tray_goal_red    The required number of red blocks to complete the tray.
 * @param[in] green_tray_count The current count of green blocks in the tray.
 * @param[in] blue_tray_count  The current count of blue blocks in the tray.
 * @param[in] red_tray_count   The current count of red blocks in the tray.
 * 
 * @return `true` if all block counts match their respective goals, `false` otherwise.
 */
// Function to check if the tray is complete
bool is_tray_complete(unsigned int tray_goal_green, unsigned int tray_goal_blue, 
                      unsigned int tray_goal_red, unsigned int tray_green, 
                      unsigned int tray_blue, unsigned int tray_red);

//===============================================================================
/**
 * @brief Performs a specified task (`pick_block` or `place_block`) on the blocks using the gripper.
 *
 * This function simulates either picking a block from a bin or placing a block into a 
 * tray based on the specified task. It validates the prerequisites for each action and 
 * updates the counts accordingly. For a pick_block task, it ensures the bin has blocks 
 * and the gripper is empty before picking. For a place_block task, it verifies that the 
 * gripper is holding a block before placing it into the tray.
 *
 * @param[in] task            The task to be performed, either "pick_block" or "place_block".
 * @param[out] bin_count      Reference to the current count of blocks in the bin. 
 *                            Decreases when a block is picked.
 * @param[out] tray_count     Reference to the current count of blocks in the tray. 
 *                            Increases when a block is placed.
 * @param[out] gripper_status Reference to the status of the gripper.
 *                            Set to `true` when holding a block, `false` when empty.
 */
// Function to execute a specific action (pick or place) based on parameters
void perform_task(const std::string &task, unsigned int &bin_count, 
                  unsigned int &tray_count, bool &gripper_status);

//===============================================================================
/**
 * @brief Generates and executes a plan to move blocks from bins to the tray based on specified goals.
 *
 * This function outlines the strategy for picking and placing blocks of three colors 
 * (green, blue, and red) from their respective bins into a tray, based on the defined 
 * target values for each color. It then invokes the plan function to carry out the 
 * detailed steps and provides real-time updates to the user throughout the process.
 *
 * @param[in] green_bin_count   Initial count of green blocks in the green bin.
 * @param[in] blue_bin_count    Initial count of blue blocks in the blue bin.
 * @param[in] red_bin_count     Initial count of red blocks in the red bin.
 * @param[in] tray_goal_green   Target count of green blocks to be placed in the tray.
 * @param[in] tray_goal_blue    Target count of blue blocks to be placed in the tray.
 * @param[in] tray_goal_red     Target count of red blocks to be placed in the tray.
 */
// Function to generate a detailed plan before executing it
void generatePlan(unsigned int green_bin, unsigned int blue_bin, unsigned int red_bin, 
                  unsigned int tray_goal_green, unsigned int tray_goal_blue, 
                  unsigned int tray_goal_red);

#endif

