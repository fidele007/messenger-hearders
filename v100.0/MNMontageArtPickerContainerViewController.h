/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Messenger/FBClassProvidable.h>

@protocol FBProvider, MNMontageArtPickerContainerViewControllerDelegate;
@class MNMontageArtPickerViewController, NSString;

@interface MNMontageArtPickerContainerViewController : UIViewController <UINavigationControllerDelegate, FBClassProvidable> {

	id<FBProvider> _artPickerViewControllerProvider;
	MNMontageArtPickerViewController* _artPickerViewController;
	id<MNMontageArtPickerContainerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNMontageArtPickerContainerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)resetSelectedComposition;
-(void)resetSelectedFilterDescriptor;
-(void)montageArtPickerViewController:(id)arg1 didSelectStickerItem:(id)arg2 ;
-(void)montageArtPickerViewControllerDidDismiss:(id)arg1 ;
-(CGSize)sizeOfBoundsForArt;
-(double)montageArtPickerViewControllerBottomPaddingForCollapsedState;
-(id)initWithArtPickerViewControllerProvider:(id)arg1 ;
-(void)setFocusedArtPickerSectionId:(id)arg1 ;
-(void)montageArtPickerViewController:(id)arg1 didSelectArt:(id)arg2 ;
-(void)setDelegate:(id<MNMontageArtPickerContainerViewControllerDelegate>)arg1 ;
-(id<MNMontageArtPickerContainerViewControllerDelegate>)delegate;
-(id)containerView;
-(void)reset;
-(void)loadView;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)_setupView;
@end

