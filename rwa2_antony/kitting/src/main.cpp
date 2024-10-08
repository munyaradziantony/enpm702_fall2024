#include <iostream>
#include "kitting.hpp"

int main() {
    /**
    * Variable declarations for bin and tray counts
    */
    unsigned int green_bin_count = 0, blue_bin_count = 0, red_bin_count = 0;
    unsigned int green_tray_count = 0, blue_tray_count = 0, red_tray_count = 0;
    bool gripper_status = false;

    /**
    * Call Func(get_bin_counts) - Get bin counts from the user
    */
    get_bin_counts(green_bin_count, blue_bin_count, red_bin_count);

    /**
    * Call Func(get_tray_requirements)Get tray requirements from the user
    */
    get_tray_requirements(green_tray_count, blue_tray_count, red_tray_count,
                          green_bin_count, blue_bin_count, red_bin_count);

    /**
    * Call Func(display_current_state)Display the initial state
    */
    display_current_state(green_bin_count, blue_bin_count, red_bin_count,
                          green_tray_count, blue_tray_count, red_tray_count, gripper_status);

    /**
    * Notify on the start of the plan generation
    */
    std::cout << "Generating and executing plan based on the given requirements...\n";

    /**
    * Call Func(generatePlan) Generate and execute the plan to reach tray goals
    */
    generatePlan(green_bin_count, blue_bin_count, red_bin_count, 
                 green_tray_count, blue_tray_count, red_tray_count);

    /**
    *Call Func(display_current_state) Display final state
    */
    display_current_state(green_bin_count, blue_bin_count, red_bin_count,
                          green_tray_count, blue_tray_count, red_tray_count, gripper_status);

    /**
    *Check if the tray is complete
    */
    if (is_tray_complete(green_tray_count, blue_tray_count, red_tray_count,
                         green_tray_count, blue_tray_count, red_tray_count)) {
        std::cout << "The task successfully completed with the required items!\n";
    } else {
        std::cout << "Tray goal requirement not met. Please check the inputs or execution.\n";
    }
    std::cout << "====================================================="
              << "=====================================================\n";
    return 0;
}


