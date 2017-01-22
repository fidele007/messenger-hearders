/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBValueObject.h>

@protocol FBDiskCacheProtocol;
@class NSString;

@interface FBGraphQLConnectionPersistenceCoordinatorConfiguration : FBValueObject {

	BOOL _includeUpdates;
	BOOL _synchronousInitialPageLoad;
	BOOL _deferredLoad;
	BOOL _streamingLoad;
	id<FBDiskCacheProtocol> _diskCache;
	NSString* _uniqueIdentifier;
	const FBGraphQLFieldSetRef _fieldSet;
	unsigned long long _countLimit;
	/*^block*/id _restoredEdgeFilter;
	double _persistenceDelay;

}

@property (nonatomic,readonly) id<FBDiskCacheProtocol> diskCache;                //@synthesize diskCache=_diskCache - In the implementation block
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) const FBGraphQLFieldSetRef fieldSet;              //@synthesize fieldSet=_fieldSet - In the implementation block
@property (nonatomic,readonly) unsigned long long countLimit;                    //@synthesize countLimit=_countLimit - In the implementation block
@property (nonatomic,copy,readonly) id restoredEdgeFilter;                       //@synthesize restoredEdgeFilter=_restoredEdgeFilter - In the implementation block
@property (nonatomic,readonly) double persistenceDelay;                          //@synthesize persistenceDelay=_persistenceDelay - In the implementation block
@property (nonatomic,readonly) BOOL includeUpdates;                              //@synthesize includeUpdates=_includeUpdates - In the implementation block
@property (nonatomic,readonly) BOOL synchronousInitialPageLoad;                  //@synthesize synchronousInitialPageLoad=_synchronousInitialPageLoad - In the implementation block
@property (nonatomic,readonly) BOOL deferredLoad;                                //@synthesize deferredLoad=_deferredLoad - In the implementation block
@property (nonatomic,readonly) BOOL streamingLoad;                               //@synthesize streamingLoad=_streamingLoad - In the implementation block
-(id<FBDiskCacheProtocol>)diskCache;
-(const FBGraphQLFieldSetRef)fieldSet;
-(id)initWithDiskCache:(id)arg1 uniqueIdentifier:(id)arg2 fieldSet:(const FBGraphQLFieldSetRef)arg3 countLimit:(unsigned long long)arg4 restoredEdgeFilter:(/*^block*/id)arg5 includeUpdates:(BOOL)arg6 synchronousInitialPageLoad:(BOOL)arg7 deferredLoad:(BOOL)arg8 streamingLoad:(BOOL)arg9 ;
-(id)restoredEdgeFilter;
-(double)persistenceDelay;
-(BOOL)includeUpdates;
-(BOOL)synchronousInitialPageLoad;
-(BOOL)deferredLoad;
-(BOOL)streamingLoad;
-(NSString *)uniqueIdentifier;
-(unsigned long long)countLimit;
@end
