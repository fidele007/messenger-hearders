/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBProviderMapData, MNUserStore, MNRoomShareWhitelistContactsFetcherFactory, FBMGroupThreadKey;

@interface MNRoomShareWhitelistContactsRetrieverInjector : NSObject {

	FBProviderMapData* _mapData;
	MNUserStore* _userStore;
	MNRoomShareWhitelistContactsFetcherFactory* _whitelistContactsFetcherFactory;
	FBMGroupThreadKey* _groupThreadKey;

}

@property (nonatomic,readonly) MNUserStore * userStore;                                                                   //@synthesize userStore=_userStore - In the implementation block
@property (nonatomic,readonly) MNRoomShareWhitelistContactsFetcherFactory * whitelistContactsFetcherFactory;              //@synthesize whitelistContactsFetcherFactory=_whitelistContactsFetcherFactory - In the implementation block
@property (nonatomic,readonly) FBMGroupThreadKey * groupThreadKey;                                                        //@synthesize groupThreadKey=_groupThreadKey - In the implementation block
-(FBMGroupThreadKey *)groupThreadKey;
-(MNUserStore *)userStore;
-(id)initWithProviderMapData:(id)arg1 groupThreadKey:(id)arg2 ;
-(MNRoomShareWhitelistContactsFetcherFactory *)whitelistContactsFetcherFactory;
@end

