/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:08 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSAttributedString, UIImage;

@interface FBSegmentItemBuilder : NSObject {

	NSAttributedString* _title;
	NSAttributedString* _highlightedTitle;
	UIImage* _leftImage;
	unsigned long long _badgeCount;
	UIImage* _rightImage;

}
+(id)segmentItem;
+(id)segmentItemFromExistingSegmentItem:(id)arg1 ;
-(id)withHighlightedTitle:(id)arg1 ;
-(id)withLeftImage:(id)arg1 ;
-(id)withBadgeCount:(unsigned long long)arg1 ;
-(id)withRightImage:(id)arg1 ;
-(id)withTitle:(id)arg1 ;
-(id)build;
@end

