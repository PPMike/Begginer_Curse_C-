#include <iostream>

using namespace std;

class Movie{
    private:
        string rating;
    public:
        string title;
        string director;
        Movie(string aTitle, string aDirector, string aRating){
            title = aTitle;
            director = aDirector;
            setRating(aRating);
        }

        // Al poner la variable rating como privada ya no puede ser modificada
        // Pero puedes mandar llamar una funcion como esta
        void setRating(string aRating){
            if(aRating == "G" || aRating == "PG" || aRating == "PG-13" || aRating == "R" || aRating == "NR"){
                rating = aRating;
            } else{
                rating = "NR";
            }
        }

        string getRating(){
            return rating;
        }
};

int main()
{
    Movie avengers("The Avengers", "Joss Whedon", "PG-13");
    // Al llamar la funcion ya puedes modificar una variable privada
    avengers.setRating("Dog");
    
    cout << avengers.getRating();
    return 0;
}