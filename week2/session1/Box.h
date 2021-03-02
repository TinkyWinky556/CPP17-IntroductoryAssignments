class Box{
    // function members (methods)
	public:
		int getLength();
        int getWidth();
		int getHeight();
		void setLength(int l);
		void setWidth(int w);
		void setHeight(int h);
		int calculateArea();
		int calculateVolume();
		Box(); // default constructor
		Box(int l, int w, int h); // constructor
		//~Box(); // destructor

    // data members
	protected:
		int length;
		int width;
		int height;

};

