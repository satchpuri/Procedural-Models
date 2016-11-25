#pragma once
#include "Shape.h"

bool triangle(string filename) 
{
	Shape shp = Shape();

	Loc loc1;
	loc1.x = 0;
	loc1.y = 0;
	loc1.z = 0;

	shp.addLoc(loc1);


	Loc loc2;
	loc2.x = .5;
	loc2.y = .5;
	loc2.z = 0;

	shp.addLoc(loc2);

	Loc loc3;
	loc3.x = 1;
	loc3.y = 0;
	loc3.z = 0;

	shp.addLoc(loc3);

	Uv uv1;
	uv1.u = 0;
	uv1.v = 0;

	shp.addUv(uv1);

	Uv uv2;
	uv2.u = .5;
	uv2.v = .5;

	shp.addUv(uv2);

	Uv uv3;
	uv3.u = 1;
	uv3.v = 0;

	shp.addUv(uv3);

	Norm norm;
	norm.x = .1;
	norm.y = .1;
	norm.z = .1;

	shp.addNorm(norm);

	Face face;

	for (int i = 0; i < 3; i++)
	{
		face.loc[i] = i + 1;
		face.uv[i] = i + 1;
		face.norm[i] = 1;
	}
	shp.addFace(face);

	if (shp.writeObj(filename)) 
	{
		return true;
	}
	return false;
}

bool quad(string filename)
{
	Shape shap = Shape();

	Loc locs[4];
	Uv uvs[4];
	Norm norm;

	locs[0].x = 0;
	locs[0].y = 0;
	locs[0].z = 0;
	uvs[0].u = 0;
	uvs[0].v = 0;

	locs[1].x = 1;
	locs[1].y = 0;
	locs[1].z = 0;
	uvs[1].u = 1;
	uvs[1].v = 0;

	locs[2].x = 1;
	locs[2].y = 1;
	locs[2].z = 0;
	uvs[2].u = 1;
	uvs[2].v = 1;

	locs[3].x = 0;
	locs[3].y = 1;
	locs[3].z = 0;
	uvs[3].u = 0;
	uvs[3].v = 1;

	norm.x = 0.0;
	norm.y = 0.0;
	norm.z = 1;
	
	for (int i = 0; i < 4; i++)
	{
		shap.addLoc(locs[i]);
		shap.addUv(uvs[i]);	
	}
	shap.addNorm(norm);

	Face face;
	
	face.loc[0] = 1;
	face.loc[1] = 2;
	face.loc[2] = 3;

	face.uv[0] = 1;
	face.uv[1] = 2;
	face.uv[2] = 3;
	
	face.norm[0] = 1;
	face.norm[1] = 1;
	face.norm[2] = 1;

	shap.addFace(face);

	Face face1;
	face1.loc[0] = 3;
	face1.loc[1] = 4;
	face1.loc[2] = 1;

	face1.uv[0] = 3;
	face1.uv[1] = 4;
	face1.uv[2] = 1;

	face1.norm[0] = 1;
	face1.norm[1] = 1;
	face1.norm[2] = 1;
	shap.addFace(face1);

	if (shap.writeObj(filename))
	{
		return true;
	}
	return false;
}

bool cube(string filename)
{
	Shape shap = Shape();
	
	Loc locs[8];
	Uv uvs[14];
	Norm norm[6];

	locs[0].x = 0;
	locs[0].y = 0;
	locs[0].z = 1;
	
	locs[1].x = 1;
	locs[1].y = 0;
	locs[1].z = 1;
	
	locs[2].x = 0;
	locs[2].y = 1;
	locs[2].z = 1;
	
	locs[3].x = 1;
	locs[3].y = 1;
	locs[3].z = 1;
	
	locs[4].x = 0;
	locs[4].y = 1;
	locs[4].z = 0;

	locs[5].x = 1;
	locs[5].y = 1;
	locs[5].z = 0;

	locs[6].x = 0;
	locs[6].y = 0;
	locs[6].z = 0;

	locs[7].x = 1;
	locs[7].y = 0;
	locs[7].z = 0;

	for (int i = 0; i < 8; i++)
	{
		shap.addLoc(locs[i]);
	}

	//uvs
	uvs[0].v = 0.333f;
	uvs[0].u = 0;

	uvs[1].v = .666f;
	uvs[1].u = 0;

	uvs[2].v = .333f;
	uvs[2].u = .25f;

	uvs[3].v = .666f;
	uvs[3].u = .25f;
	
	uvs[4].v = .333f;
	uvs[4].u = .5f;

	uvs[5].v = .666f;
	uvs[5].u = .5f;

	uvs[6].v = 0.333f;
	uvs[6].u = .75f;

	uvs[7].v = 0.666f;
	uvs[7].u = 0.75;

	uvs[8].v = .333f;
	uvs[8].u = 1;

	uvs[9].v = .666f;
	uvs[9].u = 1;

	uvs[10].v = 1;
	uvs[10].u = 0;

	uvs[11].v = 1;
	uvs[11].u = .25;

	uvs[12].v = 0;
	uvs[12].u = 0;

	uvs[13].v = 0;
	uvs[13].u = .25;

	for (int i = 0; i < 14; i++)
	{
		shap.addUv(uvs[i]);
	}

	//normals
	norm[0].x = 0;
	norm[0].y = 0;
	norm[0].z = 1;

	norm[1].x = 0;
	norm[1].y = 1;
	norm[1].z = 0;

	norm[2].x = 0;
	norm[2].y = 0;
	norm[2].z = -1;

	norm[3].x = 1;
	norm[3].y = 0;
	norm[3].z = 0;

	norm[4].x = -1;
	norm[4].y = 0;
	norm[4].z = 0;

	norm[5].x = 0;
	norm[5].y = -1;
	norm[5].z = 0;

	for (int i = 0; i < 6; i++)
	{
		shap.addNorm(norm[i]);
	}

	//back face
	Face face;
	Face face1;
	face.loc[0] = 1;
	face.loc[1] = 2;
	face.loc[2] = 3;

	face.uv[0] = 1;
	face.uv[1] = 2;
	face.uv[2] = 3;

	face.norm[0] = 1;
	face.norm[1] = 1;
	face.norm[2] = 1;

	face1.loc[0] = 2;
	face1.loc[1] = 4;
	face1.loc[2] = 3;

	face1.uv[0] = 2;
	face1.uv[1] = 4;
	face1.uv[2] = 3;

	face1.norm[0] = 1;
	face1.norm[1] = 1;
	face1.norm[2] = 1;

	shap.addFace(face);
	shap.addFace(face1);

	//top face
	Face face2;
	Face face3;
	face2.loc[0] = 3;
	face2.loc[1] = 4;
	face2.loc[2] = 5;

	face2.uv[0] = 3;
	face2.uv[1] = 4;
	face2.uv[2] = 5;

	face2.norm[0] = 1;
	face2.norm[1] = 1;
	face2.norm[2] = 1;

	face3.loc[0] = 4;
	face3.loc[1] = 6;
	face3.loc[2] = 5;

	face3.uv[0] = 4;
	face3.uv[1] = 6;
	face3.uv[2] = 5;

	face3.norm[0] = 1;
	face3.norm[1] = 1;
	face3.norm[2] = 1;

	shap.addFace(face2);
	shap.addFace(face3);

	//front face
	Face face4;
	Face face5;
	face4.loc[0] = 5;
	face4.loc[1] = 6;
	face4.loc[2] = 7;

	face4.uv[0] = 5;
	face4.uv[1] = 6;
	face4.uv[2] = 7;

	face4.norm[0] = 1;
	face4.norm[1] = 1;
	face4.norm[2] = 1;

	face5.loc[0] = 6;
	face5.loc[1] = 8;
	face5.loc[2] = 7;

	face5.uv[0] = 6;
	face5.uv[1] = 8;
	face5.uv[2] = 7;

	face5.norm[0] = 1;
	face5.norm[1] = 1;
	face5.norm[2] = 1;

	shap.addFace(face4);
	shap.addFace(face5);

	//right
	Face face6;
	Face face7;
	face6.loc[0] = 6;
	face6.loc[1] = 4;
	face6.loc[2] = 8;

	face6.uv[0] = 6;
	face6.uv[1] = 4;
	face6.uv[2] = 8;

	face6.norm[0] = 1;
	face6.norm[1] = 1;
	face6.norm[2] = 1;

	face7.loc[0] = 4;
	face7.loc[1] = 2;
	face7.loc[2] = 8;

	face7.uv[0] = 4;
	face7.uv[1] = 2;
	face7.uv[2] = 8;

	face7.norm[0] = 1;
	face7.norm[1] = 1;
	face7.norm[2] = 1;

	shap.addFace(face6);
	shap.addFace(face7);

	//left
	Face face8;
	Face face9;
	face8.loc[0] = 7;
	face8.loc[1] = 3;
	face8.loc[2] = 5;

	face8.uv[0] = 7;
	face8.uv[1] = 3;
	face8.uv[2] = 5;

	face8.norm[0] = 1;
	face8.norm[1] = 1;
	face8.norm[2] = 1;

	face9.loc[0] = 7;
	face9.loc[1] = 1;
	face9.loc[2] = 3;

	face9.uv[0] = 7;
	face9.uv[1] = 1;
	face9.uv[2] = 3;

	face9.norm[0] = 1;
	face9.norm[1] = 1;
	face9.norm[2] = 1;

	shap.addFace(face8);
	shap.addFace(face9);

	//bottom
	Face face10;
	Face face11;
	face10.loc[0] = 8;
	face10.loc[1] = 1;
	face10.loc[2] = 7;

	face10.uv[0] = 8;
	face10.uv[1] = 1;
	face10.uv[2] = 7;

	face10.norm[0] = 1;
	face10.norm[1] = 1;
	face10.norm[2] = 1;

	face11.loc[0] = 8;
	face11.loc[1] = 2;
	face11.loc[2] = 1;

	face11.uv[0] = 8;
	face11.uv[1] = 2;
	face11.uv[2] = 1;

	face11.norm[0] = 1;
	face11.norm[1] = 1;
	face11.norm[2] = 1;

	shap.addFace(face10);
	shap.addFace(face11);
	
	if (shap.writeObj(filename))
	{
		return true;
	}
	return false;
}

bool disk(string filename, int numVert)
{
	Shape shap = Shape();
	
	//center
	//* loc = new Loc[numVert];
	//Loc loc = { (0, 0, 0) };
	Loc loc;
	loc.x = 0;
	loc.y = 0;
	loc.z = 0;

	Uv uv;
	uv.u = 0.5;
	uv.v = 0.5;

	Norm norm;
	norm.x = 0;
	norm.y = 0;
	norm.z = 1;

	shap.addLoc(loc);
	shap.addUv(uv);
	shap.addNorm(norm);

	//x and y values of the edges
	//from 0 to 2pir
	double PI = 3.14159265358979323846;
	for (float i = 0; i <= ((2 * PI) - ((2 * PI)/ numVert)); i += ((2*PI)/numVert))
	{
		Loc loc1;
		loc1.x = (float)round(cos(i) * 1000) / 1000.0;
		loc1.y =(float)round(sin(i) * 1000) / 1000.0;
		loc1.z = 0;

		Uv uv1;
		uv1.u = (loc1.x + 1) / 2;
		uv1.v = (loc1.y + 1) / 2;

		shap.addLoc(loc1);
		shap.addUv(uv1);
	}

	//make the faces 
	for (int i = 2; i < numVert+1; i++)
	{
		Face face;
		face.loc[0] = i;
		face.loc[1] = i + 1;
		face.loc[2] = 1;

		face.uv[0] = i;
		face.uv[1] = i + 1;
		face.uv[2] = 1;

		face.norm[0] = 1;
		face.norm[1] = 1;
		face.norm[2] = 1;
		shap.addFace(face);
	}
	 
	//make last face
	Face face1;
	face1.loc[0] = numVert + 1;
	face1.loc[1] = 2;
	face1.loc[2] = 1;

	face1.uv[0] = numVert + 1;
	face1.uv[1] = 2;
	face1.uv[2] = 1;

	face1.norm[0] = 1;
	face1.norm[1] = 1;
	face1.norm[2] = 1;

	shap.addFace(face1);
	
	if (shap.writeObj(filename))
	{
		return true;
	}
	return false;
}

bool cylinder(string filename, int numVert)
{
	Shape shap = Shape();
	
	double PI = 3.14159265358979323846;
	//front
	Loc front_loc;
	front_loc.x = 0;
	front_loc.y = 0;
	front_loc.z = 1;

	Uv front_uv;
	front_uv.u = 0.439;
	front_uv.v = 0.187;

	Norm norm;
	norm.x = 0;
	norm.y = 0;
	norm.z = 1;

	shap.addLoc(front_loc);
	shap.addUv(front_uv);
	shap.addNorm(norm);

	Loc loc_back;
	loc_back.x = 0;
	loc_back.y = 0;
	loc_back.z = -1;

	Uv uv_back;
	uv_back.u = .813;
	uv_back.v = .187;

	Norm norm1;
	norm1.x = 0;
	norm1.y = 0;
	norm1.z = -1;
	
	shap.addLoc(loc_back);
	shap.addUv(uv_back);
	shap.addNorm(norm1);

	//top
	for (float i = 0; i <= ((2 * PI) - ((2 * PI) / numVert)); i += ((2 * PI) / numVert))
	{
		//top loc
		Loc loc1;
		loc1.x = (float)round(cos(i) * 1000) / 1000.0;
		loc1.y = (float)round(sin(i) * 1000) / 1000.0;
		loc1.z = 1;
		//top uv
		Uv uv1;
		uv1.u = (loc1.x * .374 / 2) + .439;
		uv1.v = (loc1.y *.374/2) + .187;

		shap.addLoc(loc1);
		shap.addUv(uv1);
	}
	//bottom
	for (float i = 0; i <= ((2 * PI) - ((2 * PI) / numVert)); i += ((2 * PI) / numVert))
	{
		//bot loc
		Loc locbot;
		locbot.x = (float)round(cos(i) * 1000) / 1000.0;
		locbot.y = (float)round(sin(i) * 1000) / 1000.0;
		locbot.z = -1;
		//bot uv
		Uv uvbot;
		uvbot.u = (locbot.x * .374 / 2) + .813;
		uvbot.v = (locbot.y *.374 / 2) + .187;

		shap.addLoc(locbot);
		shap.addUv(uvbot);
	}
	
	//side uv
	//top
	for (int i = 0; i < numVert + 1; i++)
	{
		Uv uv_side;
		uv_side.u = i / (float)numVert;
		uv_side.v = 1;

		shap.addUv(uv_side);
	}

	//side uv
	//bottom
	for (float i = 0.0; i < numVert + 1; i++)
	{
		Uv uv_side1;
		uv_side1.u = i / numVert;
		uv_side1.v = .374;

		shap.addUv(uv_side1);
	}

	//normals
	for (float i = (2* PI)/numVert; i <= 2 * PI; i += (2 * PI) / numVert)
	{
		Norm normals;
		normals.x = (float)(round(cos(i) * 1000) / 1000.0);
		normals.y = (float)(round(sin(i) * 1000) / 1000.0);
		normals.z = 0;

		shap.addNorm(normals);
	}

	//face stuff
	for (int i = 3; i < numVert + 2; i++)
	{
		//top
		Face top_face;
		top_face.loc[0] = 1;
		top_face.loc[1] = i;
		top_face.loc[2] = i+1;

		top_face.uv[0] = 1;
		top_face.uv[1] = i;
		top_face.uv[2] = i+1;

		top_face.norm[0] = 1;
		top_face.norm[1] = 1;
		top_face.norm[2] = 1;

		//sides
		Face side_face;
		side_face.loc[0] = i + 1;
		side_face.loc[1] = i ;
		side_face.loc[2] = i + numVert + 1;

		side_face.uv[0] = i + 1 + numVert * 2;
		side_face.uv[1] = i + numVert * 2;
		side_face.uv[2] = (i + 2) + numVert * 3;

		side_face.norm[0] = i;
		side_face.norm[1] = i;
		side_face.norm[2] = i;

		Face side_face1;
		side_face1.loc[0] = i;
		side_face1.loc[1] = i + numVert;
		side_face1.loc[2] = i + numVert + 1; 

		side_face1.uv[0] = i +numVert * 2;
		side_face1.uv[1] = i + 1 + numVert *3; 
		side_face1.uv[2] = (i + 2) + numVert * 3;

		side_face1.norm[0] = i;
		side_face1.norm[1] = i;
		side_face1.norm[2] = i;

		//bottom
		Face bottom_face;
		bottom_face.loc[0] = 2;
		bottom_face.loc[1] = i + numVert + 1;
		bottom_face.loc[2] = i + numVert;

		bottom_face.uv[0] = 2;
		bottom_face.uv[1] = i + numVert + 1;
		bottom_face.uv[2] = i + numVert;

		bottom_face.norm[0] = 2;
		bottom_face.norm[1] = 2;
		bottom_face.norm[2] = 2;

		//adding them 
		shap.addFace(top_face);
		shap.addFace(side_face);
		shap.addFace(side_face1);
		shap.addFace(bottom_face);
	}

	//last faces
	Face lastTop;
	lastTop.loc[0] = 1;
	lastTop.loc[1] = numVert + 2;
	lastTop.loc[2] = 3;

	lastTop.uv[0] = 1;
	lastTop.uv[1] = numVert + 2;
	lastTop.uv[2] = 3;

	lastTop.norm[0] = 1;
	lastTop.norm[1] = 1;
	lastTop.norm[2] = 1;

	//last sides
	Face lastSide;
	lastSide.loc[0] = numVert + 2;
	lastSide.loc[1] = numVert + 3;
	lastSide.loc[2] = 3;

	lastSide.uv[0] = numVert * 3 + 2;
	lastSide.uv[1] = numVert * 4 + 4;
	lastSide.uv[2] = numVert * 3 + 3;

	lastSide.norm[0] = numVert + 2;
	lastSide.norm[1] = numVert + 2;
	lastSide.norm[2] = numVert + 2;

	//last side
	Face lastSide1;
	lastSide1.loc[0] = numVert + 2;
	lastSide1.loc[1] = numVert * 2 + 2;
	lastSide1.loc[2] = numVert + 3;

	lastSide1.uv[0] = numVert * 3 + 2;
	lastSide1.uv[1] = numVert * 4 + 3;
	lastSide1.uv[2] = numVert * 4 + 4;

	lastSide1.norm[0] = numVert + 2;
	lastSide1.norm[1] = numVert + 2;
	lastSide1.norm[2] = numVert + 2;

	//bottom side
	Face lastbottom;
	lastbottom.loc[0] = 2;
	lastbottom.loc[1] = numVert + 3;
	lastbottom.loc[2] = numVert * 2 + 2;

	lastbottom.uv[0] = 2;
	lastbottom.uv[1] = numVert + 3;
	lastbottom.uv[2] = numVert * 2 + 2;

	lastbottom.norm[0] = 2;
	lastbottom.norm[1] = 2;
	lastbottom.norm[2] = 2;

	//add to the shape
	shap.addFace(lastTop);
	shap.addFace(lastSide);
	shap.addFace(lastSide1);
	shap.addFace(lastbottom);

	if (shap.writeObj(filename))
	{
		return true;
	}
	return false;
}

bool sphere(string filename, int lat, int longi)
{
	Shape shap = Shape();

	double PI = 3.14159265358979323846;
	int radius = 1;
	for (int i = 0; i < lat; i++)
	{
		for (int j = 0; j <= longi; j++)
		{
			float u = (float)i / lat;
			float v = (float)j / longi;

			Loc loc;
			loc.x = radius * sin(PI * u) * cos(2 * PI * v);
			loc.y = radius * (-cos(PI * u));	
			loc.z = radius * sin(PI * u) * sin(2 * PI *v);

			Uv uv;
			uv.u = v;
			uv.v = u;

			Norm norm;
			norm.x = radius * sin(PI * u) * cos(2 * PI * v);
			norm.y = radius * (-cos(PI * u));
			norm.z = radius * sin(PI * u) * sin(2 * PI *v);

			shap.addLoc(loc);
			shap.addUv(uv);
			shap.addNorm(norm);
		}
	}

	Loc loc1;
	loc1.x = 0;
	loc1.y = 1;
	loc1.z = 0;

	Norm norm1;
	norm1.x = 0;
	norm1.y = 1;
	norm1.z = 0;
	
	shap.addLoc(loc1);
	shap.addNorm(norm1);

	for (int j = 0; j <= longi; j++)
	{
		Uv uv1;
		uv1.u = 1;
		uv1.v = (float)j / longi;

		shap.addUv(uv1);
	}

	//faces - #killme
	for (int i = 1; i <= lat; i++)
	{
		for (int j = 1; j <= longi; j++)
		{
			int num = (i * longi) + j;
			if (num - longi - 1 > 0 && num + longi + 1 < (lat * longi) + lat + 1)
			{
				Face face;
				face.loc[0] = num;
				face.loc[1] = num + longi + 1;
				face.loc[2] = num + 1;

				face.uv[0] = num;
				face.uv[1] = num + longi + 1;
				face.uv[2] = num + 1;

				face.norm[0] = num;
				face.norm[1] = num + longi + 1;
				face.norm[2] = num + 1;

				Face face1;
				face1.loc[0] = num;
				face1.loc[1] = num - longi - 1;
				face1.loc[2] = num - 1;
				
				face1.uv[0] = num;
				face1.uv[1] = num - longi - 1;
				face1.uv[2] = num - 1;

				face1.norm[0] = num;
				face1.norm[1] = num - longi - 1;
				face1.norm[2] = num - 1;

				shap.addFace(face);
				shap.addFace(face1);
			}
		}
	}

	for (int i = 0; i <= longi; i++)
	{
		int num = (lat * longi) - lat + i;
		Face face2;
		face2.loc[0] = num;
		face2.loc[1] = num - longi - 1;
		face2.loc[2] = num - 1;

		face2.uv[0] = num;
		face2.uv[1] = num - longi - 1;
		face2.uv[2] = num - 1;

		face2.norm[0] = num;
		face2.norm[1] = num - longi - 1;
		face2.norm[2] = num - 1;
		
	
		//int num = (lat * longi) - lat + i;
		Face face3;
		face3.loc[0] = num;
		face3.loc[1] = lat * longi + lat + 1 ;
		face3.loc[2] = num + 1;

		face3.uv[0] = num;
		face3.uv[1] = lat * longi + lat + 1 + i;
		face3.uv[2] = num +1;

		face3.norm[0] = num;
		face3.norm[1] = lat * longi + lat +1;
		face3.norm[2] = num + 1;
		shap.addFace(face2);
		shap.addFace(face3);
	} 

	if (shap.writeObj(filename))
	{
		return true;
	}
	return false;
}