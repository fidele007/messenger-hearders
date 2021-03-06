/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:47 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSOrderedSet;

@interface MNGroupsTableViewConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowSectionHeaders;
	BOOL _shouldShowSeeAllRow;
	BOOL _showActionButtons;
	BOOL _shouldShowUpdatesSection;
	NSDictionary* _maxNumberOfRowsBySection;
	NSOrderedSet* _orderedSections;

}

@property (nonatomic,copy,readonly) NSDictionary * maxNumberOfRowsBySection;              //@synthesize maxNumberOfRowsBySection=_maxNumberOfRowsBySection - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * orderedSections;                       //@synthesize orderedSections=_orderedSections - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSectionHeaders;                             //@synthesize shouldShowSectionHeaders=_shouldShowSectionHeaders - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowSeeAllRow;                                  //@synthesize shouldShowSeeAllRow=_shouldShowSeeAllRow - In the implementation block
@property (nonatomic,readonly) BOOL showActionButtons;                                    //@synthesize showActionButtons=_showActionButtons - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowUpdatesSection;                             //@synthesize shouldShowUpdatesSection=_shouldShowUpdatesSection - In the implementation block
-(id)initWithMaxNumberOfRowsBySection:(id)arg1 orderedSections:(id)arg2 shouldShowSectionHeaders:(BOOL)arg3 shouldShowSeeAllRow:(BOOL)arg4 showActionButtons:(BOOL)arg5 shouldShowUpdatesSection:(BOOL)arg6 ;
-(BOOL)shouldShowUpdatesSection;
-(NSDictionary *)maxNumberOfRowsBySection;
-(NSOrderedSet *)orderedSections;
-(BOOL)shouldShowSeeAllRow;
-(BOOL)showActionButtons;
-(BOOL)shouldShowSectionHeaders;
@end

