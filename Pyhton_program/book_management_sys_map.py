book = {}

def insertBook(id1,bookName,authorName,price):
    book[id1] = [bookName,authorName,price]
    
    
def listAll():
    print("ID \t BookName \t AuthorName \t Price")
    for i,j in book.items():
        print(i, "\t", end="")
        for k in j:
            print(k, "\t", end="")
        print("")
        
def removeBook(id):
    if id in book:
        del book[id]
        print("Successfully deleted the book of id: ",id)            
    else:
        print("No Book with this id")
        
def searchBook(id):
    if id in book:
        print("ID \t Book Name \t AuthorName \t Cost")
        print(id, "\t", book[id][0], "\t", book[id][1], "\t", book[id][2])
    else:
        print("There is no such Book with this ID!!!")

                
        




print("****Book Management System****")
i = 0
while i!= 5:
    print("1.Insert Book")
    print("2.Remove Book")
    print("3.Search Book")
    print("4.Lists All Books")
    print("5.Exit")
    
    i = int(input("Enter Your Choice: "))
    if i==1:
        id1 = int(input("Enter ID: "))
        if id1 not in book:
            bookName = input("Enter Book Name: ")
            authorName = input("Enter Author Name: ")
            price = float(input("Enter Price: "))
            insertBook(id1,bookName,authorName,price)
        else:
            print("Book Already exist with the given ID: ",id1)
                
    elif i==2:
        id2 =int(input("Enter ID to delete a book:"))
        removeBook(id2)
        
    elif i==3:
        id3 = int(input("Enter ID to Search BOOK: "))
        searchBook(id)
        
    elif i==4:
        listAll()
      
    elif i==5:
        pass
    
    else:
        print("Wrong Choice")             