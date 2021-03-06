/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInteractiveMediaNodeController.h>

@class FBInteractivePhotoNode;

@interface FBInteractivePhotoNodeController : FBInteractiveMediaNodeController

@property (assign,nonatomic,__weak) id<FBInteractivePhotoNodeControllerDelegate> delegate; 
@property (nonatomic,readonly) FBInteractivePhotoNode * photoNode; 
-(id)aspectFillKeyFrame;
-(FBInteractivePhotoNode *)photoNode;
-(void)_displayedImage:(id)arg1 ;
-(void)willRenderInteractionMode:(long long)arg1 fromInteractionMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)didRenderInteractionMode:(long long)arg1 ;
-(void)imageNode:(id)arg1 didUpdateImage:(id)arg2 fromImage:(id)arg3 ;
-(void)imageNode:(id)arg1 displayedImage:(id)arg2 ;
-(void)imageNodeWillDisappear:(id)arg1 ;
-(void)setMediaNode:(id)arg1 ;
@end

