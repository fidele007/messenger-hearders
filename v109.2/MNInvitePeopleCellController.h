/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:33 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNInviteEligibilityChecking;
@class MNInviteSender, NSString;

@interface MNInvitePeopleCellController : NSObject <FBClassProvidable> {

	MNInviteSender* _inviteSender;
	id<MNInviteEligibilityChecking> _inviteEligibilityChecker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)generateCellWithReuseIdentifier:(id)arg1 ;
-(void)performActionWithPresentingView:(id)arg1 ;
-(BOOL)shouldShowInvitePeopleCell;
-(id)initWithInviteSender:(id)arg1 inviteEligibilityChecker:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
@end

