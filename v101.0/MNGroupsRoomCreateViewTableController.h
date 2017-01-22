/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:17 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassInjectable.h>
#import <Messenger/MNGroupsRoomCreateViewRoomBasicInfoSectionControllerDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewSettingsSectionControllerDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewCustomizationSectionControllerDelegate.h>
#import <Messenger/MNGroupsRoomCreateViewFBShareSectionControllerDelegate.h>
#import <Messenger/MNNewGroupThreadSummaryUpdating.h>
#import <Messenger/MNGroupsRoomCreateViewTableSectionUpdating.h>

@protocol MNNewGroupThreadSummaryUpdateRunning, MNGroupsRoomCreateViewTableControllerDelegate;
@class MNGroupsRoomCreateViewTableControllerInjector, MNGroupsRoomCreateViewRoomBasicInfoSectionController, MNGroupsRoomCreateViewSettingsSectionController, MNGroupsRoomCreateViewCustomizationSectionController, MNGroupsRoomCreateViewFBShareSectionController, NSString;

@interface MNGroupsRoomCreateViewTableController : NSObject <FBClassInjectable, MNGroupsRoomCreateViewRoomBasicInfoSectionControllerDelegate, MNGroupsRoomCreateViewSettingsSectionControllerDelegate, MNGroupsRoomCreateViewCustomizationSectionControllerDelegate, MNGroupsRoomCreateViewFBShareSectionControllerDelegate, MNNewGroupThreadSummaryUpdating, MNGroupsRoomCreateViewTableSectionUpdating> {

	MNGroupsRoomCreateViewTableControllerInjector* _injector;
	MNGroupsRoomCreateViewRoomBasicInfoSectionController* _basicInfoCellController;
	MNGroupsRoomCreateViewSettingsSectionController* _settingsCellController;
	MNGroupsRoomCreateViewCustomizationSectionController* _emojiCellController;
	MNGroupsRoomCreateViewCustomizationSectionController* _colorThemeCellController;
	MNGroupsRoomCreateViewFBShareSectionController* _fbShareCellController;
	id<MNNewGroupThreadSummaryUpdateRunning> _newGroupThreadSummaryUpdateRunner;
	BOOL _showFBShareOption;
	id<MNGroupsRoomCreateViewTableControllerDelegate> _delegate;
	unsigned long long _associatedObjectType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNGroupsRoomCreateViewTableControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long associatedObjectType;                                        //@synthesize associatedObjectType=_associatedObjectType - In the implementation block
+(Class)injectorClass;
-(id)initWithInjector:(id)arg1 ;
-(void)roomsCustomizationSectionController:(id)arg1 didChangeCustomEmoji:(id)arg2 ;
-(void)roomsCustomizationSectionController:(id)arg1 didChangeCustomThemeColor:(id)arg2 ;
-(void)groupsRoomCreateViewFBShareSectionController:(id)arg1 didTapShareRoomOnFB:(BOOL)arg2 ;
-(void)groupsRoomCreateViewFBShareSectionController:(id)arg1 didChangeCustomMessage:(id)arg2 ;
-(void)roomCreateViewUpdateTableSection:(unsigned long long)arg1 ;
-(void)roomCreateViewSettingsSectionController:(id)arg1 didToggleRoomSettingRow:(unsigned long long)arg2 isON:(BOOL)arg3 ;
-(id)_orderedSettingsRows;
-(void)roomsBasicInfoSectionController:(id)arg1 didChangeRoomName:(id)arg2 ;
-(void)roomsBasicInfoSectionController:(id)arg1 didChangeRoomProfilePicture:(id)arg2 ;
-(void)roomsBasicInfoSectionController:(id)arg1 didChangeRoomDescription:(id)arg2 ;
-(unsigned long long)settingsRowAtIndex:(long long)arg1 ;
-(unsigned long long)associatedObjectType;
-(void)setInitialFocusOnNameCell;
-(id)sectionControllerForSection:(unsigned long long)arg1 ;
-(void)setNewGroupThreadSummaryUpdateRunner:(id)arg1 ;
-(void)setAssociatedObjectType:(unsigned long long)arg1 ;
-(long long)indexOfSection:(unsigned long long)arg1 ;
-(void)resetSectionControllers;
-(id)_orderedSections;
-(void)setDelegate:(id<MNGroupsRoomCreateViewTableControllerDelegate>)arg1 ;
-(long long)numberOfRowsInSection:(unsigned long long)arg1 ;
-(id<MNGroupsRoomCreateViewTableControllerDelegate>)delegate;
-(long long)numberOfSections;
-(unsigned long long)sectionAtIndex:(long long)arg1 ;
@end
