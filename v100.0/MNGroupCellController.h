/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:27 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBClassProvidable.h>

@protocol MNAuthenticationManager;
@class MNThreadImageManager, MNProfileImageViewController, MNDateFormatter, MNThreadParticipantNameFormatter, FBMLocalThreadMessagesQuerier, NSString;

@interface MNGroupCellController : NSObject <FBClassProvidable> {

	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	MNDateFormatter* _dateFormatter;
	MNThreadParticipantNameFormatter* _nameFormatter;
	id<MNAuthenticationManager> _authenticationManager;
	FBMLocalThreadMessagesQuerier* _messagesQuerier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)_groupItemForThread:(id)arg1 users:(id)arg2 groupCell:(id)arg3 ;
-(void)setupGroupCell:(id)arg1 withGroupThread:(id)arg2 users:(id)arg3 ;
-(void)cellWillAppear:(id)arg1 ;
-(void)cellDidDisappear:(id)arg1 ;
@end

