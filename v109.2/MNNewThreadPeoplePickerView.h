/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:32 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/MNPeoplePickerView.h>

@protocol MNNewThreadPeoplePickerViewDelegate;
@class UIView, MNTouchBeganGestureRecognizer;

@interface MNNewThreadPeoplePickerView : MNPeoplePickerView {

	UIView* _suggestionsOverlayView;
	MNTouchBeganGestureRecognizer* _dismissalRecognizer;
	id<MNNewThreadPeoplePickerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNNewThreadPeoplePickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL graysOutSuggestions; 
-(void)_didDismissSuggetsionsOverlay;
-(BOOL)graysOutSuggestions;
-(void)setGraysOutSuggestions:(BOOL)arg1 ;
-(void)setGraysOutSuggestions:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MNNewThreadPeoplePickerViewDelegate>)arg1 ;
-(void)dealloc;
-(id<MNNewThreadPeoplePickerViewDelegate>)delegate;
@end

