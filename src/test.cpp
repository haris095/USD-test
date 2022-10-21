#include<iostream>
#include<stdio.h>

#include<pxr/pxr.h>
#include<pxr/usd/usd/stage.h>
#include<pxr/usd/usdGeom/xform.h>
//#include<pxr/usd/usdGeom/sphere.h>

int main()
{
    /*
    UsdStageRefPtr *stage = UsdStage::CreateNew("FirstStage.usda");
    UsdGeomXform xform = UsdGeomXform::UsdGeomXform();
    xform.Define(stage, "/subPrim");
    */
    std::cout<<"Imported pxr library"<<std::endl;
    return 0;
}
