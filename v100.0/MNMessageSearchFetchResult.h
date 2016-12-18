/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBStringWithRedactedDescription;

@interface MNMessageSearchFetchResult : FBValueObject <NSCopying> {

	NSString* _senderId;
	NSString* _senderName;
	FBStringWithRedactedDescription* _snippet;
	unsigned long long _preciseTimestamp;

}

@property (nonatomic,copy,readonly) NSString * senderId;                                    //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderName;                                  //@synthesize senderName=_senderName - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * snippet;              //@synthesize snippet=_snippet - In the implementation block
@property (nonatomic,readonly) unsigned long long preciseTimestamp;                         //@synthesize preciseTimestamp=_preciseTimestamp - In the implementation block
-(NSString *)senderId;
-(unsigned long long)preciseTimestamp;
-(id)initWithSenderId:(id)arg1 senderName:(id)arg2 snippet:(id)arg3 preciseTimestamp:(unsigned long long)arg4 ;
-(FBStringWithRedactedDescription *)snippet;
-(NSString *)senderName;
@end

