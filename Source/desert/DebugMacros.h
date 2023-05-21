#pragma once
#include "DrawDebugHelpers.h"

#define DRAW_SPHERE(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location ,25.f , 12 ,FColor::Red, true);
#define DRAW_SPHERE_SingleFrame(Location) if (GetWorld()) DrawDebugSphere(GetWorld(), Location ,25.f , 12 ,FColor::Red, false,-1.f);
#define DRAW_LINE(Location, ForwardVector) if(GetWorld()) DrawDebugLine(GetWorld(),Location, Location+(ForwardVector*200),FColor::Black,true);
#define DRAW_LINE_SingleFrame(Location, ForwardVector) if(GetWorld()) DrawDebugLine(GetWorld(),Location, Location+(ForwardVector*200),FColor::Black,false,-1.f);
#define DRAW_POINT(Location) if (GetWorld()) DrawDebugPoint(GetWorld(),Location, 20.f, FColor::Green, true);
#define DRAW_POINT_SingleFrame(Location) if (GetWorld()) DrawDebugPoint(GetWorld(),Location, 20.f, FColor::Green, false, -1.f);
#define DRAW_VECTOR(StartLocation, EndLocation) if(GetWorld()) \
	{ \
	 DrawDebugLine(GetWorld(),StartLocation, EndLocation,FColor::Black,true);\
	 DrawDebugPoint(GetWorld(),EndLocation, 20.f, FColor::Green, true);\
	};
#define DRAW_VECTOR_SingleFrame(StartLocation, EndLocation) if(GetWorld()) \
	{ \
	 DrawDebugLine(GetWorld(),StartLocation, EndLocation,FColor::Black,false,-1.f);\
	 DrawDebugPoint(GetWorld(),EndLocation, 20.f, FColor::Green, false, -1.f);\
	};