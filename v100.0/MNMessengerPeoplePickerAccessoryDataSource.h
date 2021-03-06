/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSyncCellControllerDelegate.h>
#import <Messenger/MNPeoplePickerAccessoryDataSource.h>

@protocol FBMobileConfigContext, MNPeoplePickerAccessoryDataSourceDelegate;
@class NSArray, MNContactSyncCellController, MNContactSyncTableViewCell, FBUserSession, NSString;

@interface MNMessengerPeoplePickerAccessoryDataSource : NSObject <MNContactSyncCellControllerDelegate, MNPeoplePickerAccessoryDataSource> {

	NSArray* _accessoryCells;
	MNContactSyncCellController* _contactSyncCellController;
	MNContactSyncTableViewCell* _contactSyncCell;
	FBUserSession* _session;
	id<FBMobileConfigContext> _config;
	id<MNPeoplePickerAccessoryDataSourceDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNPeoplePickerAccessoryDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithContactSyncCellController:(id)arg1 session:(id)arg2 ;
-(void)contactSyncCellControllerCellNeedsUpdate:(id)arg1 ;
-(void)contactSyncCellController:(id)arg1 didInitiateContactsImportingWithAction:(id)arg2 ;
-(void)setDelegate:(id<MNPeoplePickerAccessoryDataSourceDelegate>)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<MNPeoplePickerAccessoryDataSourceDelegate>)delegate;
@end

