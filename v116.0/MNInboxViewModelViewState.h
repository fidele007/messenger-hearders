/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:49 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNInboxTruncationViewModel;

@interface MNInboxViewModelViewState : FBValueObject <NSCopying> {

	BOOL _converstionStartersSectionExpanded;
	BOOL _recentVideosUnitExpanded;
	BOOL _recentlyClickLinksUnitExpanded;
	long long _seeMoreButtonPressCount;
	MNInboxTruncationViewModel* _inboxTruncationViewModel;
	CGSize _inboxViewSize;

}

@property (nonatomic,readonly) CGSize inboxViewSize;                                                    //@synthesize inboxViewSize=_inboxViewSize - In the implementation block
@property (nonatomic,readonly) long long seeMoreButtonPressCount;                                       //@synthesize seeMoreButtonPressCount=_seeMoreButtonPressCount - In the implementation block
@property (nonatomic,readonly) BOOL converstionStartersSectionExpanded;                                 //@synthesize converstionStartersSectionExpanded=_converstionStartersSectionExpanded - In the implementation block
@property (nonatomic,readonly) BOOL recentVideosUnitExpanded;                                           //@synthesize recentVideosUnitExpanded=_recentVideosUnitExpanded - In the implementation block
@property (nonatomic,readonly) BOOL recentlyClickLinksUnitExpanded;                                     //@synthesize recentlyClickLinksUnitExpanded=_recentlyClickLinksUnitExpanded - In the implementation block
@property (nonatomic,copy,readonly) MNInboxTruncationViewModel * inboxTruncationViewModel;              //@synthesize inboxTruncationViewModel=_inboxTruncationViewModel - In the implementation block
-(unsigned long)hashDynamic;
-(BOOL)isEqualDynamic:(id)arg1 ;
-(CGSize)inboxViewSize;
-(long long)seeMoreButtonPressCount;
-(BOOL)recentVideosUnitExpanded;
-(BOOL)recentlyClickLinksUnitExpanded;
-(MNInboxTruncationViewModel *)inboxTruncationViewModel;
-(BOOL)converstionStartersSectionExpanded;
-(id)initWithInboxViewSize:(CGSize)arg1 seeMoreButtonPressCount:(long long)arg2 converstionStartersSectionExpanded:(BOOL)arg3 recentVideosUnitExpanded:(BOOL)arg4 recentlyClickLinksUnitExpanded:(BOOL)arg5 inboxTruncationViewModel:(id)arg6 ;
@end

