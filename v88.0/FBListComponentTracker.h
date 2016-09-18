/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:05 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBListComponentTrackerUpdate.h>

@class NSString;

@interface FBListComponentTracker : NSObject <FBListComponentTrackerUpdate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)componentWillDisappear;
-(void)componentDidAppear;
-(void)didScrollToBottom;
-(void)didScrollToTop;
-(void)didPullToRefresh;
-(void)didRequestReload;
-(void)didRequestPrefetchingData;
-(void)componentWillAppear;
-(void)componentDidDisappear;
-(id)initWithComponentGenerationBlock:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 userInfoMergeBlockMap:(id)arg4 options:(const FBListComponentTrackerOptions*)arg5 ;
-(id)initWithComponentGenerationBlock:(/*^block*/id)arg1 componentControllerContext:(id)arg2 userInfoMergeBlockMap:(id)arg3 options:(const FBListComponentTrackerOptions*)arg4 ;
-(void)readyForChangesets;
-(void)setComponentGenerationBlock:(/*^block*/id)arg1 changesetWriter:(id)arg2 componentControllerContext:(id)arg3 ;
-(void)setComponentGenerationBlock:(/*^block*/id)arg1 ;
-(void)addTrackerStateListener:(id)arg1 ;
-(void)removeTrackerStateListener:(id)arg1 ;
-(long long)numberOfSections;
@end

