/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:11 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary;

@interface MNSyncProtocolQueueRequestConfig : FBValueObject <NSCopying> {

	long long _sequenceId;
	NSString* _queueType;
	NSNumber* _apiVersion;
	NSDictionary* _queueParams;
	NSString* _entityFBID;

}

@property (nonatomic,readonly) long long sequenceId;                         //@synthesize sequenceId=_sequenceId - In the implementation block
@property (nonatomic,copy,readonly) NSString * queueType;                    //@synthesize queueType=_queueType - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * apiVersion;                   //@synthesize apiVersion=_apiVersion - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * queueParams;              //@synthesize queueParams=_queueParams - In the implementation block
@property (nonatomic,copy,readonly) NSString * entityFBID;                   //@synthesize entityFBID=_entityFBID - In the implementation block
-(NSDictionary *)queueParams;
-(long long)sequenceId;
-(id)initWithSequenceId:(long long)arg1 queueType:(id)arg2 apiVersion:(id)arg3 queueParams:(id)arg4 entityFBID:(id)arg5 ;
-(NSString *)entityFBID;
-(NSString *)queueType;
-(NSNumber *)apiVersion;
@end
