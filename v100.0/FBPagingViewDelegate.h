/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPagingViewDelegate <NSObject>
@optional
-(BOOL)pagingView:(id)arg1 shouldRecycleView:(id)arg2;
-(void)pagingView:(id)arg1 didEndDisplayingView:(id)arg2;
-(void)pagingView:(id)arg1 disposeViewData:(id)arg2;
-(void)pagingViewDidFinishReloadData:(id)arg1;
-(void)pagingViewDidStartScroll:(id)arg1 nextIndex:(long long)arg2 direction:(int)arg3;
-(void)pagingViewDidScroll:(id)arg1 pagingPosition:(double)arg2;
-(void)pagingViewDidEndScroll:(id)arg1;
-(void)pagingViewDidEndScrollingAnimation:(id)arg1;
-(void)pagingViewDidChangePageIndex:(id)arg1;
-(void)pagingView:(id)arg1 willLayoutView:(id)arg2;
-(void)pagingView:(id)arg1 didLayoutView:(id)arg2;

@end

