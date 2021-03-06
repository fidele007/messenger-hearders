/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:19 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNLocationPickerPresenterDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNBotComposerLocationPickerDelegate;
@class MNLocationPickerPresenter, MNLocationPickerViewControllerFactory, MNLocationPickerViewController, NSString;

@interface MNBotComposerLocationPickerCoordinator : NSObject <MNLocationPickerPresenterDelegate, FBClassProvidable> {

	MNLocationPickerPresenter* _locationPickerPresenter;
	MNLocationPickerViewControllerFactory* _locationPickerViewControllerFactory;
	MNLocationPickerViewController* _locationPickerViewController;
	id<MNBotComposerLocationPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNBotComposerLocationPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)presentLocationPicker;
-(void)locationPickerPresenter:(id)arg1 didSendWithLocationAttachmentData:(id)arg2 ;
-(void)locationPickerPresenter:(id)arg1 didDismissAlertView:(id)arg2 ;
-(void)locationPickerPresenterDidDismiss:(id)arg1 ;
-(void)setDelegate:(id<MNBotComposerLocationPickerDelegate>)arg1 ;
-(id<MNBotComposerLocationPickerDelegate>)delegate;
@end

