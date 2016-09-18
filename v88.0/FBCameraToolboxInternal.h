/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBCameraFlashListenerAnnouncer, UIView;


@protocol FBCameraToolboxInternal <NSObject>
@property (nonatomic,readonly) id<FBCameraGenericEvent> closeEvent; 
@property (nonatomic,readonly) FBCameraFlashListenerAnnouncer * flashAnnouncer; 
@property (nonatomic,readonly) UIView * previewView; 
@property (nonatomic,readonly) id<FBCameraGenericEvent> previewWillAppearEvent; 
@property (nonatomic,readonly) id<FBCameraGenericEvent> previewWillDisappearEvent; 
@required
-(FBCameraFlashListenerAnnouncer *)flashAnnouncer;
-(id<FBCameraGenericEvent>)closeEvent;
-(id<FBCameraGenericEvent>)previewWillAppearEvent;
-(id<FBCameraGenericEvent>)previewWillDisappearEvent;
-(UIView *)previewView;

@end

