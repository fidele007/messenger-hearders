/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNContactSearchPeopleCellActionButtonControlling.h>

@class NSArray, FBCache;

@interface MNContactSearchPeopleCellChainedActionButtonController : NSObject <MNContactSearchPeopleCellActionButtonControlling> {

	NSArray* _components;
	FBCache* _resultToControllerCache;

}
-(BOOL)enabledStateForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)configurationForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(void)peopleCell:(id)arg1 didTapActionButtonDisplayingResult:(id)arg2 preppedDataSet:(id)arg3 ;
-(id)_controllerToUseForResult:(id)arg1 preppedDataSet:(id)arg2 ;
-(id)initWithComponents:(id)arg1 ;
@end
