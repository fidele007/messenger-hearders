/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPaymentsSectionBasedTableViewController.h>
#import <Messenger/FBPaymentsTextEditWithCharacterCountViewDelegate.h>
#import <Messenger/FBPaymentsEventListener.h>
#import <Messenger/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsCustomNoteViewControllerDelegate;
@class FBPaymentsTextEditWithCharacterCountView, NSString, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsCustomNoteViewController : FBPaymentsSectionBasedTableViewController <FBPaymentsTextEditWithCharacterCountViewDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBPaymentsTextEditWithCharacterCountView* _textEditWithCharacterCountView;
	NSString* _prefilledNote;
	NSString* _placeholderText;
	unsigned long long _lengthLimit;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsCustomNoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsCustomNoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)_onCancel;
-(void)_setupTextInputSection;
-(void)_onSave;
-(void)textEditWithCharacterCountViewDidUpdate:(id)arg1 ;
-(void)textEditWithCharacterCountViewDidBeginEditing:(id)arg1 ;
-(id)initWithPrefilledNote:(id)arg1 placeholderText:(id)arg2 lengthLimit:(unsigned long long)arg3 ;
-(void)setDelegate:(id<FBPaymentsCustomNoteViewControllerDelegate>)arg1 ;
-(id<FBPaymentsCustomNoteViewControllerDelegate>)delegate;
-(void)viewDidLoad;
-(void)_updateActionButton;
-(void)_configureNavigationBar;
@end

