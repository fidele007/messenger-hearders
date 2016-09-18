/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:06 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSFileManager, NSMutableArray, NSString, NSArray;

@interface MQEffectsStorageState : NSObject {

	NSFileManager* _fileManager;
	NSMutableArray* _favouriteIds;
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * path;                     //@synthesize path=_path - In the implementation block
@property (nonatomic,copy,readonly) NSArray * favouriteIds;              //@synthesize favouriteIds=_favouriteIds - In the implementation block
-(NSArray *)favouriteIds;
-(BOOL)isEffectWithIdFavourited:(id)arg1 ;
-(BOOL)favouriteEffectWithId:(id)arg1 ;
-(BOOL)favouriteEffectWithId:(id)arg1 save:(BOOL)arg2 ;
-(long long)unfavouriteEffectWithId:(id)arg1 save:(BOOL)arg2 ;
-(void)moveEffectFromIndex:(long long)arg1 toIndex:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_preload;
-(id)_fetchStateData;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)save;
@end

