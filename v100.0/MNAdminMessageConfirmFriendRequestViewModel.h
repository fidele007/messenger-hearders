/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface MNAdminMessageConfirmFriendRequestViewModel : FBValueObject <NSCopying> {

	NSString* _loggedInUserId;
	NSString* _otherUserIdOnCanonicalThread;
	NSString* _adminMessage;
	NSArray* _greetings;
	long long _actionButtonType;

}

@property (nonatomic,copy,readonly) NSString * loggedInUserId;                            //@synthesize loggedInUserId=_loggedInUserId - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserIdOnCanonicalThread;              //@synthesize otherUserIdOnCanonicalThread=_otherUserIdOnCanonicalThread - In the implementation block
@property (nonatomic,copy,readonly) NSString * adminMessage;                              //@synthesize adminMessage=_adminMessage - In the implementation block
@property (nonatomic,copy,readonly) NSArray * greetings;                                  //@synthesize greetings=_greetings - In the implementation block
@property (nonatomic,readonly) long long actionButtonType;                                //@synthesize actionButtonType=_actionButtonType - In the implementation block
-(long long)actionButtonType;
-(NSString *)otherUserIdOnCanonicalThread;
-(id)initWithLoggedInUserId:(id)arg1 otherUserIdOnCanonicalThread:(id)arg2 adminMessage:(id)arg3 greetings:(id)arg4 actionButtonType:(long long)arg5 ;
-(NSArray *)greetings;
-(NSString *)loggedInUserId;
-(NSString *)adminMessage;
@end

