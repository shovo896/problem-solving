class Book:
    def __init__(self, bookId: int, title: str, author: str):
        self.bookId = bookId
        self.title = title
        self.author = author
        self.isAvailable = True
    
    def __repr__(self):
        return f"Book({self.bookId}, {self.title}, {self.author}, Available={self.isAvailable})"


class User:
    def __init__(self, userId: int, name: str):
        self.userId = userId
        self.name = name
        self.borrowedBooks = []

    def borrow(self, book: Book) -> bool:
        if len(self.borrowedBooks) >= 3:
            return False
        if not book.isAvailable:
            return False
        book.isAvailable = False
        self.borrowedBooks.append(book)
        return True
    
    def returnBook(self, book: Book) -> bool:
        if book not in self.borrowedBooks:
            return False
        self.borrowedBooks.remove(book)
        book.isAvailable = True
        return True
    
    def getBorrowedBooks(self):
        return [book.title for book in self.borrowedBooks] #


class Library:
    def __init__(self):
        self.books = {}
        self.users = {}

    def addBook(self, bookId: int, title: str, author: str):
        if bookId not in self.books:
            self.books[bookId] = Book(bookId, title, author)

    def registerUser(self, userId: int, name: str):
        if userId not in self.users:
            self.users[userId] = User(userId, name)

    def borrowBook(self, userId: int, bookId: int) -> bool:
        if userId not in self.users or bookId not in self.books:
            return False
        return self.users[userId].borrow(self.books[bookId])

    def returnBook(self, userId: int, bookId: int) -> bool:
        if userId not in self.users or bookId not in self.books:
            return False
        return self.users[userId].returnBook(self.books[bookId])

    def getBorrowedBooks(self, userId: int):
        if userId not in self.users:
            return []
        return self.users[userId].getBorrowedBooks()

    def searchBook(self, keyword: str):
        result = []
        for book in self.books.values():
            if keyword.lower() in book.title.lower():
                result.append(book.title)
        return result
