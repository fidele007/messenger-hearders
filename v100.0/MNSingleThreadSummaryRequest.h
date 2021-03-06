/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSingleThreadSummaryRequestFilter, MNModelRequestConfiguration;

@interface MNSingleThreadSummaryRequest : NSObject <NSCopying> {

	MNSingleThreadSummaryRequestFilter* _filter;
	MNModelRequestConfiguration* _configuration;
	/*^block*/id _completeBlock;
	/*^block*/id _progressBlock;

}

@property (nonatomic,copy,readonly) MNSingleThreadSummaryRequestFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id completeBlock;                                         //@synthesize completeBlock=_completeBlock - In the implementation block
@property (nonatomic,copy,readonly) id progressBlock;                                         //@synthesize progressBlock=_progressBlock - In the implementation block
-(id)initWithFilter:(id)arg1 configuration:(id)arg2 completeBlock:(/*^block*/id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(id)completeBlock;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MNModelRequestConfiguration *)configuration;
-(id)progressBlock;
-(MNSingleThreadSummaryRequestFilter *)filter;
@end

