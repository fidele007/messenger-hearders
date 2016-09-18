/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MNAdminMessageConfirmFriendRequestViewModel : FBValueObject <NSCopying> {

	NSString* _loggedInUserId;
	NSString* _otherUserIdOnCanonicalThread;
	NSString* _adminMessage;

}

@property (nonatomic,copy,readonly) NSString * loggedInUserId;                            //@synthesize loggedInUserId=_loggedInUserId - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserIdOnCanonicalThread;              //@synthesize otherUserIdOnCanonicalThread=_otherUserIdOnCanonicalThread - In the implementation block
@property (nonatomic,copy,readonly) NSString * adminMessage;                              //@synthesize adminMessage=_adminMessage - In the implementation block
-(NSString *)otherUserIdOnCanonicalThread;
-(id)initWithLoggedInUserId:(id)arg1 otherUserIdOnCanonicalThread:(id)arg2 adminMessage:(id)arg3 ;
-(NSString *)loggedInUserId;
-(NSString *)adminMessage;
@end

