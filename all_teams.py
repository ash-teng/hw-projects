import mysql.connector

try:
    mydb = mysql.connector.connect(
        host='localhost',
        user='prescott',
        password='embryriddle',
        database='tengj1_db',
        unix_socket='/var/lib/mysql/mysql.sock'
    )

    cursor = mydb.cursor(dictionary=True)
    cursor.callproc('all_teams')

    print("Here are all the teams I could find!")
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")
    for result_cursor in cursor.stored_results():
        for row in result_cursor:
            print(row[0])
    print("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~")

except mysql.connector.Error as error:
    print(error)

finally:
    if mydb.is_connected():
        cursor.close()
        mydb.close()
