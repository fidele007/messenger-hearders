/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/FBKeyboardObserverDelegate.h>

@class MNPhotoEditingTextView, UIView, MNPhotoEditingTextEdit, FBKeyboardObserver, NSString;

@interface MNPhotoEditingTextViewController : UIViewController <FBKeyboardObserverDelegate> {

	MNPhotoEditingTextView* _photoEditingTextView;
	UIView* _originalMediaView;
	MNPhotoEditingTextEdit* _initialTextEdit;
	FBKeyboardObserver* _keyboardObserver;
	BOOL _isEditing;

}

@property (assign,nonatomic) BOOL isEditing;                        //@synthesize isEditing=_isEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)_updateKeyboardWithBeginFrame:(CGRect)arg1 endFrame:(CGRect)arg2 duration:(double)arg3 curve:(long long)arg4 ;
-(void)setIsEditing:(BOOL)arg1 ;
-(id)textEdit;
-(BOOL)hasAddedText;
-(id)initWithOriginalMediaView:(id)arg1 initialTextEdit:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(BOOL)isEditing;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

