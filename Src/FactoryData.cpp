#include "FactoryData.h"

namespace Factory
{
GroupNode       *scenegraphRootNode          = new GroupNode() ;
LightSource     *centralLightSource          = new LightSource();
Camera          *camera                      = new Camera();
GroupNode       *robotRootNode               = new GroupNode() ;
GroupNode       *roomRootNode                = new GroupNode() ;
RoomModel       *roomModel                   = new RoomModel();
RobotTorsoModel *robotTorso                  = new RobotTorsoModel();
RobotLegTop     *robotLeftLegTop             = new RobotLegTop();
RobotLegTop     *robotRightLegTop            = new RobotLegTop();
RobotLegBottom  *robotLeftLegBottom          = new RobotLegBottom();
RobotLegBottom  *robotRightLegBottom         = new RobotLegBottom();
RobotArmTop     *robotRightArmTop            = new RobotArmTop();
RobotArmTop     *robotLeftArmTop             = new RobotArmTop();
RobotArmBottom  *robotRightBottom            = new RobotArmBottom();
RobotArmBottom  *robotLeftBottom             = new RobotArmBottom();
RobotHead       *robotHead                   = new RobotHead();
RobotShoe       *robotLeftShoe               = new RobotShoe();
RobotShoe       *robotRightShoe              = new RobotShoe();
Transform       *robotLeftThighTransform     = new Transform();
Transform       *robotRightThighTransform    = new Transform();
Transform       *robotLeftKneeTransform      = new Transform();
Transform       *robotRightKneeTransform     = new Transform();
Transform       *robotLeftShoulderTransform  = new Transform();
Transform       *robotRightShoulderTransform = new Transform();
Transform       *robotLeftElbowTransform     = new Transform();
Transform       *robotRightElbowTransform    = new Transform();
Transform       *robotHeadTransform          = new Transform();
Transform       *robotTorsoTransform         = new Transform();
Transform       *roomCentralTransform        = new Transform();
Transform       *robotLeftShoeTransform      = new Transform();
Transform       *robotRightShoeTransform     = new Transform();
Transform       *roomFloorTransform          = new Transform();
Transform       *roomLeftWallTransform       = new Transform();
Transform       *roomRightWallTransform      = new Transform();
Transform       *roomFrontWallTransform      = new Transform();
Transform       *roomBackWallTransform       = new Transform();
Transform       *roomCeilingTransform        = new Transform();

BuildingBlock   *roomFloor                   = new BuildingBlock("../Textures/tex1.bmp");
BuildingBlock   *roomLeftWall                = new BuildingBlock("../Textures/wall1.bmp");
BuildingBlock   *roomRightWal                = new BuildingBlock("../Textures/wall1.bmp");
BuildingBlock   *roomFrontWal                = new BuildingBlock("../Textures/wall1.bmp");
BuildingBlock   *roomBackWall                = new BuildingBlock("../Textures/wall1.bmp");
BuildingBlock   *roomCeiling                 = new BuildingBlock("../Textures/wall1.bmp");
}
