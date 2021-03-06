/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, FBMobileConfigContextManager, MNGroupsViewController, MNGroupsRoomsViewController, MNGroupsTabNavigationHandler, MNGroupsRoomsActionsController, NSString;

@interface MNGroupsTabManagerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	FBMobileConfigContextManager* _configManager;
	MNGroupsViewController* _groupsViewController;
	MNGroupsRoomsViewController* _groupsRoomsViewController;
	MNGroupsTabNavigationHandler* _groupsTabNavigationHandler;
	MNGroupsRoomsActionsController* _groupsRoomsTabNavigationHandler;

}

@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                  //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) MNGroupsViewController * groupsViewController;                                 //@synthesize groupsViewController=_groupsViewController - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomsViewController * groupsRoomsViewController;                       //@synthesize groupsRoomsViewController=_groupsRoomsViewController - In the implementation block
@property (nonatomic,readonly) MNGroupsTabNavigationHandler * groupsTabNavigationHandler;                     //@synthesize groupsTabNavigationHandler=_groupsTabNavigationHandler - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomsActionsController * groupsRoomsTabNavigationHandler;              //@synthesize groupsRoomsTabNavigationHandler=_groupsRoomsTabNavigationHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(MNGroupsRoomsViewController *)groupsRoomsViewController;
-(MNGroupsViewController *)groupsViewController;
-(MNGroupsRoomsActionsController *)groupsRoomsTabNavigationHandler;
-(MNGroupsTabNavigationHandler *)groupsTabNavigationHandler;
@end

