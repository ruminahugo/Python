import sqlite3

def on_keyboard_event():
    try:
        conn = sqlite3.connect("data/database.db")
        cursor = conn.cursor()        
        cursor.execute("SELECT * FROM history;")
        results = cursor.fetchall()
        if results is not None:    
            for txt in results:
                print(txt[1], ' ')
        conn.close()
    except KeyboardInterrupt:
        pass
    return True

if __name__ == "__main__":
    on_keyboard_event()
