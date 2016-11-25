#include "stdafx.h"
#include "Shape.h"

//constructor
Shape::Shape()
{
}

//destructor
Shape::~Shape()
{

}

void Shape::addLoc(Loc loc)
{
	//add location to model data
	md.locs.push_back(vec3(loc.x, loc.y, loc.z));
}

void Shape::addUv(Uv uv)
{
	//add uvs to model data
	md.uvs.push_back(vec2(uv.u, uv.v));
}

void Shape::addNorm(Norm norm)
{
	//add normal to model data
	md.norms.push_back(vec3(norm.x, norm.y, norm.z));
}

void Shape::addFace(Face face)
{
	//add face to model data
	md.faces.push_back(face);
}

bool Shape::writeObj(string filename)
{
	//check for user input and make obj
	if (md.locs.empty() || md.uvs.empty() || md.norms.empty() || md.faces.empty())
	{
		return false;
	}
	//make file
	ofstream file;

	file.open(filename);

	//vertex info
	if (file.is_open())
	{
		for (int i = 0; i < md.locs.size(); i++)
		{
			file << "v " << md.locs[i].x << " " << md.locs[i].y << " " << md.locs[i].z << "\n";
		}

		//uv info
		for (int i = 0; i < md.uvs.size(); i++)
		{
			file << "vt " << md.uvs[i].x << " " << md.uvs[i].y << "\n";
		}

		//norm info
		for (int i = 0; i < md.norms.size(); i++)
		{
			file << "vn " << md.norms[i].x << " " << md.norms[i].y << " " << md.norms[i].z << "\n";
		}

		//face info
		for (int i = 0; i < md.faces.size(); i++)
		{
			file << "f " << md.faces[i].loc[0]
				<< "/" << md.faces[i].uv[0]
				<< "/" << md.faces[i].norm[0]
				<< " " << md.faces[i].loc[1]
				<< "/" << md.faces[i].uv[1]
				<< "/" << md.faces[i].norm[1]
				<< " " << md.faces[i].loc[2]
				<< "/" << md.faces[i].uv[2]
				<< "/" << md.faces[i].norm[2] << "\n";
		}

		//close the file
		file.close();
		return true;
	}

	return false;
}
