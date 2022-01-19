

#if !defined(MY_PRINT_EXPORT)
	#define MY_PRINT_EXPORT /* NOTHING */

	#if defined(WIN32) || defined(WIN64)
		#undef MY_PRINT_EXPORT
		#if defined(My_print_EXPORTS)
			#define MY_PRINT_EXPORT __declspec(dllexport)
		#else
			#define MY_PRINT_EXPORT __declspec(dllimport)
		#endif // defined(DLib_EXPORTS)
	#endif // defined(WIN32) || defined(WIN64)

	#if defined(__GNUC__) || defined(__APPLE__) || defined(LINUX)
		#if defined(My_print_EXPORTS)
			#undef MY_PRINT_EXPORT
			#define MY_PRINT_EXPORT __attribute__((visibility("default")))
		#endif // defined(DLib_EXPORTS)
	#endif // defined(__GNUC__) || defined(__APPLE__) || defined(LINUX)

#endif // !defined(DLIB_EXPORT)


