/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:41 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPickerViewDelegate.h>
#import <Messenger/MNEmojiDefaultColorPickerViewControllerDelegate.h>
#import <FBSharedFramework/FBClassProvidable.h>

@protocol MNModalPresentation, MNEmojiDefaultColorPickerPresenterDelegate;
@class MNEmojiDefaultColorPickerViewController, MNEmojiDataSource, NSString;

@interface MNEmojiDefaultColorPickerPresenter : NSObject <FBPickerViewDelegate, MNEmojiDefaultColorPickerViewControllerDelegate, FBClassProvidable> {

	id<MNModalPresentation> _modelPresenter;
	MNEmojiDefaultColorPickerViewController* _emojiDefaultColorPickerViewController;
	MNEmojiDataSource* _emojiDataSource;
	id<MNEmojiDefaultColorPickerPresenterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEmojiDefaultColorPickerPresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dismissEmojiDefaultColorPickerIfPresented;
-(id)currentEmojiColorRepresentative;
-(void)presentEmojiDefaultColorPickerWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)initWithModelPresenter:(id)arg1 emojiDataSource:(id)arg2 ;
-(void)_presentEmojiDefaultColorPickerWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)emojiDefaultColorPickerViewControllerWillDismiss:(id)arg1 ;
-(void)emojiDefaultColorPickerViewController:(id)arg1 didPickEmoji:(id)arg2 ;
-(void)presentEmojiDefaultColorPicker;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)setDelegate:(id<MNEmojiDefaultColorPickerPresenterDelegate>)arg1 ;
-(id<MNEmojiDefaultColorPickerPresenterDelegate>)delegate;
@end

