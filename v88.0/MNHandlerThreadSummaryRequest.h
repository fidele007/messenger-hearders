/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNBatchThreadSummaryRequestFilter, MNModelRequestConfiguration;

@interface MNHandlerThreadSummaryRequest : FBValueObject <NSCopying> {

	unsigned long long _requestId;
	MNBatchThreadSummaryRequestFilter* _filter;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,readonly) unsigned long long requestId;                                  //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,copy,readonly) MNBatchThreadSummaryRequestFilter * filter;               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithRequestId:(unsigned long long)arg1 filter:(id)arg2 configuration:(id)arg3 ;
-(MNModelRequestConfiguration *)configuration;
-(unsigned long long)requestId;
-(MNBatchThreadSummaryRequestFilter *)filter;
@end
