/*
* @file main.cpp
* @brief contains the main code where you can trick values to create a specific fractal
*/

#include <fractals.hpp>
#include <chrono>

int main(int argc, char** argv)
{
	try
	{
		Fractals mandelbrot;
		mandelbrot.init(3480, 2160, std::complex<long double>(0, 0), 4);
		mandelbrot.compute_mandelbrot_async(200, std::complex<long double>(0,0), 25);
		//mandelbrot.compute_mandelbrot(100);

		mandelbrot.export_png("mandelbrot.png");

		/*
		Fractals mandelbrot(3480 * 5, 2160 * 5, std::complex<long double>(0.001643721971153, 0.822467633298876), 0.0000000011);
		
		mandelbrot.compute_mandelbrot_async(4000, std::complex<long double>(0,0), 25);
		//mandelbrot.compute_mandelbrot(100);

		mandelbrot.export_png("mandelbrot.png");
		*/
		return 0;
	}
	catch (const std::exception& exception)
	{
		std::cerr << "Exception raised: " << exception.what() << "\n";
		return 1;
	}
}