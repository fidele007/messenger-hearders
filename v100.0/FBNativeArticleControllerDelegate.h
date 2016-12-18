/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNativeArticleControllerDelegate <NSObject,FBAnalyticsTrackingCodesDataSource,FBIntentHandler,FBModalPresentationSource>
@optional
-(void)nativeArticleController:(id)arg1 scrollViewWillBeginDragging:(id)arg2;
-(void)nativeArticleController:(id)arg1 scrollViewDidScroll:(id)arg2;
-(void)nativeArticleController:(id)arg1 scrollViewWillEndDragging:(id)arg2 withVelocity:(CGPoint)arg3 targetContentOffset:(inout CGPoint*)arg4;
-(void)nativeArticleController:(id)arg1 scrollViewDidEndDecelarating:(id)arg2;
-(void)nativeArticleController:(id)arg1 scrollViewDidEndDragging:(id)arg2 willDecelerate:(BOOL)arg3;
-(void)nativeArticleController:(id)arg1 didUpdateContentSize:(CGSize)arg2;
-(void)nativeArticleController:(id)arg1 didFinishLayoutWithSize:(CGSize)arg2;
-(void)nativeArticleController:(id)arg1 willEnterFullscreenStoryBlock:(id)arg2 withAnimation:(SCD_Struct_FB70)arg3;
-(void)nativeArticleController:(id)arg1 didExitFullscreenStoryBlock:(id)arg2;
-(void)nativeArticleController:(id)arg1 willBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 trackingTouches:(BOOL)arg4;
-(void)nativeArticleController:(id)arg1 didBeginTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3;
-(void)nativeArticleController:(id)arg1 didUpdateTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 withProgress:(double)arg4;
-(void)nativeArticleController:(id)arg1 willFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3 animationConfig:(SCD_Struct_FB70)arg4;
-(void)nativeArticleController:(id)arg1 didFinishTransitionToPresentationAttributes:(id)arg2 forStoryBlock:(id)arg3;

@required
-(id)transitionCoordinateViewForNativeArticleController:(id)arg1;

@end

