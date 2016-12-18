/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>
#import <Messenger/MNInviteSenderListener.h>

@class MNUserSettings, NSString;

@interface MNInvitesCooldownController : NSObject <FBViewerContextClassProvidable, MNInviteSenderListener> {

	MNUserSettings* _userSettings;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithUserSettings:(id)arg1 ;
-(void)_updateLastInviteSentDateForContacts:(id)arg1 ;
-(void)inviteSenderDidPresentInviteMultiPeoplePickerFromSource:(unsigned long long)arg1 withSelectedInviteContactsType:(unsigned long long)arg2 ;
-(void)inviteSenderFromSource:(unsigned long long)arg1 didSelectInviteContactsType:(unsigned long long)arg2 ;
-(void)inviteSenderDidDismissInviteMultiPeoplePickerFromSource:(unsigned long long)arg1 ;
-(void)inviteSenderFromSource:(unsigned long long)arg1 didSucceedWithContacts:(id)arg2 ;
-(BOOL)shouldCooldownInvitesForUserWithUserId:(id)arg1 ;
@end

