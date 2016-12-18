/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString, UIImage;

@interface FBSegmentItem : FBValueObject <NSCopying> {

	NSAttributedString* _title;
	NSAttributedString* _highlightedTitle;
	UIImage* _leftImage;
	unsigned long long _badgeCount;
	UIImage* _rightImage;

}

@property (nonatomic,copy,readonly) NSAttributedString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * highlightedTitle;              //@synthesize highlightedTitle=_highlightedTitle - In the implementation block
@property (nonatomic,copy,readonly) UIImage * leftImage;                                //@synthesize leftImage=_leftImage - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeCount;                           //@synthesize badgeCount=_badgeCount - In the implementation block
@property (nonatomic,copy,readonly) UIImage * rightImage;                               //@synthesize rightImage=_rightImage - In the implementation block
-(id)initWithTitleString:(id)arg1 ;
-(id)initWithTitle:(id)arg1 highlightedTitle:(id)arg2 ;
-(id)initWithTitleString:(id)arg1 leftImage:(id)arg2 ;
-(id)initWithTitleString:(id)arg1 rightImage:(id)arg2 ;
-(id)initWithTitleString:(id)arg1 badgeCount:(long long)arg2 ;
-(id)initWithTitleString:(id)arg1 highlightedTitleString:(id)arg2 ;
-(id)initWithTitle:(id)arg1 highlightedTitle:(id)arg2 leftImage:(id)arg3 badgeCount:(unsigned long long)arg4 rightImage:(id)arg5 ;
-(NSAttributedString *)highlightedTitle;
-(UIImage *)rightImage;
-(UIImage *)leftImage;
-(NSAttributedString *)title;
-(id)initWithTitle:(id)arg1 ;
-(unsigned long long)badgeCount;
@end
