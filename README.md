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

 > ## Phase III

### Navigation Diagram
![Diagram](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/146229303/9480a3c5-65d2-4925-aa29-83b0fa2cc985)

### Screen Layouts
![screen laoyouts-1](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/4d431e91-a25b-401c-9ddc-78729c57c0d3)
![screen laoyouts-2](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/6519bef2-1ed1-4201-98d5-d396c7a9d225)

We updated our screen layouts to match the exact outputs of the features we have coded so far. Everything has stayed the same conceptually as our last screen layout. 

## Class Diagram
![CS 100 Project UML](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/2a62f9eb-070d-42a2-bb98-ba576c3085fb)


This UML diagram outlines a comprehensive movie recommendation system, offering a detailed depiction of classes, their associations, and the relationships governing them. The diagram exhibits several instances of associations, both in terms of composition and aggregation. The Movie class, representing individual films, demonstrates composition with attributes like genre, maturity rating, director, actor, title, rating, and releaseDate. Moreover Database class utilizes aggregation, associating with a vector of Movie objects. This composition and aggregation emphasize the structural relationships between classes.

## SOLID Principles
Single Responsibility Principle has been applied to the userpass class and the preferences class because it separates the username and password functions from the rest of the preferences. Not only does this make for cleaner code, but it also makes it easier for other classes to access what they need and keeps the things that they don’t need out of their reach. This helped us realized that we needed to split up the original start.h file and this helped us split up our code (as seen in the alana/SOLID branch).

Next the Open/Closed Principle has been applied to the start() function where this initiates the sign-in process. You would be able to add more preferences easily, for example by release year. If the sign-in process evolves or new features are added, adhering to the OCP means you can extend the class without modifying existing code. It makes the class more maintainable and extensible. Future changes or additions to the sign-in process won't require modifying existing code. This helped us add setters and getters in the start() function in order to code this next sprint.

The Interface Segregation Principle has been applied to the preferences function, setactor() and setdirector(). If the user doesn’t want to input these preferences in, then they won’t get recommendations from these categories. This follows ISP because the set functions also don’t inhibit any other code and doesn’t cause detriment to the program. This helped us become better coders because this helped us think about giving the users more options over their preferences.
 
## Final deliverable

 
 ## Screenshots
 ![start](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/b1df70a2-dd10-4e2f-aed1-8424a5311011)
![image (1)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/5df7ed48-58c6-41cc-a7f8-c690ae70bd1e)
![image (2)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/17e26a6b-1b93-4c8a-86c5-68536f5cffbf)
![image (3)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/9705534c-cbf7-42fd-aa14-661229bf20ce)
![image (4)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/73c9dc13-ea46-499a-8d38-19582c75873a)
![image (5)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/19a529d0-a805-423f-a652-169a8486d605)
![image (6)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/9deee94c-45f9-4f54-9359-145b0b3cf7d1)
![image (7)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/0246849c-cc90-4679-b456-f7fe15dcae45)
![image (8)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/843261fd-d697-435b-b8c8-cb793139f86b)
![image (14)](https://github.com/cs100/final-project-smoha095-ashah174-ayama039-skoth011/assets/35586951/63c1bbf6-6b07-4722-a4ab-e69663cf80f9)

 ## Installation/Usage
To install our movie recommendation program, the user should clone this repository in their favorite IDE, preferably VS Code. Once they have cloned it the user should run cmake . and make which will create the executable. The executable name will be ./runMovieRecSystem. Once that executable is run, the user will be prompted a series of questions to create and account, sign in, create their profile. The a menu page will show where the user will type certain commands to go to pages they would like such as the movie recommendation, search, and settings. When the user wants to quit out of the system they will type "q" and the program will log them out. This program commands are based on keyboard inputs as it is terminal based. 
 ## Testing
Our project was tested using the Google Test Suite. We created unit tests for each function in each of our classes after we finished coding each class. We made sure everything passed before merging anything so we knew we are not merging broken code. Furthermore, we tested integration by running the programming and simulating what it would look like from the user's end to edit the user interface. We did not use continuous integration becuase we did not have enough time, but it would be helpful next time to make sure integration works whenever making a change to the code rather than only when we merge. We used Valgrind, however, we had no pointers in our code so running Valgrind is not necessary since aren't allocating any new memory. 

