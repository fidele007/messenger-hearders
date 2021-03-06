/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:53 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBMediaCreativeToolsModelLoaderDelegate;
@class FBUserSession, NSString, FBScenePath, NSMutableArray;

@interface FBMediaCreativeToolsModelLoader : NSObject {

	FBUserSession* _session;
	NSString* _videoID;
	FBScenePath* _scenePath;
	id<FBServiceTransactionMutating> _transaction;
	id<FBMediaCreativeToolsModelLoaderDelegate> _delegate;
	BOOL _masksEnabled;
	NSMutableArray* _filters;
	NSMutableArray* _drawColors;
	NSMutableArray* _assetCatalog;
	NSMutableArray* _masks;
	NSMutableArray* _mlModelAssets;

}
-(void)_configureLoad:(id)arg1 ;
-(void)_loadSucceededWithResponse:(id)arg1 finalStatus:(id)arg2 ;
-(void)_loadFailedWithError:(id)arg1 finalStatus:(id)arg2 ;
-(id)initWithSession:(id)arg1 videoID:(id)arg2 masksEnabled:(BOOL)arg3 scenePath:(id)arg4 delegate:(id)arg5 ;
-(void)load;
@end

