/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UITableView, FBComposerMentionDecorator;

@interface FBComposerMentionKeyboardController : NSObject {

	UITableView* _mentionsView;
	FBComposerMentionDecorator* _mentionDecorator;
	long long _currentHighlightedMentionIndex;

}
+(BOOL)isKeyboardSupportEnabled;
+(id)newWithMentionView:(id)arg1 decorator:(id)arg2 ;
+(void)setIsKeyboardSupportEnabled:(BOOL)arg1 ;
-(void)selectMentionAtIndex:(long long)arg1 ;
-(id)initWithMentionView:(id)arg1 decorator:(id)arg2 ;
-(BOOL)isMentionPickerShown;
-(long long)_maxVisibleMentionIndex;
-(void)_selectMention:(long long)arg1 ;
-(void)selectNextMention;
-(void)selectPreviousMention;
-(void)commitSelectedMention;
-(void)reset;
@end
