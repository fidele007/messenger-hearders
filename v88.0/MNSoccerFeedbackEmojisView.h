/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSArray;

@interface MNSoccerFeedbackEmojisView : UIView {

	double _ballTop;
	double _ballBottom;
	NSArray* _scoredEmojiTexts;
	NSArray* _missedEmojiTexts;

}
-(void)setBallTop:(double)arg1 bottom:(double)arg2 ;
-(void)showFeedbackForScoreValue:(BOOL)arg1 location:(CGPoint)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end
