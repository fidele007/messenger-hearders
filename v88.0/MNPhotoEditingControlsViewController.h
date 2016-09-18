/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBContainerViewController.h>

@class MNPhotoEditingTextViewController, MNPhotoEditingDrawViewController, UIView, MNPhotoEditInfo, MNPhotoEditingControlsView;

@interface MNPhotoEditingControlsViewController : FBContainerViewController {

	MNPhotoEditingTextViewController* _photoEditingTextViewController;
	MNPhotoEditingDrawViewController* _photoEditingDrawViewController;
	UIView* _mediaView;
	MNPhotoEditInfo* _initialEditInfo;
	MNPhotoEditingControlsView* _editingControlsView;
	long long _currentlySelectedControl;

}

@property (assign,nonatomic) long long currentlySelectedControl;               //@synthesize currentlySelectedControl=_currentlySelectedControl - In the implementation block
@property (nonatomic,readonly) MNPhotoEditInfo * currentEditInfo; 
-(void)_updateEditingState;
-(BOOL)hasAddedDrawing;
-(void)_initializeViewControllers;
-(BOOL)hasAddedText;
-(void)_initializePhotoEditingDrawViewControllerIfNeeded;
-(void)_initializePhotoEditingTextViewControllerIfNeeded;
-(void)_addEditingController:(id)arg1 ;
-(id)initWithMediaView:(id)arg1 initialEditInfo:(id)arg2 ;
-(MNPhotoEditInfo *)currentEditInfo;
-(void)setCurrentlySelectedControl:(long long)arg1 ;
-(void)disableEditingMode;
-(long long)currentlySelectedControl;
-(void)loadView;
-(void)viewDidLoad;
@end
