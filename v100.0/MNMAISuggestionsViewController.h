/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Messenger/MNMAISuggestionsViewDelegate.h>
#import <Messenger/MNMAISuggestionsViewDataSource.h>

@protocol MNMAISuggestionsViewControllerDelegate;
@class MNMAISuggestionView, FBUserSession, MNMAISuggestionsViewConfiguration, NSArray;

@interface MNMAISuggestionsViewController : UIViewController <MNMAISuggestionsViewDelegate, MNMAISuggestionsViewDataSource> {

	MNMAISuggestionView* _suggestionView;
	FBUserSession* _session;
	MNMAISuggestionsViewConfiguration* _viewConfiguration;
	unsigned long long _newSuggestionCount;
	BOOL _needsPresentationAnimation;
	NSArray* _suggestions;
	long long _suggestionMode;
	id<MNMAISuggestionsViewControllerDelegate> _delegate;

}

@property (nonatomic,copy) NSArray * suggestions;                                                     //@synthesize suggestions=_suggestions - In the implementation block
@property (assign,nonatomic) long long suggestionMode;                                                //@synthesize suggestionMode=_suggestionMode - In the implementation block
@property (assign,nonatomic,__weak) id<MNMAISuggestionsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithUserSession:(id)arg1 suggestionsViewConfiguration:(id)arg2 ;
-(long long)suggestionMode;
-(void)setSuggestionMode:(long long)arg1 ;
-(unsigned long long)numberOfCellsToDisplay;
-(unsigned long long)_newSuggestionCountWithNewSuggestions:(id)arg1 ;
-(void)_updateSuggestionView;
-(void)suggestionsView:(id)arg1 didSelectCellAtIndex:(unsigned long long)arg2 ;
-(void)suggestionsViewDidDismissSuggestions:(id)arg1 ;
-(void)suggestionsView:(id)arg1 didLongPressCellAtIndex:(unsigned long long)arg2 ;
-(void)suggestionsViewUserInteractionDidBegin:(id)arg1 ;
-(void)suggestionsViewUserInteractionDidEnd:(id)arg1 ;
-(id)suggestionForIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfNewCells;
-(void)setDelegate:(id<MNMAISuggestionsViewControllerDelegate>)arg1 ;
-(id<MNMAISuggestionsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
@end

