#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

class Makaron {

    public:

        virtual ~Makaron() = default;

        virtual double ileMaki(unsigned) const {};

        static Makaron* gotujMakaron(const std::string& text){};
};

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle : public Makaron{

	private:
        double L; //macaroni length
	    double W; //macaroni width
        double R; //maracroni egg/flour ratio
        static const double C;

    public:

        Tagliatelle() : L{0.5}, W{.5}, R{.5} {};
        Tagliatelle(double l, double w, double r) : L{l}, W{w}, R{r} {};

        double ileMaki(unsigned P) const {
        
            return static_cast <double> (P * L * W * (1. - R) * C);

        };


};

