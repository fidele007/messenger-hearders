/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMLoggedInUserInfoManager;

@interface MNMontageAudiencePreferenceRequest : NSObject {

	FBUserSession* _userSession;
	FBMLoggedInUserInfoManager* _loggedInUserInfoManager;

}
-(id)initWithUserSession:(id)arg1 loggedInUserInfoManager:(id)arg2 ;
-(void)setPrivacyAutoSelectAudienceEnabled:(BOOL)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
@end

