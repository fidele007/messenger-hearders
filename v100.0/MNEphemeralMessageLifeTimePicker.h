/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBClassProvidable.h>

@protocol MNEphemeralMessageLifeTimePickerDelegate;
@class UIAlertController, NSArray, MNNavigationCoordinator, NSString;

@interface MNEphemeralMessageLifeTimePicker : NSObject <FBClassProvidable> {

	UIAlertController* _presentedAlertController;
	NSArray* _ephemeralityOptions;
	MNNavigationCoordinator* _navigationCoordinator;
	NSString* _source;
	id<MNEphemeralMessageLifeTimePickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNEphemeralMessageLifeTimePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)initWithNavigationCoordinator:(id)arg1 ;
-(void)_showAlertControllerFromRect:(CGRect)arg1 inView:(id)arg2 withOptions:(id)arg3 ;
-(void)_pickEphemeralityAndLogEvent:(long long)arg1 ;
-(void)_logEphemeralityConfirmEvent;
-(void)showFromRect:(CGRect)arg1 inView:(id)arg2 withCurrentEphemerality:(long long)arg3 pickerSource:(long long)arg4 onlyShowDisableOption:(BOOL)arg5 ;
-(void)setDelegate:(id<MNEphemeralMessageLifeTimePickerDelegate>)arg1 ;
-(id<MNEphemeralMessageLifeTimePickerDelegate>)delegate;
-(void)dismissAnimated:(BOOL)arg1 ;
@end

