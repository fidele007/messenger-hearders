/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNMontageMessageController.h>

@protocol MNMontageMessageControllerDelegate;
@class FBLazyCreator, MNAppMessage, NSString;

@interface MNMontageTextController : NSObject <MNMontageMessageController> {

	FBLazyCreator* _textViewCreator;
	MNAppMessage* _message;
	BOOL _hasRequestedPlaying;
	BOOL _hasStartedPlaying;
	id<MNMontageMessageControllerDelegate> _delegate;
	unsigned long long _requestedPlayingTime;
	unsigned long long _startedPlayingTime;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<MNMontageMessageControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestedPlaying;                                          //@synthesize hasRequestedPlaying=_hasRequestedPlaying - In the implementation block
@property (nonatomic,readonly) BOOL hasStartedPlaying;                                            //@synthesize hasStartedPlaying=_hasStartedPlaying - In the implementation block
@property (nonatomic,readonly) unsigned long long requestedPlayingTime;                           //@synthesize requestedPlayingTime=_requestedPlayingTime - In the implementation block
@property (nonatomic,readonly) unsigned long long startedPlayingTime;                             //@synthesize startedPlayingTime=_startedPlayingTime - In the implementation block
-(id)initWithText:(id)arg1 message:(id)arg2 ;
-(id)messageView;
-(BOOL)updatesProgressManually;
-(void)preloadContent;
-(BOOL)downloadContentAndPlay;
-(BOOL)hasRequestedPlaying;
-(BOOL)hasStartedPlaying;
-(unsigned long long)requestedPlayingTime;
-(unsigned long long)startedPlayingTime;
-(void)setDelegate:(id<MNMontageMessageControllerDelegate>)arg1 ;
-(id<MNMontageMessageControllerDelegate>)delegate;
-(double)duration;
-(void)stop;
-(id)message;
-(void)resume;
-(void)pause;
@end

