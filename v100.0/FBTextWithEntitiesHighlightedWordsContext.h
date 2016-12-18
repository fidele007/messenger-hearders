/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, UIColor;

@interface FBTextWithEntitiesHighlightedWordsContext : NSObject {

	NSSet* _highlightedWords;
	UIColor* _highlightColor;

}

@property (nonatomic,copy,readonly) NSSet * highlightedWords;              //@synthesize highlightedWords=_highlightedWords - In the implementation block
@property (nonatomic,copy,readonly) UIColor * highlightColor;              //@synthesize highlightColor=_highlightColor - In the implementation block
-(NSSet *)highlightedWords;
-(id)initWithHighlightedWords:(id)arg1 highlightColor:(id)arg2 ;
-(UIColor *)highlightColor;
@end

