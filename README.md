# 🚗 Parking Management System

A Qt-based desktop application developed for the **FTMK Hackathon** that provides comprehensive parking management and congestion analysis capabilities.

## 📋 Overview

This parking management system is designed to help users monitor parking availability, analyze traffic congestion patterns, and manage parking slots efficiently. The application features a user-friendly GUI built with Qt and uses SQLite for data persistence.

## ✨ Features

### 🔐 User Management
- **User Registration**: New users can create accounts
- **User Authentication**: Secure login system with username/password
- **User Dashboard**: Personalized interface for logged-in users

### 🅿️ Parking Management
- **Parking Location Viewer**: Display available parking locations
- **Real-time Parking Data**: View current parking slot availability
- **Database Integration**: Persistent storage of parking information

### 📊 Congestion Analysis
- **Peak Hours Analysis**: Identify high-traffic periods
- **Congestion Measurement**: Calculate average congestion percentages by hour
- **Historical Data**: Track parking usage patterns over time

### 👨‍💼 Admin Features
- **Administrative Interface**: Admin-specific functionality
- **System Management**: Oversee parking system operations

## 🛠️ Technical Stack

- **Framework**: Qt 6.x with C++17
- **Database**: SQLite
- **UI**: Qt Designer (.ui files)
- **Build System**: qmake (.pro file)

## 📁 Project Structure

```
hackthon/
├── main.cpp              # Application entry point
├── mainwindow.cpp/.h     # Main login window
├── user.cpp/.h           # User dashboard
├── register.cpp/.h       # User registration
├── admin.cpp/.h          # Admin interface
├── congestion.cpp/.h     # Congestion analysis engine
├── dbmanager.cpp/.h      # Database connection manager
├── *.ui                  # Qt Designer UI files
├── hackthon.pro          # Qt project configuration
└── build/                # Build output directory
```

## 🚀 Getting Started

### Prerequisites

- Qt 6.x or later
- C++17 compatible compiler
- SQLite (included with Qt)

### Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/WyOoi/UTeM-FTMK-Hackathon.git
   cd hackthon
   ```

2. **Open in Qt Creator**:
   - Open `hackthon.pro` in Qt Creator
   - Configure your kit (compiler, Qt version)

3. **Build the project**:
   ```bash
   qmake hackthon.pro
   make
   ```

4. **Run the application**:
   ```bash
   ./hackthon
   ```

### Alternative Build Methods

**Using Qt Creator GUI**:
1. Open Qt Creator
2. File → Open File or Project
3. Select `hackthon.pro`
4. Configure project settings
5. Build → Build All
6. Run → Run

**Command Line Build**:
```bash
# Generate Makefile
qmake CONFIG+=release

# Build
make

# Run (Windows)
./release/hackthon.exe

# Run (Linux/Mac)
./hackthon
```

## 📊 Database Schema

The application uses SQLite with the following main tables:

### Users Table
```sql
CREATE TABLE users (
    id INTEGER PRIMARY KEY AUTOINCREMENT,
    username TEXT UNIQUE,
    password TEXT
);
```

### Parking Table
```sql
CREATE TABLE parking (
    -- Parking location data structure
    -- (Implementation details in application)
);
```

### Park Data Table
```sql
CREATE TABLE park_data (
    hours INTEGER,
    used_slots INTEGER
    -- Additional fields for congestion analysis
);
```

## 🎯 Usage

### For End Users

1. **Launch Application**: Start the parking management system
2. **Register/Login**: Create an account or log in with existing credentials
3. **View Parking**: Check available parking locations and slots
4. **Analyze Patterns**: Review congestion data and peak hours

### For Administrators

1. **Admin Access**: Use admin credentials to access administrative features
2. **System Management**: Monitor overall system performance
3. **Data Analysis**: Review comprehensive parking usage statistics

## 🔧 Configuration

### Database Configuration
- Default database: `users.db` (created automatically)
- Maximum parking slots: 30 (configurable in CongestionManager)
- Connection timeout: Handled automatically

### UI Customization
- Window size: 800x600 pixels (adjustable in .ui files)
- Themes: Default Qt styling (customizable via stylesheets)


## 📝 Development Notes

### Key Classes

- **MainWindow**: Login interface and application entry
- **User**: User dashboard and parking data viewer  
- **CongestionManager**: Core congestion analysis logic
- **DBManager**: Database connection and initialization
- **Register**: User registration functionality
- **Admin**: Administrative interface

## 🐛 Troubleshooting

### Common Issues

**Database Connection Failed**:
- Ensure SQLite is properly installed
- Check file permissions in application directory
- Verify database file isn't corrupted

**Build Errors**:
- Confirm Qt version compatibility (Qt 6.x recommended)
- Check C++17 compiler support
- Ensure all dependencies are installed

**UI Display Issues**:
- Verify Qt GUI modules are installed
- Check system display scaling settings
- Ensure proper Qt platform plugins

## 📄 License

This project was developed for educational purposes as part of the FTMK Hackathon competition.

## 👥 Team

This project was developed by the following team members during the **UTeM FTMK Hackathon**:

### Core Contributors
- **@Ran-25** - Project Lead & Main Developer
- **@HykalZlkifly** - Backend Developer
- **@WyOoi** - Frontend Developer

### Alternative Format (with links and roles):
| Team Member | GitHub | Role |
|-------------|---------|------|
| Project Lead | [@Ran-25](https://github.com/Ran-25) | Project Lead |
| Member 2 | [@HykalZlkifly](https://github.com/HykalZlkifly) | Backend Developer |
| Me       | [@WyOoi](https://github.com/WyOoi) | Frontend Developer |

---

**Note**: This application was developed as part of a hackathon event and serves as a proof-of-concept for parking management systems.