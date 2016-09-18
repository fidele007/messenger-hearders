/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/MNAssetsListUpdateListener.h>

@class NSString;

@interface MNAssetsListUpdateListenerAnnouncer : FBAnnouncerBase <MNAssetsListUpdateListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)assetsListDidAppendAsset:(id)arg1 atIndex:(long long)arg2 selectedAssets:(id)arg3 ;
-(void)assetsListDidRemoveAsset:(id)arg1 atIndex:(long long)arg2 selectedAssets:(id)arg3 ;
-(void)assetsListDidReplaceSelectedAssetsWithAssets:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

