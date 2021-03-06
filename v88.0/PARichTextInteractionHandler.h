/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBOrientationStateDelegate.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/ASTextNodeDelegate.h>

@protocol PARichTextInteractionHandlerDelegate;
@class FBPopoverMenu, ASTextNode, FBOrientationState, FBUserSession, NSString;

@interface PARichTextInteractionHandler : NSObject <FBOrientationStateDelegate, FBPopoverControllerDelegate, ASTextNodeDelegate> {

	FBPopoverMenu* _textMenuController;
	ASTextNode* _selectedTextNode;
	FBOrientationState* _orientationState;
	FBUserSession* _session;
	id<PARichTextInteractionHandlerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)defaultMinimumLongPressDuration;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)initWithSession:(id)arg1 delegate:(id)arg2 ;
-(void)orientationState:(id)arg1 willBeginRotationToOrientation:(long long)arg2 fromOrientation:(long long)arg3 animationConfig:(SCD_Struct_FB94)arg4 ;
-(BOOL)orientationState:(id)arg1 shouldUpdateStatusBarToInterfaceOrientation:(long long)arg2 ;
-(void)textNode:(id)arg1 tappedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 textRange:(NSRange)arg5 ;
-(void)textNode:(id)arg1 longPressedLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 textRange:(NSRange)arg5 ;
-(void)textNodeTappedTruncationToken:(id)arg1 ;
-(BOOL)textNode:(id)arg1 shouldHighlightLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 ;
-(BOOL)textNode:(id)arg1 shouldLongPressLinkAttribute:(id)arg2 value:(id)arg3 atPoint:(CGPoint)arg4 ;
-(void)dismissMenuPopoverAnimated:(BOOL)arg1 ;
-(id)_composerIntentTargetForLink:(id)arg1 ;
-(id)_composerIntentTargetForText:(id)arg1 ;
-(id)_composerIntentTargetWithPrefilledString:(id)arg1 sharedURL:(id)arg2 shareableID:(id)arg3 shareableType:(id)arg4 ;
-(id)_textToHighlightForTextNode:(id)arg1 atPoint:(CGPoint)arg2 textRange:(NSRange)arg3 ;
-(id)_menuItemsForRichTextNode:(id)arg1 copyText:(id)arg2 target:(id)arg3 point:(CGPoint)arg4 ;
-(CGPoint)_popoverPresentationPointForTextNode:(id)arg1 highlightRange:(NSRange)arg2 touchPoint:(CGPoint)arg3 ;
-(void)_presentPopoverForTextNode:(id)arg1 withMenuItems:(id)arg2 atPoint:(CGPoint)arg3 ;
@end

