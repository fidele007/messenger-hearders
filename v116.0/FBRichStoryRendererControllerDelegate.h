/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryRendererControllerDelegate <NSObject>
@optional
-(void)rendererController:(id)arg1 didUpdateContentSize:(CGSize)arg2;
-(void)rendererController:(id)arg1 didFinishLayoutWithSize:(CGSize)arg2;
-(void)rendererController:(id)arg1 didGenerateBlockController:(id)arg2 forStoryBlock:(id)arg3;
-(void)rendererController:(id)arg1 didCullBlockController:(id)arg2 forStoryBlock:(id)arg3;
-(void)rendererController:(id)arg1 storyBlockEnteredVisibleViewport:(id)arg2;
-(void)rendererController:(id)arg1 storyBlockExitedVisibleViewport:(id)arg2;
-(void)rendererController:(id)arg1 storyBlockEnteredInteractiveViewport:(id)arg2;
-(void)rendererController:(id)arg1 storyBlockExitedInteractiveViewport:(id)arg2;

@required
-(void)rendererController:(id)arg1 addRenderableToRoot:(id)arg2 forStoryBlock:(id)arg3;
-(void)rendererController:(id)arg1 removeRenderableFromRoot:(id)arg2 forStoryBlock:(id)arg3;

@end

