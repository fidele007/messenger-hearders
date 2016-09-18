/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBRichStoryViewStateDelegate.h>

@protocol FBRichStoryRendererDelegate;
@class FBRichStoryViewState, NSSet, NSString;

@interface FBRichStoryRenderer : NSObject <FBRichStoryViewStateDelegate> {

	FBRichStoryViewState* _viewState;
	id<FBRichStoryRendererDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBRichStoryRendererDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBRichStoryFrameSetter> frameSetter; 
@property (nonatomic,copy,readonly) NSSet * visibleBlocks; 
@property (nonatomic,copy,readonly) NSSet * workingBlocks; 
@property (assign,nonatomic) CGRect workingViewport; 
@property (assign,nonatomic) CGRect interactiveViewport; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canRenderRenderable:(id)arg1 ;
-(void)setWorkingViewport:(CGRect)arg1 ;
-(void)cullRenderables;
-(id)existingRenderableForRichStoryBlock:(id)arg1 ;
-(NSSet *)workingBlocks;
-(void)layoutWorkingRenderables;
-(void)layoutCurrentRenderables;
-(CGRect)workingViewport;
-(CGRect)interactiveViewport;
-(void)setInteractiveViewport:(CGRect)arg1 ;
-(void)setInteractiveViewport:(CGRect)arg1 withDelay:(double)arg2 ;
-(void)cullStoryBlock:(id)arg1 ;
-(void)setFrameSetter:(id<FBRichStoryFrameSetter>)arg1 ;
-(id<FBRichStoryFrameSetter>)frameSetter;
-(void)updateWorkingRenderables;
-(NSSet *)visibleBlocks;
-(void)layoutBlock:(id)arg1 ;
-(void)storyViewState:(id)arg1 didGenerateRenderable:(id)arg2 forBlock:(id)arg3 ;
-(void)storyViewState:(id)arg1 didCullRenderable:(id)arg2 forBlock:(id)arg3 ;
-(void)storyViewState:(id)arg1 storyBlockEnteredWorkingRange:(id)arg2 ;
-(void)storyViewState:(id)arg1 storyBlockExitedWorkingRange:(id)arg2 ;
-(void)storyViewState:(id)arg1 storyBlockEnteredVisibleViewport:(id)arg2 ;
-(void)storyViewState:(id)arg1 storyBlockExitedVisibleViewport:(id)arg2 ;
-(void)storyViewState:(id)arg1 storyBlockEnteredInteractiveViewport:(id)arg2 ;
-(void)storyViewState:(id)arg1 storyBlockExitedInteractiveViewport:(id)arg2 ;
-(id)initWithFrameSetter:(id)arg1 generator:(id)arg2 renderQueue:(id)arg3 ;
-(void)layoutRenderable:(id)arg1 withAttributes:(id)arg2 ;
-(CGSize)measureRenderable:(id)arg1 withConstrainingSize:(CGSize)arg2 ;
-(void)setDelegate:(id<FBRichStoryRendererDelegate>)arg1 ;
-(id<FBRichStoryRendererDelegate>)delegate;
@end

