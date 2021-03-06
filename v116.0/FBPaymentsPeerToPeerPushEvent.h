/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsPeerToPeerPushEvent : FBValueObject <NSCopying> {

	long long _type;
	NSString* _objectId;
	NSString* _otherUserId;
	NSString* _groupThreadId;
	NSString* _status;

}

@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectId;                   //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,copy,readonly) NSString * otherUserId;                //@synthesize otherUserId=_otherUserId - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupThreadId;              //@synthesize groupThreadId=_groupThreadId - In the implementation block
@property (nonatomic,copy,readonly) NSString * status;                     //@synthesize status=_status - In the implementation block
-(NSString *)groupThreadId;
-(id)initWithType:(long long)arg1 objectId:(id)arg2 otherUserId:(id)arg3 groupThreadId:(id)arg4 status:(id)arg5 ;
-(NSString *)otherUserId;
-(long long)type;
-(NSString *)status;
-(NSString *)objectId;
@end

