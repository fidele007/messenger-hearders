/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBFilterAssetManaging.h>

@class FBDiskCache, NSString;

@interface FBDiskCacheFilterAssetManager : NSObject <FBFilterAssetManaging> {

	FBDiskCache* _diskCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFilterAssetData:(id)arg1 forIdentifier:(id)arg2 ;
-(void)copyFilterAssetAtLocalURL:(id)arg1 forIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)moveFilterAssetAtLocalURL:(id)arg1 forIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)notContainedFilterAssetsIdentifiers:(id)arg1 ;
-(BOOL)containsFilterAssetsForIdentifiers:(id)arg1 ;
-(BOOL)containsFilterAssetForIdentifier:(id)arg1 ;
-(id)localURLForAssetWithIdentifier:(id)arg1 ;
-(id)initWithDiskCache:(id)arg1 ;
-(id)_indicesOfContainedFilterAssetsIdentifiers:(id)arg1 ;
-(void)_updateAccessDatesForFilterAssetsIdentifiers:(id)arg1 atIndices:(id)arg2 ;
-(void)_writeFileOperationOnURL:(/*^block*/id)arg1 localURL:(id)arg2 forIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
@end
