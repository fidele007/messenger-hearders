/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNThreadListRequestFilter, MNThreadListRequestBehavior, MNModelRequestConfiguration;

@interface MNThreadListRequest : FBValueObject <NSCopying> {

	MNThreadListRequestFilter* _filter;
	MNThreadListRequestBehavior* _behavior;
	MNModelRequestConfiguration* _configuration;

}

@property (nonatomic,copy,readonly) MNThreadListRequestFilter * filter;                       //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) MNThreadListRequestBehavior * behavior;                   //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,copy,readonly) MNModelRequestConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithFilter:(id)arg1 behavior:(id)arg2 configuration:(id)arg3 ;
-(MNThreadListRequestBehavior *)behavior;
-(MNModelRequestConfiguration *)configuration;
-(MNThreadListRequestFilter *)filter;
@end

