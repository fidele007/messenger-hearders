/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActionSheetDelegate.h>

@protocol MNGlobalMuteStatusReading, MNGlobalMutePickerDelegate;
@class NSArray, UIActionSheet, NSString;

@interface MNGlobalMutePicker : NSObject <UIActionSheetDelegate> {

	id<MNGlobalMuteStatusReading> _globalMuteStatusReader;
	NSArray* _globalMuteOptions;
	id<MNGlobalMutePickerDelegate> _delegate;
	UIActionSheet* _mutePickerSheet;

}

@property (nonatomic,retain) UIActionSheet * mutePickerSheet;                             //@synthesize mutePickerSheet=_mutePickerSheet - In the implementation block
@property (assign,nonatomic,__weak) id<MNGlobalMutePickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long currentMuteType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMutePickerSheet:(UIActionSheet *)arg1 ;
-(void)_postAccessibilityNotificationForMuteType:(long long)arg1 ;
-(UIActionSheet *)mutePickerSheet;
-(id)initWithGlobalMuteStatusReader:(id)arg1 ;
-(long long)currentMuteType;
-(void)showInView:(id)arg1 fromSourceView:(id)arg2 ;
-(void)selectMuteType:(long long)arg1 ;
-(void)setDelegate:(id<MNGlobalMutePickerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNGlobalMutePickerDelegate>)delegate;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end
