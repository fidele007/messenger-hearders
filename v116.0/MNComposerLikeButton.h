/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNComposerActionButton.h>
#import <Messenger/MNLikePressing.h>

@class MNLikePressingListenerAnnouncer, NSString;

@interface MNComposerLikeButton : MNComposerActionButton <MNLikePressing> {

	MNLikePressingListenerAnnouncer* _likePressingAnnouncer;
	BOOL _hasDeepPressed;
	NSString* _customLikeEmoji;
	double _customLikeEmojiFontSize;

}

@property (nonatomic,copy) NSString * customLikeEmoji;                    //@synthesize customLikeEmoji=_customLikeEmoji - In the implementation block
@property (assign,nonatomic) double customLikeEmojiFontSize;              //@synthesize customLikeEmojiFontSize=_customLikeEmojiFontSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCustomLikeEmoji:(NSString *)arg1 ;
-(double)customLikeEmojiFontSize;
-(void)setCustomLikeEmojiFontSize:(double)arg1 ;
-(id)likeSourceName;
-(void)addLikePressingListener:(id)arg1 ;
-(void)_updateCustomLikeEmoji;
-(BOOL)_canDeepPress;
-(void)_updateCustomLikeEmojiUnsafe;
-(NSString *)customLikeEmoji;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end

