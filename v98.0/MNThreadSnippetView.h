/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:54 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <Messenger/MNHighlighting.h>

@class UILabel, FBLazyCreator, MNFacepileView;

@interface MNThreadSnippetView : UIView <MNHighlighting> {

	UILabel* _textSnippetLabel;
	FBLazyCreator* _presenceImageViewCreator;
	FBLazyCreator* _lazyFacepileCreator;
	BOOL _usesTextSnippetFastpath;

}

@property (nonatomic,readonly) MNFacepileView * activeMembersFacepileView; 
@property (assign,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL highlighted; 
-(id)initWithLoadViewsLazily:(BOOL)arg1 usesTextSnippetFastpath:(BOOL)arg2 ;
-(void)configureWithInboxThreadRow:(id)arg1 snippetBehavior:(id)arg2 ;
-(MNFacepileView *)activeMembersFacepileView;
-(void)_layoutSnippetLabelRelativeTo:(double)arg1 ;
-(void)_resetSnippetViewContents;
-(void)_setupTextSnippetLabelForThreadRow:(id)arg1 ;
-(void)_hideActiveMembersFacepileView:(BOOL)arg1 ;
-(void)_setupTextSnippetLabelForActiveMembers:(long long)arg1 threadRow:(id)arg2 ;
-(void)_setupTextSnippetLabelForAttributedString:(id)arg1 requiresEmojiFix:(BOOL)arg2 threadRow:(id)arg3 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
@end
