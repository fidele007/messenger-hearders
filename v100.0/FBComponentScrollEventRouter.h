/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBComponentDataSourceScrollEventHandler;
@class FBComponentScrollEventListenerAnnouncer, NSString;

@interface FBComponentScrollEventRouter : NSObject <UIScrollViewDelegate> {

	FBComponentScrollEventListenerAnnouncer* _announcer;
	id<FBComponentDataSourceScrollEventHandler> _scrollEventHandler;

}

@property (assign,nonatomic,__weak) id<FBComponentDataSourceScrollEventHandler> scrollEventHandler;              //@synthesize scrollEventHandler=_scrollEventHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)announcer;
-(id<FBComponentDataSourceScrollEventHandler>)scrollEventHandler;
-(void)setScrollEventHandler:(id<FBComponentDataSourceScrollEventHandler>)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewWillBeginDecelerating:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

