# Bank-System-CPP

A Console-based **Bank Management System** built in **C++** using Object-Oriented Programming (**OOP**) principles.

## Features
- **Authentication & Security:**
  - User login screen with a 3-attempt lockout limit.
  - Bitmask-based user permissions (`clsUser::enPermissions`).
  - Automatic login audit trail (`LoginRegister.txt`) with date/time stamps.
- **Client Management:**
  - List all clients, add new clients, update client details, delete clients, and find clients by account number.
- **Transactions:**
  - Deposit, withdraw (with balance validation), and view total bank balances (both numeric and text representation).
- **User Management:**
  - Full CRUD operations for bank system users and granular access control.
- **Utility Libraries:**
  - Custom OOP libraries for String manipulation (`clsString`), Date/Time calculations (`clsDate`, `clsPeriod`), Input validation (`clsInputValidate`), and general utilities (`clsUtil`).

## Default Login Credentials
- **Username:** `Admin`
- **Password:** `Admin`

