/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:59 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/MNContactSearchTableViewCellProviding.h>

@class MNContactSearchTableViewPeopleCellProviderInjector, MNPeopleCellStyle, NSMutableArray, NSString;

@interface MNContactSearchTableViewPeopleCellProvider : NSObject <MNContactSearchTableViewCellProviding> {

	MNContactSearchTableViewPeopleCellProviderInjector* _injector;
	MNPeopleCellStyle* _style;
	NSMutableArray* _delegateForwarders;
	MNBadgeOptions _badgeOptions;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)reuseIdentifierForResult:(id)arg1 withData:(id)arg2 ;
-(id)newCellWithReuseIdentifier:(id)arg1 ;
-(void)configureCell:(id)arg1 forDisplayingResult:(id)arg2 inSection:(id)arg3 withData:(id)arg4 ;
-(double)heightForCellDisplayingResult:(id)arg1 withData:(id)arg2 constrainingWidth:(double)arg3 withIndexPath:(id)arg4 ;
-(id)_viewModelForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_mainLabelTextForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_detailLabelTextForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)_threadDisplayNameForSummary:(id)arg1 userSet:(id)arg2 ;
-(id)_detailLabelTextForUser:(id)arg1 metadata:(id)arg2 ;
-(id)_participantsListForGroupThreadSummary:(id)arg1 userSet:(id)arg2 ;
-(id)initWithInjector:(id)arg1 ;
@end

