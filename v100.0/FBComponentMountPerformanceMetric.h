/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBComponentMountPerformanceMetric : FBValueObject <NSCopying> {

	long long _mountTimeUs;
	Class _componentClass;
	NSString* _source;
	NSString* _analyticsModule;

}

@property (nonatomic,readonly) long long mountTimeUs;                        //@synthesize mountTimeUs=_mountTimeUs - In the implementation block
@property (nonatomic,readonly) Class componentClass;                         //@synthesize componentClass=_componentClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
-(NSString *)analyticsModule;
-(id)initWithMountTimeUs:(long long)arg1 componentClass:(Class)arg2 source:(id)arg3 analyticsModule:(id)arg4 ;
-(long long)mountTimeUs;
-(NSString *)source;
-(Class)componentClass;
@end

