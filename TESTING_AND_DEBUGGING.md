# **Testing and Debugging**

This document outlines the testing and debugging process for the **Dungeon Escape** game to ensure it runs smoothly and meets the expected gameplay standards.

---

## 🧪 **Unit Testing**

### **Objective**
Unit testing focuses on individual components of the game to ensure they function as expected.

### **Components to Test**
1. **Player Movement**  
   - Ensure the player moves correctly in all directions (`W`, `A`, `S`, `D`).
   - Validate that the player does not move outside the dungeon boundaries.
   
2. **Collision Detection**  
   - Verify that collisions with walls, traps, and exit tiles work as intended.
   - Ensure traps result in a game over and exit tiles trigger level completion.
   
3. **Scoring System**  
   - Confirm that collectible items add the correct points to the player's score.
   - Validate time and exit bonuses are calculated correctly.

4. **Traps and Exit Tiles**  
   - Verify red tiles end the game when stepped on.
   - Confirm green tiles lead to the next level or game completion.

---

## 🌐 **Cross-Platform Testing**

### **Objective**
Ensure the game runs smoothly across different platforms and configurations.

### **Platforms to Test**
1. **Windows**
   - Test for compatibility with popular compilers like MinGW and Visual Studio.  
2. **macOS**
   - Verify that the game runs on Xcode and Homebrew-installed SFML.  
3. **Linux**
   - Test using GCC and check compatibility with various Linux distributions.  

### **Checklist**
- Verify the installation instructions in the `README.md` work for all platforms.
- Test SFML setup, asset loading, and game execution on each platform.
- Check for platform-specific rendering issues or crashes.

---

## 🐞 **Bug Fixes**

### **Common Issues**
1. **Gameplay Bugs**
   - Player movement is unresponsive or inaccurate.
   - Scoring does not update correctly after collecting items.
   - Traps and exits do not trigger their respective actions.

2. **Asset Issues**
   - Missing textures, sounds, or fonts cause crashes.
   - Incorrect asset loading paths.

3. **Rendering Issues**
   - Game elements (tiles, traps, collectibles) do not render correctly.
   - Lag or frame drops during gameplay.

4. **Platform-Specific Crashes**
   - SFML-related issues on certain operating systems or hardware.

### **Debugging Steps**
1. Use SFML’s built-in debugging tools to identify rendering issues.
2. Add log messages in critical sections of the code (e.g., movement, collision detection).
3. Use a debugger (e.g., GDB, Visual Studio Debugger) to step through code and identify issues.
4. Ensure all assets are correctly referenced in their respective folders.

---

## ✅ **Final Verification**

### **Before Release**
- Confirm all unit tests pass without errors.
- Ensure smooth performance across all tested platforms.
- Verify that all assets load correctly and gameplay runs without crashes.
- Double-check the scoring system for accuracy.

---

## 📌 **Additional Notes**

- Maintain a `TEST_CASES.md` file to document all test cases for future reference.
- Use GitHub Issues to track and document bugs for easier collaboration.

