/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:58 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBRichStoryRenderablesStateDelegate <NSObject>
@required
-(void)renderablesState:(id)arg1 didGenerateRenderable:(id)arg2 forStoryBlock:(id)arg3;
-(void)renderablesState:(id)arg1 renderableDidEnterWorkingRangeForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidExitWorkingRangeForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidEnterVisibleViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidExitVisibleViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidEnterInteractiveViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 renderableDidExitInteractiveViewportForStoryBlock:(id)arg2;
-(void)renderablesState:(id)arg1 didCullRenderable:(id)arg2 forStoryBlock:(id)arg3;

@end

