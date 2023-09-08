# rvv-core

# Repository Setup and Branch Management Guide

This guide provides step-by-step instructions for creating and managing branches in the **rvv-core** GitHub repository. It also includes information on how to clone the repository for initial setup.

## Table of Contents

- [rvv-core](#rvv-core)
- [Repository Setup and Branch Management Guide](#repository-setup-and-branch-management-guide)
  - [Table of Contents](#table-of-contents)
  - [Cloning the Repository](#cloning-the-repository)
  - [Creating a New Branch](#creating-a-new-branch)
  - [Switching to a Different Branch](#switching-to-a-different-branch)
  - [Branch Management Table](#branch-management-table)

---

## Cloning the Repository

To get started, follow these steps to clone the **rvv-core** repository to your local machine:

1. Open your terminal or command prompt.

2. Navigate to the directory where you want to clone the repository using the `cd` command.

3. Run the following command to clone the repository:
   
   ```bash
   git clone https://github.com/merledu/rvv-core.git
   ```

4. The repository will be cloned to your current directory. You can now navigate into the repository using `cd rvv-core`.

---

## Creating a New Branch

When working on new features or fixing issues, creating a separate branch is a good practice. Follow these steps to create a new branch:

1. Make sure you are in the main branch using the command:
   
   ```bash
   git checkout main
   ```

2. Create a new branch using the following command, replacing `branch_name` with your desired branch name (e.g., `SS`):
   
   ```bash
   git checkout -b branch_name
   ```

3. You are now switched to the new branch and can start making changes.

---

## Switching to a Different Branch

If you need to switch to a different branch, use the following command:

```bash
git switch branch_name
```

Replace `branch_name` with the branch name you want to switch to.

---

## Branch Management Table

Use the table below to keep track of team members and their corresponding branch names:

| Team Member | Branch Name |
|-------------|-------------|
| Hamna, Maira  | HMS       |
| Abdul Samad, Saad    | SS   |
| Hafsa, Hassan  | HH        |


Feel free to update this table as your team members create and work on different branches.

---

With this guide, you should be able to clone the repository easily, create new branches, switch between branches, and keep track of your team's branch management. Happy coding! 🚀
