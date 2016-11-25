#pragma once
#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include "glm\glm\glm.hpp"
#include "glm\glm\gtx\transform.hpp"
#include <algorithm>
#include <string>
#include <fstream>

using namespace glm;
using namespace std;

//location
struct Loc 
{
	float x;
	float y;
	float z;
};

//UVs
struct Uv 
{
	float u;
	float v;
};

//Normals
struct Norm 
{
	float x;
	float y;
	float z;
};

//Vertex
struct Vertex 
{
	int loc;
	int uv;
	int	norm;
};

//Face
struct Face {
	int loc[3];
	int uv[3];
	int norm[3];
};

//Data
struct modelData 
{
	vector<vec3> locs;
	vector<vec2> uvs;
	vector<vec3> norms;
	vector<Face> faces;
};

class Shape
{
	private:
		modelData md;
	public:
		Shape();
		~Shape();
		void addLoc(Loc loc);
		void addUv(Uv uv);
		void addNorm(Norm norm);
		void addFace(Face face);
		bool writeObj(string filename);
};
