/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:21 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNPhotosDataSource <NSObject>
@required
-(void)addUpdateListener:(id)arg1;
-(void)removeUpdateListener:(id)arg1;
-(long long)numberOfAlbums;
-(long long)numberOfAssetsInAlbum:(id)arg1;
-(id)coverPhotoForAlbum:(id)arg1;
-(id)albumAtIndex:(long long)arg1;
-(BOOL)hasFinishInitialLoadingData;
-(void)loadAssetsForDefaultAlbum;
-(id)defaultAlbum;
-(void)loadAssetsForAllAlbums;
-(id)fetchResultForAlbum:(id)arg1;
-(void)requestPermissionWithSuccessBlock:(/*^block*/id)arg1 failureBlock:(/*^block*/id)arg2;

@end
