// File: point.h

#ifndef POINT_H
#define POINT_H

/** @class Point
	* Kelas Point berisi absis dan ordinat
	*/
class Point {
	public:
		/** @brief Constructor
			* Mendefinisikan sebuah point pada titik origin (0,0).
			*/
		Point();

		/** @brief Constructor
			* Mendefinisikan sebuah point dengan absis _x dan ordinat _y.
			* @param _x Nilai absis.
			* @param _y Nilai ordinat.
			*/
		Point(int _x, int _y);
		
		/** @brief Menetapkan nilai absis
			* Mengganti nilai absis menjadi _x.
			* @param _x Nilai absis.
			*/
		void setX(int _x);

		/** @brief Menetapkan nilai ordinat
			* Mengganti nilai ordinat menjadi _y.
			* @param _y Nilai ordinat.
			*/
		void setY(int _y);

		/** @brief Getter nilai absis
			* @return Nilai absis.
			*/
		int getX() const;

		/** @brief Getter nilai ordinat
			* @return Nilai ordinat.
			*/
		int getY() const;
		
		/** @brief Operator<
			* Membandingkan Point dengan suatu Point lain P.
			* Perbandingan awal berdasarkan absis baru kemudian ordinat.
			* @param P Object Point yang sudah diciptakan.
			*/
		bool operator<(const Point& p) const;

	private:
		unsigned int x;
		unsigned int y;
};

#endif