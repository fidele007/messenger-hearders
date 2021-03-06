/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:36 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBVideoCreativeToolsApplierListenerAnnouncer;


@protocol FBVideoCreativeToolsApplier <NSObject>
@property (assign,nonatomic,__weak) id<FBVideoCreativeToolsApplierVideoOutputDelegate> cameraOutputDelegate; 
@property (nonatomic,readonly) FBVideoCreativeToolsApplierListenerAnnouncer * applierAnnouncer; 
@property (assign,nonatomic) unsigned long long selectedFilterIndex; 
@property (assign,nonatomic) unsigned long long numberOfOverlayFilters; 
@required
-(void)replaceFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2;
-(void)sendFilterCommand:(id)arg1 toFilterAtIndex:(unsigned long long)arg2;
-(void)dispatchOnCameraThread:(/*^block*/id)arg1;
-(id)getRenderQueue;
-(id<FBVideoCreativeToolsApplierVideoOutputDelegate>)cameraOutputDelegate;
-(void)setCameraOutputDelegate:(id)arg1;
-(FBVideoCreativeToolsApplierListenerAnnouncer *)applierAnnouncer;
-(unsigned long long)selectedFilterIndex;
-(void)setSelectedFilterIndex:(unsigned long long)arg1;
-(unsigned long long)numberOfOverlayFilters;
-(void)setNumberOfOverlayFilters:(unsigned long long)arg1;
-(void)removeFilterAtIndex:(unsigned long long)arg1;
-(void)insertFilter:(id)arg1 atIndex:(unsigned long long)arg2;

@end

