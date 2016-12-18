/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, MNGroupsRoomNUXStateController, MNGroupsRoomNUXViewController, MNNavigationCoordinator, NSString;

@interface MNGroupsRoomNUXNavigationHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNGroupsRoomNUXStateController* _roomNUXStateController;
	MNGroupsRoomNUXViewController* _roomNUXViewController;
	MNNavigationCoordinator* _navigationCoordinator;

}

@property (nonatomic,readonly) MNGroupsRoomNUXStateController * roomNUXStateController;              //@synthesize roomNUXStateController=_roomNUXStateController - In the implementation block
@property (nonatomic,readonly) MNGroupsRoomNUXViewController * roomNUXViewController;                //@synthesize roomNUXViewController=_roomNUXViewController - In the implementation block
@property (nonatomic,readonly) MNNavigationCoordinator * navigationCoordinator;                      //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNGroupsRoomNUXViewController *)roomNUXViewController;
-(MNNavigationCoordinator *)navigationCoordinator;
-(MNGroupsRoomNUXStateController *)roomNUXStateController;
@end
