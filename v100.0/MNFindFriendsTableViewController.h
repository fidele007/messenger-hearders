/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSyncCellControllerDelegate.h>
#import <Messenger/MNMessageRequestCellControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <Messenger/FBTableViewSectionDataSource.h>

@protocol FBTableViewMutating;
@class MNMessengerCodeCellController, MNInvitePeopleCellController, MNContactSyncCellController, MNMessageRequestCellController, NSString;

@interface MNFindFriendsTableViewController : NSObject <MNContactSyncCellControllerDelegate, MNMessageRequestCellControllerDelegate, UITableViewDataSource, UITableViewDelegate, FBTableViewSectionDataSource> {

	MNMessengerCodeCellController* _messengerCodeCellController;
	MNInvitePeopleCellController* _invitePeopleCellController;
	MNContactSyncCellController* _contactSyncCellController;
	MNMessageRequestCellController* _messageRequestCellController;
	id<FBTableViewMutating> _tableViewMutator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;              //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
-(void)contactSyncCellControllerCellNeedsUpdate:(id)arg1 ;
-(void)contactSyncCellController:(id)arg1 didInitiateContactsImportingWithAction:(id)arg2 ;
-(id)_messageRequestCellForTableView:(id)arg1 ;
-(id)_messengerCodeCellForTableView:(id)arg1 ;
-(id)_syncContactsCellForTableView:(id)arg1 ;
-(id)_invitePeopleCellForTableView:(id)arg1 ;
-(long long)_lastVisibleSectionIndex;
-(BOOL)_isVisibleSection:(long long)arg1 ;
-(void)messageRequestCellControllerDidUpdateCellContents:(id)arg1 ;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(id)initWithContactSyncCellController:(id)arg1 findFriendsModelController:(id)arg2 messengerCodeCellController:(id)arg3 messageRequestCellController:(id)arg4 ;
-(BOOL)hasAnyRows;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)_reloadData;
-(long long)_numberOfRowsInSection:(long long)arg1 ;
-(long long)_numberOfSections;
@end

