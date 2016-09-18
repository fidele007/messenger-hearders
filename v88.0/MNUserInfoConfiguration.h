/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:45 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMUser, MNThreadViewModel;

@interface MNUserInfoConfiguration : FBValueObject <NSCopying> {

	BOOL _canViewTimeline;
	BOOL _canInvite;
	BOOL _canSendMessage;
	BOOL _canCallViaPhone;
	BOOL _canEditNickname;
	BOOL _canCallViaMessenger;
	FBMUser* _user;
	MNThreadViewModel* _threadViewModel;

}

@property (nonatomic,copy,readonly) FBMUser * user;                                   //@synthesize user=_user - In the implementation block
@property (nonatomic,copy,readonly) MNThreadViewModel * threadViewModel;              //@synthesize threadViewModel=_threadViewModel - In the implementation block
@property (nonatomic,readonly) BOOL canViewTimeline;                                  //@synthesize canViewTimeline=_canViewTimeline - In the implementation block
@property (nonatomic,readonly) BOOL canInvite;                                        //@synthesize canInvite=_canInvite - In the implementation block
@property (nonatomic,readonly) BOOL canSendMessage;                                   //@synthesize canSendMessage=_canSendMessage - In the implementation block
@property (nonatomic,readonly) BOOL canCallViaPhone;                                  //@synthesize canCallViaPhone=_canCallViaPhone - In the implementation block
@property (nonatomic,readonly) BOOL canEditNickname;                                  //@synthesize canEditNickname=_canEditNickname - In the implementation block
@property (nonatomic,readonly) BOOL canCallViaMessenger;                              //@synthesize canCallViaMessenger=_canCallViaMessenger - In the implementation block
-(MNThreadViewModel *)threadViewModel;
-(id)initWithUser:(id)arg1 threadViewModel:(id)arg2 canViewTimeline:(BOOL)arg3 canInvite:(BOOL)arg4 canSendMessage:(BOOL)arg5 canCallViaPhone:(BOOL)arg6 canEditNickname:(BOOL)arg7 canCallViaMessenger:(BOOL)arg8 ;
-(BOOL)canViewTimeline;
-(BOOL)canInvite;
-(BOOL)canCallViaPhone;
-(BOOL)canEditNickname;
-(BOOL)canCallViaMessenger;
-(FBMUser *)user;
-(BOOL)canSendMessage;
@end

