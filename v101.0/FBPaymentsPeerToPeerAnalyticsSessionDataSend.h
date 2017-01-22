/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBPaymentsPeerToPeerAnalyticsSessionDataSend : FBValueObject <NSCopying> {

	NSString* _entryPoint;
	NSString* _recipientId;
	NSString* _threadId;
	long long _peopleCount;

}

@property (nonatomic,copy,readonly) NSString * entryPoint;               //@synthesize entryPoint=_entryPoint - In the implementation block
@property (nonatomic,copy,readonly) NSString * recipientId;              //@synthesize recipientId=_recipientId - In the implementation block
@property (nonatomic,copy,readonly) NSString * threadId;                 //@synthesize threadId=_threadId - In the implementation block
@property (nonatomic,readonly) long long peopleCount;                    //@synthesize peopleCount=_peopleCount - In the implementation block
-(long long)peopleCount;
-(id)initWithEntryPoint:(id)arg1 recipientId:(id)arg2 threadId:(id)arg3 peopleCount:(long long)arg4 ;
-(NSString *)recipientId;
-(NSString *)entryPoint;
-(NSString *)threadId;
@end
