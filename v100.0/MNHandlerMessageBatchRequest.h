/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, MNModelRequestConfiguration;

@interface MNHandlerMessageBatchRequest : FBValueObject <NSCopying> {

	unsigned long long _requestId;
	NSDictionary* _threadQueryToHistoryQueryMap;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,readonly) unsigned long long requestId;                                  //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * threadQueryToHistoryQueryMap;              //@synthesize threadQueryToHistoryQueryMap=_threadQueryToHistoryQueryMap - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithRequestId:(unsigned long long)arg1 threadQueryToHistoryQueryMap:(id)arg2 configuration:(id)arg3 ;
-(NSDictionary *)threadQueryToHistoryQueryMap;
-(MNModelRequestConfiguration *)configuration;
-(unsigned long long)requestId;
@end

