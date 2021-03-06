/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNSingleUserRequestFilter, MNModelRequestConfiguration;

@interface MNSingleUserRequest : NSObject <NSCopying> {

	MNSingleUserRequestFilter* _filter;
	MNModelRequestConfiguration* _configuration;
	/*^block*/id _onSuccess;
	/*^block*/id _onFailure;
	/*^block*/id _onProgress;

}

@property (nonatomic,retain,readonly) MNSingleUserRequestFilter * filter;                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) id onSuccess;                                             //@synthesize onSuccess=_onSuccess - In the implementation block
@property (nonatomic,copy,readonly) id onFailure;                                             //@synthesize onFailure=_onFailure - In the implementation block
@property (nonatomic,copy,readonly) id onProgress;                                            //@synthesize onProgress=_onProgress - In the implementation block
-(id)initWithFilter:(id)arg1 configuration:(id)arg2 successBlock:(/*^block*/id)arg3 failureBlock:(/*^block*/id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(id)onSuccess;
-(id)onFailure;
-(id)onProgress;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(MNModelRequestConfiguration *)configuration;
-(MNSingleUserRequestFilter *)filter;
@end

