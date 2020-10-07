# Web Scraping the Reviews of a product Available on Flipkart and storing it in DataBase

Technology: Web Scraping, Full Stack Web Development
Programming Languages: Python
Library: BeautifulSoup, Requests, Json, Flask,PyMongo

Using BeautifulSoup (bs4) Library, We can extract the reviews of a product on flipkart. 
This works as following:
1. Request the URL of the Home Page of the Flipkart.
2. Manually find out the html tag and the attributes of the Search Bar on the Flipkart page. 
3. Input the desired product from the user and pass it to the code through Python. 
4. Then, request that product page through Beautiful Soup.
5. Find the product reviews tage and its class name and you can then extract name, review, Reviewer Name, Rating through html.
6. Pass all the data to the MongoDB Database.
7. Create a flask app for the backend and also design front end web page using front end technologies like HTML, CSS, Bootstrap.
8. Deploy the Website using Heroku, AWS, GCP, Pivotal Cloud, Azure, etc.

For reference, visit: (https://github.com/manan-bedi2908/Review-Scraper-MongoDB)
