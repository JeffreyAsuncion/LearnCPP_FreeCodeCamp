#include <iostream>

using namespace std;

class Movie{
    // note only code within the class can access private attributes and methods
    private:
        string rating;
    public:
        string title;
        string director;
        
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            // private need setter
            setRating(aRating);
        }

        // Setter
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else {
                rating = "NR";
            }
            
        }

        // Getter
        string getRating(){
            return rating;
        }
};


int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");

    // this will crash due to private
    // cout << avengers.rating << "\n" << endl;

    avengers.setRating("Dog");
    cout << avengers.getRating() << "\n" << endl;


    return 0;
}