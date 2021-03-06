/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIButton.h>

@class NSString, UIImage;

@interface FBMediaAddAndTrashButton : UIButton {

	NSString* _addAccessibilityLabel;
	UIImage* _addImage;
	BOOL _canTapDeleteButton;
	NSString* _deleteAccessibilityLabel;
	UIImage* _deleteIconClose;
	UIImage* _deleteIconOpenGray;
	UIImage* _deleteIconOpenWhite;
	BOOL _deleting;

}
-(void)_animatePhotoOverlayDeleting:(BOOL)arg1 ;
-(void)_animateTrashOpening:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 addImage:(id)arg2 closedTrashColor:(id)arg3 canTapDeleteButton:(BOOL)arg4 addAccessibilityLabel:(id)arg5 deleteAccessibilityLabel:(id)arg6 ;
-(void)animateToImageRepresentingCurrentState:(BOOL)arg1 ;
-(void)photoOverlayViewDidBeginDragging;
-(void)photoOverlayViewSelected;
-(void)photoOverlayViewDidEndDragging;
-(void)photoOverlayViewNotSelected;
-(void)photoOverlayViewDidEnterDeleteZone;
-(void)photoOverlayViewDidExitDeleteZone;
-(void)photoOverlayViewDidEnterCircle;
-(void)photoOverlayViewDidExitCircle;
-(void)layoutSubviews;
@end

