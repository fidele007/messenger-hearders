/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadDetailsTableViewDataSourceDelegate <NSObject>
@required
-(void)threadDetailsTableViewDataSource:(id)arg1 didRemoveParticipantWithUserId:(id)arg2;
-(BOOL)threadDetailsTableViewDataShourceShouldShowRoundedCorners:(id)arg1;
-(void)threadDetailsTableViewDataSourceDidEndEditingEditablePeopleCell:(id)arg1;
-(void)threadDetailsTableViewDataSource:(id)arg1 didChangeGroupThreadJoinableSetting:(BOOL)arg2 switchView:(id)arg3;
-(void)threadDetailsTableViewDataSource:(id)arg1 didChangeGroupThreadMembersApprovalsSetting:(BOOL)arg2;
-(void)threadDetailsTableViewDataSource:(id)arg1 willShowFullDescriptionForSection:(unsigned long long)arg2;
-(BOOL)threadDetailsTableViewDataSourceShouldShowDisclosureIndicatorForNotificationsRow:(id)arg1;

@end

