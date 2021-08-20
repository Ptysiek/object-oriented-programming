# SHM Project

**Table of contents:**  
&nbsp;&nbsp;&nbsp;&nbsp; - [Go to the CodersSchool Readme](/documentation/CodersSchool/README.md) \
&nbsp;&nbsp;&nbsp;&nbsp; - [Project overview](#overview) \
&nbsp;&nbsp;&nbsp;&nbsp; - [Workflow cheat sheet](#workflow) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [1. Choose a task for yourself](#1-choose-a-task-for-yourself) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [2. Create branch](#2-create-branch) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [3. Work](#3-work) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; [4. Post-Work](#4-post-work) \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - [Creating new tasks](#creating-new-tasks)



<br/><br/>
-------------
### Overview

&nbsp; - Project Contributors: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Kacu (Ptysiek) \
&nbsp; \
&nbsp; - Branch `master` is intended for CodersSchool oryginal content \
&nbsp;&nbsp;&nbsp; with an exception for documentation and markdown files. \
&nbsp; \
&nbsp; - Branch `shm-master` is the target branch for everything related to shm code. \
&nbsp;&nbsp;&nbsp; Your branches should start from it and be merged into it.



<br/><br/>
-------------
### Workflow
### 1. Choose a task for yourself

&nbsp; 1. Go to the `Projects` tab and select the one you are working on. 
![](/documentation/Workflow/projectTab.png)

&nbsp; 2. Select your task from the `ToDo` column. Drag and drop it into the `InProgress` column. \
&nbsp;&nbsp;&nbsp;&nbsp; Don't take more than one task. \
&nbsp;&nbsp;&nbsp;&nbsp; If you want to reserve a task drag it into `PlannedForTomorrow` column. \
&nbsp;&nbsp;&nbsp;&nbsp; Your task in the `PlannedForTomorrow` column will be your next task to drag into `InProgress`. \
&nbsp;&nbsp;&nbsp;&nbsp; Also don't take more than one.
![](/documentation/Workflow/dragNdropTask.png)

&nbsp; 3. You can learn more about selected task by clicking on its title. \
&nbsp;&nbsp;&nbsp;&nbsp; From this side-panel Assign yourself to the task. 
![](/documentation/Workflow/assign.png)



<br/><br/>
### 2. Create branch

&nbsp; 1. Make sure that you are on `shm-master` branch. \
&nbsp; 2. Make sure that the `shm-master` branch is up to date. \
&nbsp; 3. Create new branch. \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - First number is always the index of the task / issue. \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Next copy-paste the title of that task. \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Always use lower case characters for branches. \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - KebabCase. Turn all spaces into: `-` \
&nbsp;&nbsp;&nbsp;&nbsp; \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Examples: \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Task title: `CS-Task1` Task index: `#1` Branch name: `1-cs-task1` \
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; - Task title: `Describe project workflow` Task index: `#3` Branch name: `3-describe-project-workflow` \
&nbsp; 4. Set branch upstream to itself.
![](/documentation/Workflow/createBranch.png)



<br/><br/>
### 3. Work

&nbsp; Get your task done. \
&nbsp; Each commit start with index of your task, it's the same index as your current branch. \
&nbsp; Use lower case characters. \
&nbsp; Don't use KebabCase for commits, use spaces instead. \
&nbsp; Describe your commit shortly in past tense. \
&nbsp; For example, on branch `1-cs-task1` the commit could look like `1 created new Store class`. \
&nbsp; And for `3-describe-project-workflow` branch \
&nbsp; the possible commit is `3 moved screanshots into documentation catalog`. 



<br/><br/>
### 4. Post-Work

&nbsp; It's time to create `Pull Request`. Find your way into branches list and push `New Pull Request` from your branch.
![](/documentation/Workflow/intoBranchesList.png)

&nbsp; 1. Change target repository. \
&nbsp; 2. Change target branch into `shm-master`.  \
&nbsp; 3. Press `Create pull request`.
![](/documentation/Workflow/createPullReq.png)

&nbsp; 4. From the right panel link `issue` and assign `project`. \
&nbsp; 5. Optionally fill up the remaining { Reviewers, Assignees, Labels } \
&nbsp; 6. Go to the `Projects` tab and move your task into the `InReview` column.



<br/><br/>
### Creating new tasks 

&nbsp; Don't create tasks from `Projects` tab. Go to the `Issues` tab instead. \
&nbsp; Write English only. \
&nbsp; Add `description`, it's a good thing to copy-paste link \
&nbsp; to the task from coders school or to the thread from code review. \
&nbsp; Create new issue, assign `project` and `labels`. \
&nbsp; Task unique index will be generated automatically so you don't need to think about it.



<br/><br/>
