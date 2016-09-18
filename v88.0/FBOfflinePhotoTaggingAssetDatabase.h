/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:54 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Messenger/Messenger-Structs.h>
@class NSObject, NSString;

@interface FBOfflinePhotoTaggingAssetDatabase : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	sqlite3Ref _db;
	sqlite3_stmtRef _selectStmt;
	sqlite3_stmtRef _insertStmt;
	NSString* _dbPath;

}

@property (nonatomic,copy) NSString * dbPath;              //@synthesize dbPath=_dbPath - In the implementation block
-(void)_freeResouce;
-(id)_photoAssetFromData:(id)arg1 ;
-(id)_paramValueForArray:(id)arg1 ;
-(void)_insertPhotoAsset:(id)arg1 ;
-(id)initWithDBPath:(id)arg1 ;
-(void)fetchAssetByAssetID:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchAssetsByAssetIDs:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)insertPhotoAssets:(id)arg1 ;
-(void)cleanAssetsOlderThan:(unsigned long long)arg1 ;
-(void)insertNeedResetAsset:(id)arg1 ;
-(void)cleanAllNeedResetAssets;
-(void)_openDatabase;
-(void)dealloc;
-(void)deleteAssets:(id)arg1 ;
-(NSString *)dbPath;
-(void)setDbPath:(NSString *)arg1 ;
@end

