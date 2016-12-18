/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageComposerHudEditListener.h>
#import <Messenger/MNMontageComposerHudNavigationListener.h>

@class FBLazyCreator, NSString;

@interface MNMontageCameraTooltipAutoHideHandler : NSObject <MNMontageComposerHudEditListener, MNMontageComposerHudNavigationListener> {

	FBLazyCreator* _montageCameraTooltipControllerCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)montageComposerHudDidTapClose;
-(void)montageComposerHudDidTapBack;
-(void)montageComposerHudDidTapNextWithBadgeCount:(long long)arg1 ;
-(void)montageComposerHudDidTapCamera;
-(void)montageComposerHudDidTapCanvas;
-(void)montageComposerHudDidTapMedia;
-(void)montageComposerHudDidTapArt;
-(void)montageComposerHudDidTapText;
-(void)montageComposerHudDidTapDrawing;
-(void)montageComposerHudDidChangeTextColorTo:(id)arg1 withValue:(double)arg2 ;
-(void)montageComposerHudDidTapUndo;
-(void)montageComposerHudDidChangeDrawColorTo:(id)arg1 ;
-(void)montageComposerHudDidChangeDrawBrushSize:(double)arg1 ;
-(void)_hideVideoRecordTooltip;
-(void)connectToMontageComposerHudView:(id)arg1 ;
-(id)initWithMontageCameraTooltipControllerCreator:(id)arg1 ;
@end

