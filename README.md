# Movie Recommender 2.0
 
 > Authors: [Alana Yamauchi](https://github.com/ayama039) [Anokhee Shah](https://github.com/ashah174) [Shreya Mohan](https://github.com/shreyyaa123) [Shrey Kothari](https://github.com/ShreyGK6)

## Project Description
Purpose
-  We decided that we should do a movie recommender because all of us really like movies, but hate how long it takes to get a good movie recommendation. We wanted to create a system where movie recommendations were more personal than what most application offer right now.
  
Languages/tools/technologies
- C++
- VS Code
- Database from Kaggle: [IMDB Top 250 Movies](https://www.kaggle.com/datasets/karkavelrajaj/imdb-top-250-movies)
  
Inputs
- Username
- Password
- Age
- Genre
- Favorite Actor
- Favorite Director
  
Outputs
- top 5 overall based on profile 
- top 5 for 3 of their preference based on profile 
- (if user searches instead) top 20 based off of searches
- options to sort the search recommendations
- back and skip "buttons"
- reset profile "buttons"
- login/logout "buttons"
- intructions on how to use search feature, and navigate through our system
  
Features
- Database: using an exisitng database from Kaggle
- User sign up/log in: username, password
- User Profile Set Up: User has to pick genress and maturity rating, but can optionally pick other things such as actor(esses), director(s), release year, etc or just skip the optional section)
- Overview of system: After they set up their profile there'll be a message about how to use the site (how to call for items in the menu, get to the search function, see your profile, or how to go back)
- Menu: the user will be given options such as search, movie recommmendations, profile (takes back to profile), sign out
- Movie Recommendation: if the user chooses this option, the screen will populate with movies based on inputs from their profile. Our system will the top five movies taking all their inputs into account, 5 movies based on the genre they inputed, 5 movies based on their appropriate maturity rating, and 5 movies based on their favorite actor/director if they choose to input that. At anytime if the user changes their profile inputs these recommendations will also be updated to match the new inputs. These recommendations will be based off of the dataset. 
- Search: has menu for search parameters, which are the same as the ones in the profile set up, this will output recommendations independently to the profile. Asks what they want to filter recommendations by (user picks one) and they type it into the terminal using given commands. They first select the category and then within the category the user types what they want to see. For example, if they search by genre they would then type comedy and then the system would recommend 20 comedy movies from our database. This is useful because when with other people you may want to get new recommendations not soley based off of your profile and so this is a more generic recommendation option. These recommendations will be based off of the dataset.
- Sorting: Within the search fetaure the user can sort these recommendations based on highest to lowest ranking, views, and year
- Reset/back/skip: at any point the user can adjust username, password, and profile preferences
- Signout feature
- Each movie recommendation contains: ratings, synopsis, views, cast, director(s), maturity rating, release year, genre

## User Interface Specification

### Navigation Diagram

![Diagram](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/146229303/9480a3c5-65d2-4925-aa29-83b0fa2cc985)

The diagram shows the path our movie recommender will follow. First comes the log-in page, where the user enters their username and password. Then the user will be navigated to the user profile setup, where he or she can add preferences, change preferences, or change username and/or password. A message will be displayed and the user is taken to the center of the software, the overview of the system. The user presses the menu button that takes them to the menu. The menu shows what you can do: either movie recommender or searching. To go to movie recommender, the user goes to the recommendation button. To go to search, the user presses the search button. In the search button, the user can also press the sort button to sort out the recommendations that pop up. The user can always go back to the menu from either search or movie recommendation. The user can always go back to the user profile setup from the menu and log out from the menu.

### Screen Layouts

![screen laoyouts-1](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/492e8a3d-0ebe-48ec-8edd-f98fe6e9f81a)

The first screen is where the user will unput their Log In information such as their username and passwords. To log in they will type "L". If they are a first time user they will be prompted to set up their preferences where they will enter two mandatory things: age and genre, and have the option to input favorite actor and director. If they are a returning user, the sign in page will only have them type their username & password. Then they will see the Overview page which shows how our program will work. After that they will type "M" to go to the Menu page where they will be presented with the different features that they can utilize in our program. If the user types "R" they will see movie recommendations based on thier profile. If the user types "S" they will be able to search for a specific genre, actor, or director. If the user types, "P", the program will take them back to the profile so they can edit their preferences. If the user types "Q" the program will sign them out of them system. Within the search feature the user will hvae the option to sort their searched by release date or rating. First we will prompt them with the question on whether they want to sort, if †hey type "Y" we will then proceed to ask how they want their movies sorted, "Y" for release data or "R" for rating. If they selected "N" when asking if they want to sort thier recommendation our system would take them back to their search recommendations. At anytime, the user can type "B" to go back to the menu. 
## Class Diagram
![Blank diagram](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/ade9bb45-0602-42e5-98ad-55ace76256dd)

Phase 3
 > You will need to schedule a check-in for the second scrum meeting with the same reader you had your first scrum meeting with (using Calendly). Your entire team must be present. This meeting will occur on Zoom and should be conducted by Wednesday of week 8.
 
 > BEFORE the meeting you should do the following:
 > * Update your class diagram from Phase II to include any feedback you received from your TA/grader.
 > * Considering the SOLID design principles, reflect back on your class diagram and think about how you can use the SOLID principles to improve your design. You should then update the README.md file by adding the following:
 >   * A new class diagram incorporating your changes after considering the SOLID principles.
 >   * For each update in your class diagram, you must explain in 3-4 sentences:
 >     * What SOLID principle(s) did you apply?
 >     * How did you apply it? i.e. describe the change.
 >     * How did this change help you write better code?
 > * Perform a new sprint plan like you did in Phase II.
 > * You should also make sure that your README file (and Project board) are up-to-date reflecting the current status of your project and the most recent class diagram. Previous versions of the README file should still be visible through your commit history.
 
> During the meeting with your reader you will discuss: 
 > * How effective your last sprint was (each member should talk about what they did)
 > * Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 > * Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 > * What tasks you are planning for this next sprint.
![screen laoyouts-1](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/4d431e91-a25b-401c-9ddc-78729c57c0d3)
![screen laoyouts-2](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/6519bef2-1ed1-4201-98d5-d396c7a9d225)

We updated our screen layouts to match the exact outputs of the features we have coded so far. Everything has stayed the same conceptually as our last screen layout. 
 
 > ## Final deliverable
 > All group members will give a demo to the reader during lab time. ou should schedule your demo on Calendly with the same reader who took your second scrum meeting. The reader will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Project board.
 > * Make sure your README file and Project board are up-to-date reflecting the current status of your project (e.g. any changes that you have made during the project such as changes to your class diagram). Previous versions should still be visible through your commit history. 
 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
