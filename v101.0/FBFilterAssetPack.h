/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBFilterAssetDownloader, NSMutableArray, NSMutableDictionary;

@interface FBFilterAssetPack : NSObject {

	NSArray* _assets;
	NSArray* _assetsIdentifiers;
	FBFilterAssetDownloader* _assetDownloader;
	NSMutableArray* _fetchHandles;
	unsigned long long _assetDownloadsInFlight;
	NSMutableDictionary* _assetDownloadProgress;
	double _downloadProgress;
	unsigned long long _downloadStatus;

}

@property (assign,nonatomic) double downloadProgress;                        //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) unsigned long long downloadStatus;              //@synthesize downloadStatus=_downloadStatus - In the implementation block
-(void)cancelFetch;
-(void)startFetch;
-(id)initWithAssets:(id)arg1 assetDownloader:(id)arg2 ;
-(void)_calculatePackDownloadStatus;
-(void)_onAssetDownloadComplete:(id)arg1 ;
-(void)_onAssetDownloadProgress:(id)arg1 progress:(double)arg2 ;
-(void)_calculatePackDownloadProgress;
-(void)setDownloadStatus:(unsigned long long)arg1 ;
-(double)downloadProgress;
-(void)setDownloadProgress:(double)arg1 ;
-(unsigned long long)downloadStatus;
@end

