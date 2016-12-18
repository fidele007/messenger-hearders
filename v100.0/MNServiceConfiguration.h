/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NSString, NSSet, NSObject, MNServiceCreator;

@interface MNServiceConfiguration : FBValueObject <NSCopying> {

	NSString* _uniqueIdentifier;
	NSSet* _dependencyIdentifiers;
	unsigned long long _startupLevel;
	NSObject*<OS_dispatch_queue> _queue;
	MNServiceCreator* _serviceCreator;

}

@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependencyIdentifiers;                  //@synthesize dependencyIdentifiers=_dependencyIdentifiers - In the implementation block
@property (nonatomic,readonly) unsigned long long startupLevel;                     //@synthesize startupLevel=_startupLevel - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                  //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) MNServiceCreator * serviceCreator;              //@synthesize serviceCreator=_serviceCreator - In the implementation block
-(id)initWithUniqueIdentifier:(id)arg1 dependencyIdentifiers:(id)arg2 startupLevel:(unsigned long long)arg3 queue:(id)arg4 serviceCreator:(id)arg5 ;
-(NSSet *)dependencyIdentifiers;
-(MNServiceCreator *)serviceCreator;
-(unsigned long long)startupLevel;
-(NSString *)uniqueIdentifier;
-(NSObject*<OS_dispatch_queue>)queue;
@end

