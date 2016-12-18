/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession, FBMStickerPackPromoter, NSMutableArray, NSMutableDictionary;

@interface FBMStickerStoreManager : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _fetchRequest;
	FBMStickerPackPromoter* _stickerPackPromoter;
	unsigned long long _layoutIdiom;
	NSMutableArray* _availableStickerPacks;
	NSMutableArray* _featuredStickerPacks;
	NSMutableDictionary* _stickerPackMap;
	double _lastSyncTimestamp;
	unsigned long long _fetchState;
	double _lastestUpdateTimestamp;

}

@property (assign,nonatomic) unsigned long long fetchState;              //@synthesize fetchState=_fetchState - In the implementation block
@property (assign,nonatomic) double lastestUpdateTimestamp;              //@synthesize lastestUpdateTimestamp=_lastestUpdateTimestamp - In the implementation block
-(void)_applyServiceConfiguration:(id)arg1 ;
-(void)cancelFetch;
-(void)_handleDownloadResponse:(id)arg1 ;
-(id)stickerPackWithFbId:(unsigned long long)arg1 ;
-(unsigned long long)numberOfNewPacksPublishedSince:(double)arg1 ;
-(id)featuredStickerPacks;
-(id)availableStickerPacks;
-(BOOL)needsFetch;
-(void)_handleDownloadError:(id)arg1 ;
-(void)_fetchAvailableStickerPacks;
-(void)_reloadStickerPacksWithResponse:(id)arg1 ;
-(void)_updateLastestUpdateTimestamp;
-(void)_finishFetch;
-(void)_downloadPromotedAndAutoDownloadablePacks;
-(void)setLastestUpdateTimestamp:(double)arg1 ;
-(void)_clearStickerPacks;
-(void)_loadStickerPacks:(id)arg1 ;
-(id)initWithSession:(id)arg1 stickerPackPromoter:(id)arg2 layoutIdiom:(unsigned long long)arg3 ;
-(double)lastestUpdateTimestamp;
-(void)dealloc;
-(unsigned long long)fetchState;
-(void)setFetchState:(unsigned long long)arg1 ;
-(BOOL)fetch:(BOOL)arg1 ;
@end

